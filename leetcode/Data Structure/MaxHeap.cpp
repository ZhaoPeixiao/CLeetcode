//
// Created by Peixiao on 2021/6/22.
//

#include "MaxHeap.h"

template<class T>
MaxHeap<T>::MaxHeap() {
    new(this)MaxHeap(30);
}

template<class T>
MaxHeap<T>::MaxHeap(int capacity) {
    mSize = 0;
    mCapacity = capacity;
    mHeap = new T[mCapacity];
}

template<class T>
MaxHeap<T>::~MaxHeap<T>() {
    mSize = 0;
    mCapacity = 0;
    delete[] mHeap;
}

template<class T>
int MaxHeap<T>::getIndex(T data) {
    for (int i = 0; i < mSize; i++) {
        if (data == mHeap[i]) {
            return i;
        }
    }
    return -1;
}


/*
* 最大堆的向下调整算法
*
* 注：数组实现的堆中，第N个节点的左孩子的索引值是(2N+1)，右孩子的索引是(2N+2)。
*
* 参数说明：
*     start -- 被下调节点的起始位置(一般为0，表示从第1个开始)
*     end   -- 截至范围(一般为数组中最后一个元素的索引)
*/
template<class T>
void MaxHeap<T>::filterDown(int start, int end) {
    int root = start;
    int left = 2 * root + 1;
    T tmp = mHeap[root];
    while (left <= end) {
        if (left < end && mHeap[left] < mHeap[left + 1]) {
            left++;
        }
        if (tmp >= mHeap[left]) {
            break;
        } else {
            mHeap[root] = mHeap[left];
            root = left;
            left = 2 * left + 1;
        }
    }
    mHeap[root] = tmp;
}

template<class T>
int MaxHeap<T>::remove(T data) {
    int index;
    if (mSize == 0) {
        return -1;
    }

    index = getIndex(data);
    if (index == -1) {
        return -1;
    }

    mHeap[index] = mHeap[--mSize];
    filterDown(index, mSize - 1);

    return 0;
}

template<class T>
void MaxHeap<T>::filterUp(int start) {
    int c = start;
    int p = (c - 1) / 2;
    T tmp = mHeap[c];

    while (c > 0) {
        if (mHeap[p] >= tmp) {
            break;
        } else {
            mHeap[c] = mHeap[p];
            c = p;
            p = (p - 1) / 2;
        }
    }

    mHeap[c] = tmp;
}

template<class T>
int MaxHeap<T>::insert(T data) {
    if (mSize == mCapacity) {
        return -1;
    }
    mHeap[mSize] = data;
    filterUp(mSize);
    mSize++;

    return 0;
}

template<class T>
void MaxHeap<T>::print() {
    for (int i = 0; i < mSize; i++)
        cout << mHeap[i] << " ";
}

