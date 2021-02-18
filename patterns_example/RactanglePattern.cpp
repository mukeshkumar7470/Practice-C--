#include <iostream>
using namespace std;

int main(){

    int rows, colm;

    cout<<"Enter the row value : ";
    cin>>rows;

    cout<<"Enter the colomn value : ";
    cin>>colm;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}