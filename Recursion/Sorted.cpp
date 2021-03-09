#include <iostream>
#include <climits>
using namespace std;

/* Check if Array is Sorted [Strictly increasing] */

/* Objective: Check if the array is in strictly increasing order or not.
Time Complexity: O(N)
Space Complexity: O(N) for function call stack */


bool sorted ( int arr [], int n ) {
if ( n == 1 ) {
return true ;
}
bool restArray = sorted ( arr + 1 , n - 1 );
return ( arr [ 0 ] < arr [ 1 ] && restArray );

}


int main(){
     int arr[] = {1,2,3,4,5};
     int n = sizeof(arr) / sizeof(arr[0]);

     if (sorted(arr, n))
        cout << "Yes, It'sorted\n";
    else
        cout << "No, It's not sorted\n";

    return 0;
}         
