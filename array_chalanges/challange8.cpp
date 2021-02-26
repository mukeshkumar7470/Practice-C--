#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;


/* Maximum Sum Subarray Array 

 1. for all subarray print.

 2. Brute Force:
Idea: For each subarray arr[i..j], calculate its sum.
Time Complexity: O(N​3​)
Space Complexity: O(1)
 
 4. Prefix Sum Technique:
Idea: For each subarray arr[i..j], calculate its sum. Using prefix sum can
reduce time to calculate the sum of arr[i..j] to O(1)
Time Complexity: O(N​2​)
Space Complexity: O(N)

 5. Kadane’s Algorithm:
Idea: Start taking the sum of the array, as soon as it gets negative, discard
the current subarray, and start a new sum.
Time Complexity: O(N)
Space Complexity: O(1)
   
 */


int main(){

    int n;
    cin>> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //our logic


    /* //for all subarray print

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
            
        }
        
    } */

    /* ------------------------------------------------------- */

    /* //Brute Force method:
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            maxSum = max(maxSum, sum);
            
        }
        
    }

    cout<<maxSum<<endl; */

    /* ------------------------------------------------------- */
    
    /* //Prefix Sum Technique method:
    int currSum[n+1];
    currSum[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        currSum[i] = currSum[i-1] + a[i-1];
    }

        int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        // maxSum = max(maxSum, currSum[i]);
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = max(maxSum, sum);
        }
        
    }

    cout<< maxSum; */
    
    /* ------------------------------------------------------- */


    //Kadane’s Algorithm
    
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
        
    }
    
    cout<< maxSum; 

    return 0;
}         