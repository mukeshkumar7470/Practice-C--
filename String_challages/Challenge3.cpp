#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


//Compression of strings

/* Given a string s, your task is to remove the repeating consecutive characters.

Approach: 
Create an answer string and iterate in the string from i=1 and check if it
is equal to the previous character. Two cases arise
1. s[i] = s[i-1] - then do not push_back the i th character to the answer string.
2. s[i] != s[i-1] - then push_back the i th character to the answer string. */

int main(){

    //Declaring a string
    string str = "aaaaaafdddddfdeeghf"; 

    int n = str.size();

    // Delete Reapting character
    char ans[100];
    ans[0] = str[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (str[i] != str[i-1])
        {
            ans[count] = str[i], count++;
        }
        
    }
    
    cout<< ans <<endl;
    

    return 0;
}