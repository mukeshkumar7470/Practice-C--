#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter Number: ";
    cin>>n;

    int sum = 0;
    int originalN = n;
    while (n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit, 3);
        n = n/10;

    }

    if (sum == originalN)
    {
        cout<<"The Sum of Enterd Digit is "<<sum<<" so this is Armstrong Number"<<endl;
    }else{
        cout<<"The Sum of Enterd Digit is "<<sum<<" so this is Not Armstrong Number"<<endl;

    }

    
    
    return 0;
}