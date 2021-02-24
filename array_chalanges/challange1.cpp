#include <iostream>
#include <climits>
using namespace std;

/* Max till i 

Problem : Given an array a[] size of n. For every i from  0 to n-1
          Output max(a[0],a[1],.... , a[i]) */


int main(){

    int mx = -1999999;
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

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout<<mx<<endl;

    }

    return 0;
}         

