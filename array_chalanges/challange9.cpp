#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;


/* Maximum Sum Circular Subarray: 
 
Idea: 
There will 2 cases,
To get the Min subarray we multiply the array by -1 and get the maximum sum
subarray.
Time Complexity: O(N)
 
 */

int kadane(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
        
    }

    return maxSum;
}

int main(){

    int n;
    cin>> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //our logic
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int totalsum = 0;    

    for (int i = 0; i < n; i++)
    {
        totalsum+=arr[i];
        arr[i] =-arr[i];
    }
    wrapsum = totalsum + kadane(arr, n);

    cout<<max(wrapsum, nonwrapsum)<<endl;
    

    return 0;
}