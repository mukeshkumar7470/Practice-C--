#include <iostream>
#include <climits>
using namespace std;

/* Replace Pi */

/* Base Case: If the string is empty:
return “”;
If s[0] == ‘p’ and s[1] == ‘i’ :
print(“3.14”)
else:
print(s[0])
Time Complexity: O(N 2 )
Space Complexity: O(N 2 )
FollowUp: Try to do this in O(N) time and space. Hint: Pass by reference and
indices. */

void replacepi(string s){

    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout<< "3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<< s[0];
        replacepi(s.substr(1));

    }

}


int main(){
     
     replacepi("pippiswhkpia");

    return 0;
}         
