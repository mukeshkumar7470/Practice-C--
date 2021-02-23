#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Array Size: ";
    cin>>n;

    int array[n] ;
    cout<<"Enter the array "<<n<<" Elements: ";
    
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    cout<<"Your Entered Array are: ";

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}