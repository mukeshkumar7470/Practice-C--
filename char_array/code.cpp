#include <iostream>
#include <climits>
using namespace std;

//check Palindrome

int main(){

    int n;
    cout<<"Enter the Char Array Size: ";
    cin>>n;

    char arr[n+1] ;
    cin>>arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
        
    }
    if (check == true)
    {
        cout<<"Word is Palindrome"<<endl;
    }
    else{
        cout<<"Word is Not Palindrome"<<endl;
    }
    

    return 0;
}