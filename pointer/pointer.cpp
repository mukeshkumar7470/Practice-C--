#include <iostream>
#include <climits>
using namespace std;

int main(){

    int a = 10;
    int *aptr = &a;

    cout<<*aptr<<endl;//value of a
    cout<<aptr<<endl;//address of a
    *aptr = 20;
    cout<<a<<endl;//chenage print value a

    return 0;
}