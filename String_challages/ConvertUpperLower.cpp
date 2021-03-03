#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


//UpperCase-LowerCase interconversion

/* Given a string s with both uppercase and lowercase latin characters (‘a’ - ‘z’). Your
task is convert whole string into
1. Lower Case
2. Upper Case
Base idea: ‘a’ - ‘A’ = 32
1. Lowercase to UpperCase
Approach
1. Iterate over the string s and if s[i] is a lower case character, then update
s[i] -= 32
2. UpperCase to LowerCase
Approach
1. Iterate over the string s and if s[i] is a upper case character, then update
s[i] +=32 */

/* //1st Method
int main(){

    //Declaring a string
    string str = "xcftedsdfyhrddd"; 

    sort(str.begin(), str.end());

    transform(str.begin(), str.end(), str.begin(), :: toupper);
    cout<<str<<endl;

    transform(str.begin(), str.end(), str.begin(), :: tolower);
    cout<<str<<endl; */

    /* --------------------------------------------------------------------------- */

//2nd Method
int main(){

    //Declaring a string
    string str = "xcftedsdfyhrddd"; 

    //to upper case 
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' || str[i] <= 'z')
        {
            str[i] -= 32;
        }
        
    }

    cout<< str <<endl;

    //to lower case 
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' || str[i] <= 'Z')
        {
            str[i] += 32;
        }
        
    }

    cout<< str <<endl;
    


    return 0;
}