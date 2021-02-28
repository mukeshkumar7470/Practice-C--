#include <iostream>
#include <climits>
using namespace std;

/* Print Matrix */


int main(){

    int n,m;
    cout<<"Enter the Row and Coloumn size: ";
    cin>>n>>m;

    int arr[n][m] ;
    cout<<"Enter the Row and coloumn Value: ";
    
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
           cin>>arr[i][j];
       }
       
    }

    cout<<"Matrix is:"<<endl;

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
       
    }

    return 0;
}         
