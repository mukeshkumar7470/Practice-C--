#include <iostream>
#include <climits>
using namespace std;

/* Searching in a Matrix */


int main(){

    //for check inpput
    #ifndef ONLINE_JUDGE
          freopen("input.txt", "r", stdin);
          freopen("output.txt", "w", stdout);
    #endif

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

    int x;
    cout<<"Enter the value You Want to find: ";
    cin>>x;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == x);
            {
                    
                cout<<i<<" "<<j<<"\n";
                flag = true;
            }
        }

        
    }

    if(flag){
        cout<<"Element is found\n"; 
    } else{
        cout<<"Element is not found\n";
    }
    

    return 0;
}         
