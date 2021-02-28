#include <iostream>
#include <climits>
using namespace std;

//Largest word in a sentence

int main(){

    int n;
    cout<<"Enter the Char: ";
    cin>>n;
    cin.ignore();

    char arr[n+1] ;
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLength = 0, maxLangth = 0;
    int st = 0, maxSt = 0;

    while (i<n)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLength > maxLangth)
            {
                maxSt = st;
                maxLangth = currLength;
            }

            st = i+1;
            currLength = 0;
            
        }
        else
        {
            currLength++;
        }

        if(arr[i] == '\0')
        {
             break;
        }
        
        i++;  
    }

    cout << maxLangth <<endl;
    for(int i = 0; i < maxLangth; i++)
    {
        cout<< arr[i+maxSt];
    }
    
    

    return 0;
}