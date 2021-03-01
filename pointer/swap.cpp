#include <iostream>
using namespace std;


// call by reference
void swaping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

    int a = 10;
    int b = 20;

    // int *aptr = &a;
    // int *bptr = &b;

    // swaping(aptr,bptr);
    swaping(&a,&b); 
    cout<<a<<" "<<b<<endl;


    return 0;
}



/* // call by value --- in call by value not changed or not swap the values 
void swaping(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

} 

int main(){

    int a = 10;
    int b = 20;

    swaping(a,b); 
    cout<<a<<" "<<b<<endl;


    return 0;
} */