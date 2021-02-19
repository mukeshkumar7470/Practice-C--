#include <iostream>
using namespace std;

/* find the sum of n natural
numbers */


int sum(int n){

     int sum=0;

     for (int counter = 1; counter <= n; counter++)
    {
        sum +=counter;
    }

    return sum;

}


int main(){
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    
    return 0;
}