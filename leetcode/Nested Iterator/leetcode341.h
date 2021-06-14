//
// Created by Peixiao on 2021/6/14.
//

#ifndef NESTED_ITERATOR_LEETCODE341_H
#define NESTED_ITERATOR_LEETCODE341_H

#endif //NESTED_ITERATOR_LEETCODE341_H


#include "NestedInteger.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class NestedIterator {
public:
    vector<NestedInteger> list;
    queue<int> queue;

    NestedIterator(vector<NestedInteger> &nestedList) {
        this->list = nestedList;
        for (int i = 0; i < list.size(); i++) {
            if (list[i].isInteger()) {
                queue.push(list[i].getInteger());
            } else {
                traverse(list[i].getList());
            }
        }
    }

    void traverse(vector<NestedInteger> &list) {
        for (int i = 0; i < list.size(); i++) {
            if (list[i].isInteger()) {
                queue.push(list[i].getInteger());
            } else {
                traverse(list[i].getList());
            }
        }
    }

    int next() {
        int val = queue.front();
        queue.pop();
        return val;
    }

    bool hasNext() {
        return !queue.empty();
    }
};
