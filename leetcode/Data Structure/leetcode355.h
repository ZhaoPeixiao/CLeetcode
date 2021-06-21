//
// Created by Peixiao on 2021/6/21.
//

#ifndef DATA_STRUCTURE_LEETCODE355_H
#define DATA_STRUCTURE_LEETCODE355_H

#endif //DATA_STRUCTURE_LEETCODE355_H

#include "header.h"


class Twitter {
public:
    unordered_map<int, set<int> > followers;
    unordered_map<int, vector<pair<int, int>  > > users;
    int time = 1;

    /** Initialize your data structure here. */
    Twitter() {

    }

    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        users[userId].push_back(make_pair(time++, tweetId));
    }

    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int> > pq;

        vector<pair<int, int> > userTweets = users[userId];
        for(int i=userTweets.size()-1, c=0; c<10 && i>=0; i--, c++)
        {
            pq.push(userTweets[i]);
        }
        set<int> follow = followers[userId];
        for(auto it: follow)
        {
            vector<pair<int, int> > followTweets = users[it];
            for(int j=followTweets.size()-1, c=0; c<10 && j>=0; j--, c++)
            {
                pq.push(followTweets[j]);
            }
        }

        vector<int> ans;
        for(int i=0; i<10 && !pq.empty(); i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }

    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        if(followerId != followeeId)
            followers[followerId].insert(followeeId);
    }

    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        followers[followerId].erase(followeeId);
    }
};