//
// Created by Peixiao on //.
//

#include "MinHeap.h"

/*
* 构造函数
*/
template<class T>
MinHeap<T>::MinHeap() {
    new(this)MinHeap(30);
}

template<class T>
MinHeap<T>::MinHeap(int capacity) {
    mSize = 0;
    mCapacity = capacity;
    mHeap = new T[mCapacity];
}

/*
  * 析构函数
  */
template<class T>
MinHeap<T>::~MinHeap() {
    mSize = 0;
    mCapacity = 0;
    delete[] mHeap;
}

/*
  * 返回data在二叉堆中的索引
  *
  * 返回值：
  *     存在 -- 返回data在数组中的索引
  *     不存在 -- -
  */
template<class T>
int MinHeap<T>::getIndex(T data) {
    for (int i = 0; i < mSize; i++)
        if (data == mHeap[i])
            return i;

    return -1;
}

/*
  * 最小堆的向下调整算法
  *
  * 注：数组实现的堆中，第N个节点的左孩子的索引值是(N+)，右孩子的索引是(N+)。
  *
  * 参数说明：
  *     start -- 被下调节点的起始位置(一般为，表示从第个开始)
  *     end   -- 截至范围(一般为数组中最后一个元素的索引)
  */
template<class T>
void MinHeap<T>::filterDown(int start, int end) {
    int c = start;          // 当前(current)节点的位置
    int l = 2 * c + 1;     // 左(left)孩子的位置
    T tmp = mHeap[c];    // 当前(current)节点的大小

    while (l <= end) {
        // "l"是左孩子，"l+"是右孩子
        if (l < end && mHeap[l] > mHeap[l + 1])
            l++;        // 左右两孩子中选择较小者，即mHeap[l+]
        if (tmp <= mHeap[l])
            break;        //调整结束
        else {
            mHeap[c] = mHeap[l];
            c = l;
            l = 2 * l + 1;
        }
    }
    mHeap[c] = tmp;
}

/*
 * 删除最小堆中的data
 *
 * 返回值：
 *      ，成功
 *     -，失败
 */
template<class T>
int MinHeap<T>::remove(T data) {
    int index;
    // 如果"堆"已空，则返回-
    if (mSize == 0)
        return -1;

    // 获取data在数组中的索引
    index = getIndex(data);
    if (index == -1)
        return -1;

    mHeap[index] = mHeap[--mSize];        // 用最后元素填补
    filterDown(index, mSize - 1);    // 从index号位置开始自上向下调整为最小堆

    return 0;
}

/*
 * 最小堆的向上调整算法(从start开始向上直到，调整堆)
 *
 * 注：数组实现的堆中，第N个节点的左孩子的索引值是(N+)，右孩子的索引是(N+)。
 *
 * 参数说明：
 *     start -- 被上调节点的起始位置(一般为数组中最后一个元素的索引)
 */
template<class T>
void MinHeap<T>::filterUp(int start) {
    int c = start;            // 当前节点(current)的位置
    int p = (c - 1) / 2;        // 父(parent)结点的位置
    T tmp = mHeap[c];        // 当前节点(current)的大小

    while (c > 0) {
        if (mHeap[p] <= tmp)
            break;
        else {
            mHeap[c] = mHeap[p];
            c = p;
            p = (p - 1) / 2;
        }
    }
    mHeap[c] = tmp;
}

/*
 * 将data插入到二叉堆中
 *
 * 返回值：
 *     ，表示成功
 *    -，表示失败
 */
template<class T>
int MinHeap<T>::insert(T data) {
    // 如果"堆"已满，则返回
    if (mSize == mCapacity)
        return -1;

    mHeap[mSize] = data;        // 将"数组"插在表尾
    filterUp(mSize);            // 向上调整堆
    mSize++;                    // 堆的实际容量+

    return 0;
}

/*
 * 打印二叉堆
 *
 * 返回值：
 *     ，表示成功
 *    -，表示失败
 */
template<class T>
void MinHeap<T>::print() {
    for (int i = 0; i < mSize; i++)
        cout << mHeap[i] << " ";
}