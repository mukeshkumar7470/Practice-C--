#include <iostream>
using namespace std;

/* First Reapting Array 

Problem : 
         Given an array arr[] of size N. The task is to find the first reapting element
         in the array of integer, i.e. an element that occure more than once and whose 
         index of first occurrence is smallest.   
         
         Constraints:
         1<=N<=10 ki pwer 6
         0<=Ai<=10 ki power 6  */

          /* Solution : : : :

           Base Idea:
            To check if a element is reapting, we maintain an array idx[], which stores the first occurrence (index) of a particular element a[i].
             > Initialise the idx[] with -1, and minidx with INT_MAX.
             > Keep Updating idx[], while traversing the given array. */

/* //first Method
int main()
{
    int n;
    cin>>n;
    int a;
    int b;
    int array1[n];
    for (int i=0; i<n; i++)
    {
        cin>>array1[i];
    }
    for ( a=0; a<n; a++)
    {
        for ( b=0; b<a; b++)
        {
            if (a!=b)
            {
                if (array1[a]==array1[b])
                {
                    cout<<b<<endl;

                }

            }

        }

    }
    return 0;
} */

//second Method
int main()
{
    int n=0,i;
    cout<<"Enter the length of array:";
    cin>>n;
    
    cout<<"Enter the elements of the array";
    
    int a[n];   //declaring the main array which is to be inserted by the user
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    //declaring idx[]
    
    const int N=1e5+2;
    int idx[N];
    for(i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    
    //main block of code
    int small=1e8;
    
    for(i=0;i<n;i++)
    {
        if(idx[a[i]]!=-1 && idx[a[i]]<small)
        {
            small=idx[a[i]];
        }
        else
        {
            idx[a[i]]=i;
            
        }
    }
    cout<<"The answer is : "<<small;

    return 0;
}

// Third method
/* int main(){
    
    int arr[] = {3,4,5,6,7,8,9,6,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int temp[1000] = {0};
    int index = n;
    for(int i=n-1;i>=0;i--){
        if(temp[arr[i]]==1){
            index = min(index,i);
        }
        else{
            temp[arr[i]]++;
        }
    }

    std::cout << index << std::endl;

    return 0;
} */