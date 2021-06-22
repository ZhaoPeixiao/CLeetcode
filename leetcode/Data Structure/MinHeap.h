//
// Created by Peixiao on 2021/6/22.
//

#ifndef DATA_STRUCTURE_MINHEAP_H
#define DATA_STRUCTURE_MINHEAP_H

#endif //DATA_STRUCTURE_MINHEAP_H

#include "header.h"

template<class T>
class MinHeap {
private:
    T *mHeap;        // 数据
    int mCapacity;    // 总的容量
    int mSize;        // 实际容量

private:
    // 最小堆的向下调整算法
    void filterDown(int start, int end);

    // 最小堆的向上调整算法(从start开始向上直到0，调整堆)
    void filterUp(int start);

public:
    MinHeap();

    MinHeap(int capacity);

    ~MinHeap();

    // 返回data在二叉堆中的索引
    int getIndex(T data);

    // 删除最小堆中的data
    int remove(T data);

    // 将data插入到二叉堆中
    int insert(T data);

    // 打印二叉堆
    void print();
};