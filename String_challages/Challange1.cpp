#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


//Form the biggest number

/* Given a string of integers, our task is to form the biggest number out of those
numbers in the string.
Approach:
Sort the string in descending order using inbuilt sort function. */

int main(){

    //Declaring a string
    string str = "754663259990655463231212"; 

    sort(str.begin(), str.end(), greater<int>());

    cout<<str<<endl;


    return 0;
}