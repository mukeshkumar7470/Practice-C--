#include <iostream>
#include <climits>
using namespace std;

/*Knapsack [IMP]*/

/* Given n items, each item has a certain value and weight. We have to maximize the
value of the objects we can accommodate in a bag of weight W.
Idea: For each item, we have two choices, either to include it or exclude it.
Time Complexity: O(2 n )
Space Complexity: O(2 n ) //space for call stack */

int knapsack(int value[], int wt[], int n, int w){

    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (wt[n-1] > w)
    {
        return knapsack(value, wt, n-1, w);
    }

    return max(knapsack(value, wt, n-1, w -wt[n-1]) + value[n-1], knapsack(value, wt, n-1, w)); 
}


int main(){
    int wt[] = {10,20,30};
    int value[] = {100,50, 150};
    int w = 50;
     
    cout<< knapsack(value, wt, 3, w) << endl;
    return 0;
}         
