//
// Created by Peixiao on 2021/6/22.
//

#ifndef DATA_STRUCTURE_MAXHEAP_H
#define DATA_STRUCTURE_MAXHEAP_H

#endif //DATA_STRUCTURE_MAXHEAP_H

#include "header.h"

template <class T>
class MaxHeap{
private:
    T *mHeap;   // 数据
    int mCapacity;  // 总容量
    int mSize;      // 实际容量

private:
    // 最大堆的向下调整算法
    void filterDown(int start, int end);

    // 最大堆的向上调整算法(从start开始向上直到0，调整堆)
    void filterUp(int start);

public:
    MaxHeap();

    MaxHeap(int capacity);

    ~MaxHeap();

    int getIndex(T data);

    int remove(T data);

    int insert(T data);

    void print();
};

