#include <iostream>
#include <climits>
using namespace std;

void selectionSorting(int arr[], int n){

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] <  arr[i])
            {
                //swap the value
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
    }

}

int main(){

    int n;
    cout<<"Enter the Array Size: ";
    cin>>n;

    int arr[n] ;
    cout<<"Enter the array "<<n<<" Elements: ";
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    selectionSorting(arr, n);
    
    cout<<"The sorted list is: ";
    for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}


    return 0;
}