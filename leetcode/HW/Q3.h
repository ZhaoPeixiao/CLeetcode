//
// Created by Peixiao on 2021/6/18.
//

#ifndef HW_Q3_H
#define HW_Q3_H

#endif //HW_Q3_H

#include <vector>
#include <string>
#include <iostream>
#include <stack>

using namespace std;


string getString(string dirTreeLine){
    int pos = dirTreeLine.rfind("|-");
    return dirTreeLine.substr(pos + 2);
}

int getDepth(string dirTreeLine){
    int pos = dirTreeLine.rfind("|-");
    return pos/2 + 1;
}

// 待实现函数，在此函数中填入答题代码;
vector<string> DelAllDirectorys(const vector<string> &dirTreeLines) {
    vector<string> res;
    int maxDepth = 0;
    for (int i = 1; i < dirTreeLines.size(); i++) {
        maxDepth = max(maxDepth, getDepth(dirTreeLines[i]));
    }
    vector<vector<string>> stack(maxDepth + 1);
    stack[0].push_back(dirTreeLines[0]);
    for (int i = 1; i < dirTreeLines.size(); i++) {
        int depth = getDepth(dirTreeLines[i]);
        string current = getString(dirTreeLines[i]);
        int next = i + 1;
        if(next < dirTreeLines.size()){
            int next_depth = getDepth(dirTreeLines[next]);
            if (next_depth == depth) {
                res.push_back(current);
            } else {
                stack[depth].push_back(current);
            }
        } else{
            stack[depth].push_back(current);
        }
    }

    for (int i = maxDepth; i >=0 ; i--) {
        vector<string> s = stack[i];
        for (int j = 0; j < s.size(); j++) {
            res.push_back(s[j]);
        }
    }

    return res;

}
