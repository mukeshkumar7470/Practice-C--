#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

/* 1. append(): Inserts additional characters at the end of the string (can also be
done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the
size of the new string. */

    string s1 = "Edu", s2 = "cation";
    s1.append(s2);
    cout<< s1 <<endl;

    //or 
    s1 = s1 + s2;
    cout<< s1 <<endl;


/* 2. assign(): Assigns new string by replacing the previous value (can also be
done using ‘=’ operator). */


    string s = "Nice";
    s.assign("Guys");
    cout<< s << endl;

    //or
    s = "Guys";
    cout<< s << endl;


/* 3. at(): Returns the character at a particular position (can also be done using ‘[
]’ operator). Its time complexity is O(1). */


    string str1 = "MyName";
    cout << str1.at(3) << endl;
    //or
    cout <<  str1[3] << endl;


/* 4. begin(): Returns an iterator pointing to the first character. Its time
complexity is O(1). */

/* 5. clear(): Erases all the contents of the string and assign an empty string (“”)
of length zero. Its time complexity is O(1). */

    string str2 = "MyName";
    str2.clear();
    cout << str1.at(3) << endl;



/* 6. compare(): Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. Its time complexity is O(N +
M) where N is the size of the first string and M is the size of the second
string. */


    string str3 = "abc", str4 = "xyz";
    cout << str4.compare(str3) << endl; //basically a value greater than 0 denoting str4 is greaterthan str3.

    str3 = "abc";
    str4 = "abc";
    cout << str3.compare(str4) << endl; //Output: 0 - as both string are equal.

    str3 = "xyz";
    str4 = "abc";
    cout << str4.compare(str3) << endl; //basically a value greater than 0 denoting str4 is lessthen str3.


/* 7. c_str(): Convert the string into C-style string (null terminated string) and
returns the pointer to the C-style string. Its time complexity is O(1). */

/* 8. empty(): Returns a boolean value, true if the string is empty and false if the
string is not empty. Its time complexity is O(1).
Output: given */

    string str5 ="MyNameIs";
    str5.clear();
    if (str5.empty())
    {
        cout<< "Given string is empty"<<endl;
    }
    

/* 9. end(): Returns an iterator pointing to a position which is next to the last
character. Its time complexity is O(1). */


/* 10.erase(): Deletes a substring of the string. Its time complexity is O(N) where
N is the size of the new string. */

    string str6 ="MyNameIs";
    str6.erase(3, 4);
    cout<<str6<<endl;

/* 11.find(): Searches the string and returns the first occurrence of the parameter
in the string. Its time complexity is O(N) where N is the size of the string.*/

    string str8 ="MyNameIs";
    cout<<str8.find("Name")<<endl;



/* 12.insert(): Inserts additional characters into the string at a particular position.
Its time complexity is O(N) where N is the size of the new string. */

    string str9 ="MyNameIs";
    str9.insert(8, "Mukesh");
    cout<<str9<<endl;

/* 13.length(): Returns the length of the string. Its time complexity is O(1). */

    string str10 ="MyNameIs";
    cout<<str10.length()<<endl;


/* 14.resize(): Resize the string to the new length which can be less than or
greater than the current length. Its time complexity is O(N) where N is the
size of the new string. */

    string str11 ="MyNameIs";
    str11.resize(6);
    cout<<str11<<endl;



/* 15.size(): Returns the length of the string. Its time complexity is O(1). */
    
    string str12 ="MyNameIs";
    cout<<str12.size()<<endl;


/* 16.substr(): Returns a string which is the copy of the substring. Its time
complexity is O(N) where N is the size of the substring. For example: */

    string str13 ="MyNameIs";
    cout<<str13.substr(3, 4)<<endl;


/* 17.stoi(): Returns the strings converted to int datatype. */

    string str14 ="789";
    int x = stoi(str14);
    cout<<x + 2 <<endl;

/* To convert an integer to a string, we use to_string() function. Example */

    int y = 789;
    cout<< to_string(y) + "2" <<endl;

/* Sorting a string : To sort a string, we need to include a header file known as
algorithm in our code like this : #include <algorithm>  Then we can use sort() function that is present in above header file on our string.
Sort() function takes 2 arguments viz. iterator to start of the string and iterator to
end of the string.*/


    string str15 ="xjhsjsdkabskds";
    sort(str15.begin(), str15.end());
    cout<<str15<<endl;


    return 0;
}