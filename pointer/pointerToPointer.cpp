#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *p;
    p = &a;

    cout<<*p<<endl; //10 print

    int **q = &p;

    cout<<*q<<endl; //print address of *p
    cout<<**q<<endl; // print value of *p

    return 0;
}