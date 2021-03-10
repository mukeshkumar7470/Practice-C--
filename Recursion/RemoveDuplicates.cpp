#include <iostream>
#include <climits>
using namespace std;

/* Remove Duplicates */

/* Base Case: If the string is empty: //no duplicates
return “”;
If the current character ch is ‘x’, we return resultant string + ch,
Else we return ch + resultant string
Time Complexity: O(N 2 )
Space Complexity: O(N 2 )
Time complexity will be O(N 2 ) because s.substr(i) takes O(N) times and it is called
O(N) times.
Space complexity will be O(N 2 ) because s.substr(i) gives a string of O(N) size and it
is called O(N) times. */

string removeDup(string s){

    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = removeDup(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    
    return (ch + ans);
}


int main(){
     
     string rd = removeDup("myfddgdddefgs");

     cout<< rd <<endl;

    return 0;
}         
