#include <iostream>
using namespace std;

int main(){

    float num1, num2;
    cout<<"input 2 Numbers: ";
    cin>>num1>>num2;

    char op;
    cout<<"input an operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Addition is: "<<num1 + num2<<endl;
        break;
    
    case '-':
        cout<<"Substration is: "<<num1 - num2<<endl;
        break;

    case '*':
        cout<<"Multiplication is: "<<num1 * num2<<endl;
        break;

    case '/':
        cout<<"Division is: "<<num1 / num2<<endl;
        break;

    
    default:
        cout<<"Enter another operator"<<endl;
        break;
    }
    
    
    return 0;
}