//
// Created by Peixiao on 2021/6/22.
//

#ifndef DATA_STRUCTURE_LEETCODE225_H
#define DATA_STRUCTURE_LEETCODE225_H

#endif //DATA_STRUCTURE_LEETCODE225_H

#include "header.h"

class MyStack {
public:
    queue<int> q1, q2;

    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int val;
        while (!q1.empty()) {
            if (q1.size() == 1) {
                val = q1.front();
            } else {
                q2.push(q1.front());
            }
            q1.pop();
        }
        q2.swap(q1);
        return val;
    }

    /** Get the top element. */
    int top() {
        int val;
        while (!q1.empty()) {
            if (q1.size() == 1) {
                val = q1.front();
            }
            q2.push(q1.front());
            q1.pop();
        }
        q2.swap(q1);
        return val;
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};