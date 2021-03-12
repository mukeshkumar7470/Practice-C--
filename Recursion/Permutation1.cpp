#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;

/*

Permutations
An ordered arrangement of objects is called Permutations.
Given an array nums of distinct integers, print all the possible permutations*/

/* Sample Test Cases:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Input: nums = [0,1]
Output: [[0,1],[1,0]]
Idea:
You are at index idx, try out all the possible swap, Ensuring that you don’t produce
duplicates. */

void solve(vector<int> &nums, vector<vector<int>> &ans, int idx) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return ;
    }
    for (int i = idx; i < nums.size(); i++) {
        swap(nums[i], nums[idx]);
        solve(nums, ans, idx + 1);
        swap(nums[i], nums[idx]);
    }

}
vector<vector<int>> permute(vector<int> nums) {
    vector<vector<int>> ans;
    solve(nums,ans,0);
    return ans;
}


int main(){
    vector<vector<int>> res = permute({1, 2, 3});
    for (auto i : res) {
        for (auto ii : i) {
        cout << ii << " ";
        }
        cout << "\n";
    }
}         
