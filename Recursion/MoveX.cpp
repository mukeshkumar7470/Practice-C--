#include <iostream>
#include <climits>
using namespace std;

/* Move all ‘x’ to the end of the string */

/* Base Case: If the string is empty:
return “ “;
If the current character ch is ‘x’, we add the resultant string + ch,
Else we return ch + resultant string
Time Complexity: O(N 2 ) [IMP]
Space Complexity: O(N 2 ) [IMP]
Time complexity will be O(N 2 ) because s.substr(i) takes O(N) times and it is called
O(N) times.
Space complexity will be O(N 2 ) because s.substr(i) gives a string of O(N) size and it
is called O(N) times.
FollowUp: Try to do this in O(N) time and space. Hint: Pass by reference and
indices. */

string moveallX(string s){

    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveallX(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    
    return (ch + ans);
}


int main(){
     
     string rd = moveallX("xdedfghccxxxddejecx");

     cout<< rd <<endl;

    return 0;
}         
