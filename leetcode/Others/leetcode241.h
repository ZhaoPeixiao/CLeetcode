//
// Created by Peixiao on 2021/7/6.
//

#ifndef OTHERS_LEETCODE241_H
#define OTHERS_LEETCODE241_H

#include "headers.h"

class Solution {
public:
    unordered_map<string, vector<int>> m;

    vector<int> rec(string input) {

        if (m.find(input) != m.end()) return m[input];

        int c = 0;
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '*' || input[i] == '-' || input[i] == '+') c++;
        }


        if (c == 0) return m[input] = {stoi(input)};

        vector<int> res;

        for (int i = 0; i < input.length(); i++) {
            vector<int> tmp3;
            if (input[i] == '*' || input[i] == '-' || input[i] == '+') {
                vector<int> tmp1 = rec(input.substr(0, i));
                vector<int> tmp2 = rec(input.substr(i + 1));

                for (auto k:tmp1)
                    for (auto j:tmp2)
                        if (input[i] == '*') tmp3.push_back(k * j);
                        else if (input[i] == '+') tmp3.push_back(k + j);
                        else tmp3.push_back(k - j);
            }
            res.insert(res.begin(), tmp3.begin(), tmp3.end());
        }

        return m[input] = res;
    }


    vector<int> diffWaysToCompute(string input) {
        return rec(input);
    }
};

#endif //OTHERS_LEETCODE241_H
