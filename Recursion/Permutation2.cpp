#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;

/* Given a collection of numbers, nums, that might contain duplicates, print all
possible unique permutations in any order. */

/* Sample Test Case:
Input: nums = [1,1,2]
Output:
[[1,1,2], [1,2,1], [2,1,1]]
Idea:
While swapping, avoid duplicates. I.e avoid swapping the same numbers. */

void solve(vector<int> nums, vector<vector<int>> &ans, int idx) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return ;
    }
    for (int i = idx; i < nums.size(); i++) {
        if(i != idx and nums[i]==nums[idx])
            continue;
        swap(nums[i], nums[idx]);
        solve(nums, ans, idx + 1);
    }

}
vector<vector<int>> permute(vector<int> nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    solve(nums,ans,0);
    return ans;
}


int main(){
    vector<vector<int>> res = permute({1, 2, 2, 2, 3});
    for (auto i : res) {
        for (auto ii : i) {
        cout << ii << " ";
        }
        cout << "\n";
    }
}         
