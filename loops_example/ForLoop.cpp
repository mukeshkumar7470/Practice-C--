#include <iostream>
using namespace std;

/* find the sum of n natural
numbers */

int main(){
    int n;
    cin>>n;

    int sum=0;
    for (int counter = 0; counter <= n; counter++)
    {
        sum = sum+counter;
    }
    
    cout <<sum << endl;
    
    return 0;
}