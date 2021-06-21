//
// Created by Peixiao on 2021/6/21.
//

#ifndef DATA_STRUCTURE_LEETCODE295_H
#define DATA_STRUCTURE_LEETCODE295_H

#endif //DATA_STRUCTURE_LEETCODE295_H

#include "header.h"

//class MedianFinder {
//private:
//    int size;
//    multiset<int> numSet;
//    multiset<int>::iterator midIter;
//
//public:
//    /** initialize your data structure here. */
//    MedianFinder() {
//
//    }
//
//    void addNum(int num) {
//        if (numSet.empty()) {
//            midIter = numSet.insert(num);
//            size++;
//            return;
//        }
//        numSet.insert(num);
//        if ((size & 1) && num < *midIter) {
//            --midIter;
//        } else if (!(size & 1) && num >= *midIter) {
//            ++midIter;
//        }
//        size++;
//    }
//
//    double findMedian() {
//        if(size & 1) {
//            return *midIter;
//        }
//        else{
//            return (double)(*midIter + *next(midIter))/2;
//        }
//    }
//};

class MedianFinder {
public:
    priority_queue<int> q1;
    priority_queue<int, vector<int>, greater<>> q2;

    /** initialize your data structure here. */
    MedianFinder() {

    }

    void addNum(int num) {
        if (q1.empty()) {
            q1.push(num);
            return;
        }
        if (q1.top() > num) {
            q1.push(num);
            if (q1.size() > q2.size() + 1) {
                q2.push(q1.top());
                q1.pop();
            }
        }else{
            q2.push(num);
            if (q2.size() > q1.size()) {
                q1.push(q2.top());
                q2.pop();
            }
        }
    }

    double findMedian() {
        if (q1.size() == q2.size()) {
            return (q1.top() + q2.top())/ 2.0;
        }else{
            return q1.top();
        }
    }
};

