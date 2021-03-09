#include <iostream>
#include <climits>
using namespace std;

/* To calculate n p using Recursion */

/* Objective: To calculate pth power of n i.e. n p .
Base Case : If p == 0:
return 1;
We multiply the current number and recurse for power(n, p - 1)
Time Complexity: O(N)
Space Complexity: O(N) */


int power(int n, int p){

    if (p == 0)
    {
        return 1;
    }
    
    
    int prevPower = power(n, p-1);
    return n * prevPower; 
    
}


int main(){
     int n,p;
     cin>>n>>p;

     cout<<power(n,p)<<endl;

    return 0;
}         
