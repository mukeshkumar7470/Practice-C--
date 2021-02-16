#include <iostream>
using namespace std;

void simpleIntrest(){
    float principal, rate, time, interest;

   cout << "Enter amount:";
   cin >> principal;

   cout << "Enter Rate:";
   cin >> rate;

   cout << "Enter Time:";
   cin >> time;

   interest = (principal * rate * time) / 100;

   cout << "Simple Interest: " << interest << endl;

}

int main(){

    simpleIntrest();

    return 0;
}