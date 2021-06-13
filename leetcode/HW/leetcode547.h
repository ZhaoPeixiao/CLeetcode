//
// Created by Peixiao on 2021/6/13.
//

#ifndef HW_LEETCODE547_H
#define HW_LEETCODE547_H

#endif //HW_LEETCODE547_H


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    void dfs(vector<vector<int>>& isConnected, int currentCity, vector<bool>& visited){
        visited[currentCity] = true;
        for(int i = 0; i < isConnected[currentCity].size(); i++){
            if(isConnected[currentCity][i] == 1 && !visited[i]){
                dfs(isConnected, i, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int res = 0;
        int number_of_cities = isConnected.size();
        if (number_of_cities == 0) {
            return 0;
        }
        vector<bool> visited(number_of_cities, false);
        for(int i = 0; i < number_of_cities; i++){
            if(!visited[i]){
                dfs(isConnected, i, visited);
                res++;
            }
        }
        return res;
    }
};
