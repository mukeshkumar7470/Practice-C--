#include <iostream>
#include <string>
using namespace std;

int main(){

    //Declaring a string

    string str = "Tutorial"; //It declares a string of value “Tutorial”

    //Taking Input

    string s;
    cin>>s; //We use cin to input the string.

    string str;
    getline(cin, s); //Using getline() function : To input the string with space we use getline() function instead of cin.

    //Throwing Output
    cout<<s<<endl; //We use cout to throw output to the terminal.

    return 0;
}