#include <iostream>
#include <climits>
using namespace std;

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

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        //first method Basic
        /* 
        if (arr[i]>maxNo)
        {
            maxNo = arr[i];
        }
        if (arr[i]<minNo)
        {
            minNo = arr[i];
        } */


        //second method Smart Way
        
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
        
        
    }

    
    cout<<"Your Min No. is: "<<minNo<<endl;
    cout<<"Your Max No. is: "<<maxNo<<endl;

    return 0;
}