#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;




// GCD (Greatest Common Divisor)
/* In our childhood, we used to call it HCF (Highest Common Factor). GCD of two
numbers is the largest number that divides both of them.
Idea
We use the logic that
gcd(a,b) = gcd(b,a%b) */


int gcd ( int a , int b ){
while (b != 0 ){
int rem = a % b;
a = b;
b = rem;
}
return a;
}
int main (){
int a,b;
cin >> a >> b;
cout << gcd (a,b) << endl;
return 0 ;
}