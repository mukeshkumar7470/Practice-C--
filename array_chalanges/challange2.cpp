#include <iostream>
#include <climits>
using namespace std;

//comment

/* Sum of All SubArrays 

Problem : Given an array a[] size of n. Output some of each 
          subArray of the given Array */


int main(){

    int n;
    cout<<"Enter the Array Size: ";
    cin>>n;

    int arr[n] ;
    cout<<"Enter the array "<<n<<" Elements: ";
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //our logic
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        current = 0;

        for (int j = i; j < n; j++)
        {
           current += arr[j];
           cout<< current << endl;

        }
        

    }

    return 0;
}         
