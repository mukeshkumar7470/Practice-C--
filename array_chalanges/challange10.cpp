#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;


/* Pair Target Sum Problem: 
 
Find whether there exist 2 numbers that sum to K.
Important​: The Array should be sorted for two pointer approach.
Idea: keep a low and high pointer, decide which pointer to move on the basis of
arr[low] + arr[high].
Time Complexity: O(N)
Space Complexity: O(1)
 
 */

int pairsum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    
    while (low < high)
    {
        if (arr[low] + arr[high]  == k)
        {
            cout<< low << " " << high << endl;

            return true;
        }
        else if (arr[low] + arr[high]  > k)
        {
            high--;
        }
        else
        {
            low++;
        }
        
        
    }

    return false;
    
}

int main(){

    int k = 31;
    int arr[] = {2,4,7,11,14,16,20,21};
    
    //our logic
    int wrapsum;
    int nonwrapsum;

    cout<<pairsum(arr,8,k)<<endl;

    return 0;
}