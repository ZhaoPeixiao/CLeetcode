//
// Created by Peixiao on 2021/6/20.
//

#ifndef DATA_STRUCTURE_LEETCODE895_H
#define DATA_STRUCTURE_LEETCODE895_H

#endif //DATA_STRUCTURE_LEETCODE895_H

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;


class FreqStack {
public:
    vector<vector<int>> stack;
    unordered_map<int, int> freq;

    FreqStack() {
    }

    void push(int x) {
        int c = ++freq[x];
        if (stack.size() < c + 1) {
            stack.resize(c + 1);
        }
        stack[c].push_back(x);
    }

    int pop() {
        int val = stack.back().back();
        stack.back().pop_back();
        if (stack.back().size() == 0) {
            stack.pop_back();
        }
        --freq[val];
        return val;
    }
};


//class FreqStack {
//public:
//
//    unordered_map<int,pair<int,vector<int>>> u;
//    int c = 0;
//
//    FreqStack() {}
//
//    void push(int x) {
//        auto& r = u[x];
//        r.first++; // update frequency
//        r.second.push_back (c); // add most recent index
//        c++; // increment index
//    }
//
//    int pop() {
//        auto comp_value = [] (const auto& a, const auto& b) {
//            return a.second.first <  b.second.first ||
//                   (a.second.first == b.second.first &&
//                    a.second.second.back () < b.second.second.back ());
//        };
//        auto it = max_element (u.begin (), u.end (), comp_value);
//        int val = it->first;
//        it->second.first--; // decrement frequency
//        it->second.second.pop_back (); // remove last index
//        if (it->second.first == 0) u.erase (it); // remove element if
//        return val;
//    }
//};