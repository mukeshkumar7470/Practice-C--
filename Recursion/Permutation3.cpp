#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;

/* Permutations using STL */

/* Next_permutation(start,end):
If the function can determine the next higher permutation, it rearranges the
elements as such and returns true. If that was not possible (because it is already
at the largest possible permutation), it rearranges the elements according to the
first permutation (sorted in ascending order) and returns false. */

vector<vector<int>> permute(vector<int> nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    do {
        ans.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return ans;
}


int main(){
    vector<vector<int>> res = permute({1, 2, 2});
    for (auto i : res) {
        for (auto ii : i) {
        cout << ii << " ";
        }
        cout << "\n";
    }
}         
