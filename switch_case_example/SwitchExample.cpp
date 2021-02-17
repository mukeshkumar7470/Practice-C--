#include <iostream>
using namespace std;

int main(){

    char button;
    cout<<"input a character: ";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Hello";
        break;
    
    case 'b':
        cout<<"Namste";
        break;

    case 'c':
        cout<<"C love";
        break;

    case 'd':
        cout<<"light";
        break;

    case 'e':
        cout<<"Dear";
        break;
    
    default:
        cout<<"You Entered Wrong Value";
        break;
    }
    
    
    return 0;
}