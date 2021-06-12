//
// Created by Peixiao on 2021/6/12.
//

#ifndef GRAPH_LEETCODE22_H
#define GRAPH_LEETCODE22_H

#endif //GRAPH_LEETCODE22_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void backtrace(int leftCounter, int n, string curr, vector<string> res){
    if(leftCounter == 0){
        return;
    }
    if(n == 0){
        while (leftCounter != 0) {
            leftCounter --;
            curr += ")";
        }
        res.push_back(curr);
        return;
    }
    backtrace(leftCounter + 1, n - 1, curr + "(", res);
    backtrace(leftCounter - 1, n, curr + ")", res);
}


vector<string> generateParenthesis(int n) {
    int leftCounter = 1;
    vector<string> res;
    backtrace(leftCounter, n-1, "(", res);
    return res;
}