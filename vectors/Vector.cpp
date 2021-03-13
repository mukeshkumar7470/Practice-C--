#include <iostream>
#include <climits>
#include <vector>
using namespace std;

/* Vectors in C++ */

/* Vectors are dynamic arrays. They have the ability to resize itself when it gets
filled. The size of the vector gets doubled each time when they get filled. */

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    //Iterators
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout<< *it <<endl;
    }
    
    return 0;
}         
