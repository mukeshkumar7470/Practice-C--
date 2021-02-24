#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;


/* Record Breaker 

Problem : 
         Isyana is given the number of visitors at her local theme park on N consecutive days. The 
         number of visitors on the i-th day is V. A day is record brreaking if it satisfiles both of 
         the following conditions:
          1. The number of visitors on the day is strictly larger then the number of visitors on each
            of the previous days.
          2. Either it is the last day, or the numbers of visitors on the day is strictly larger then the number
            of visitors on the following day.
            
         Note that the very first day could be a record breaking day!
         Please help Isyana find out the number of record breaking days.      */

          /* Solution : : : :

              I have 2 cases
               First Case:
               1.Strictly greater than all
                  previous values.

               
               Second Case:
               1. Strictly greater than following value.  
               
               
               Sample Test Case
             1  2  0  7  2  0  2  2   
             
             Brute Force Approach:
             > It over all the elements and check if it is record breaking day or not.
             
             Note: To check if a[i] is record breaking day, we have to iterate over a[0], a[1],... a[i-1].

                                Time complexity for this operation: o(n)
                                Over all Time complexity: o(n*n)
            
            Optimised Approach:
            Intution: if we can optmise step(1), then we can optmise our overall solution.  
            For step(1): We need to check if a[i]> {a[i-1], a[i-2], ..., a[0]}, which is same as
                                            a[i]> max{a[i-1], a[i-2], ....,a[0]}
                                            
            For this, we will keep a variable mx, which will store the maximum value till a[i]. Then we 
            just need to check,
                                  a[i]>mx
                                  a[i]>a[i+1], {if i+1<n}
                                and update mx, mx= max(max, a[i])
            
            So Step(1) time complexity reduce to o(1).
                                            Overll time complexity: o(n) */


int main(){

    int n;
    cin>>n;

     int a[n+1];
     a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //our logic

    if(n == 1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    //Our Main Logic
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
        
    }

    cout<< ans <<endl;
    

    return 0;
}         
