#include <iostream>
using namespace std;

int main(){

    int num1,num2; //Declaring two integer variables

   /* cout displays the string provided in the
    * double quotes as it is on the screen
    */
    cout<<"Enter first integer number: ";
    /* cin is used to capture the user input
    * and assign it to the variable.
    */
   
    cin>>num1;
    cout<<"Enter second integer number: ";
    cin>>num2;  
    cout<<"Sum of entered numbers is: "<<num1+num2<<endl;    
    
    return 0;
}