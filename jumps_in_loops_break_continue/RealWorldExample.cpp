#include <iostream>
using namespace std;

int main(){

    int pocketMoney = 3000;

    for (int date = 1; date <= 30; date++)
    {
        if(date%2==0){
            cout<<"Date: "<<date<<endl;
            continue;
        }
        if (pocketMoney==0)
        {
            cout<<"Not Enough Money ";
            break;
        }
    
        cout<<"Go to OutSide "<<endl;
        pocketMoney = pocketMoney-300;

    }
    
    
    return 0;
}