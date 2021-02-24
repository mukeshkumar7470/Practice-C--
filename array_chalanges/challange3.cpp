#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;


/* Longest Airthmatic SubArray 

Problem : An arithmetic array is an array that contains at least two integers and the 
          differences between consecutive integers and equal. For example,
          [9,10], [3,3,3],  and [9,7,5,3] are arithmatic arrays, while[1,3,3,7], [2,1,2] and
          [1,2,4] are not arithmatic arrays. 
          
          Question: 
          Sarsvati has an array of N non-negative integers. The i-th integer of the array
          is Ai . she wants to choose a contiguous arithmethic subarray from her array that hasthe maximum length.
          Please help her to determine the length of the longest contiguous arithmethic subarray. */

          /* Solution : : : :
             Sample Test Case
             10  7  4  6  8  10  11 
             
             intution and Approach:
             > Loop over the array and find the answer.
             > Maintain the following variables:
               1. Previous Common Difference (pd)
               2. Current Arithmetic Subarray length (curr)
               3. Max arithmetic subarray length (ans)
               
               I have 2 cases
               First Case:
               1. pd == A[i]-A[i-1]
                  Current ans increase by 1.
               2. ans = max(ans, curr).
               
               Second Case:
               1. pd != A[i]-A[i-1]
                  Update current ans to 2.    */


int main(){

    int n;
    cin>>n;

    int a[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //our logic
    int ans = 2;
    int pd = a[1] - a[0];
    int j=2;
    int curr=2;

    while (j<n)
    {
        if (pd == a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j-1];
            curr =2;
        }
        ans = max(ans, curr);
        j++;  
    }

    cout<< ans <<endl;

    return 0;
}         
