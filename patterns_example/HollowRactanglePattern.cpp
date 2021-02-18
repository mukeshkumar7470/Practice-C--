#include <iostream>
using namespace std;

int main(){

    int rows, colm;

    cout<<"Enter the row value : ";
    cin>>rows;

    cout<<"Enter the colomn value : ";
    cin>>colm;

/*     //first method 
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colm; j++)
        {
            if (i==1 || i==rows)
            {
                cout<<"* ";
            }else if (j==1 || j==colm)
            {
                cout<<"* ";
            }else{
                cout<<"  ";

            }
            
            
        }
        cout<<endl;
        
    } */


    //Second method
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= colm; j++)
        {
            if (i==1 || i==rows || j==1 || j==colm)
            {
                cout<<"* ";
            }else{
                cout<<"  ";

            }
            
            
        }
        cout<<endl;
        
    }
    
    
    
    return 0;
}