#include <iostream>
using namespace std;

void area(); //function prototype

int main(){

    area(); //function call
    
    return 0;
}

void area() //called function
{
   int square_area, square_side;

   cout << "Enter the side of square:";
   cin >> square_side;

   square_area = square_side * square_side;

   cout << "Area of Square: " << square_area << endl;
} //end function area

