#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number Which You Want to divided by 3 :  ";
    cin>>num;

    cout<<"Your Answer id : "<<endl;

    for (int i = 0; i < num; i++)
    {
       if (i%3==0)
       {
           continue;
       }
       
        cout<<i<<endl;

    }
    
    
    return 0;
}