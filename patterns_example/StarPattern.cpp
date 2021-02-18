#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the Number: ";
    cin>>num;

    /* //First Method :
    for (int i = 1; i <= num; i++)
    {
        int j;
        for (j = 1; j <= num-i; j++)
        {
            cout<<"  ";
            
        }

        int k=i;

        for (; j <= num; j++)
        {
            cout<<"* ";
            
        }

        k=2;

        for (; j <= num+i-1; j++)
        {
            cout<<"* ";
            
        }
        cout<<endl;
    }

    for (int i = num; i >= 1; i--)
    {
        int j;
        for (j = 1; j <= num-i; j++)
        {
            cout<<"  ";
            
        }

        int k=i;

        for (; j <= num; j++)
        {
            cout<<"* ";
            
        }

        k=2;

        for (; j <= num+i-1; j++)
        {
            cout<<"* ";
            
        }
        cout<<endl;
    } */


    //Second Method :

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=num-i; j++)
        {
          cout<<"  ";  
        }

        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }

    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <=num-i; j++)
        {
          cout<<"  ";  
        }

        for (int j = 1; j <= 2*i-1; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    

    return 0;
}