#include <iostream>
#include <climits>
#include "bits/stdc++.h"
using namespace std;

/* Rat In a Maze */

/* Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to
reach (n-1, n-1). If you are currently on (x,y), you can move to (x+1,y) or (x,y+1).
You can not move to the walls.
Idea: Try all the possible paths to see if you can reach (n-1,n-1)


Input:
0 denotes wall, 1 denotes free path
two numbers n, m
Next n lines contain m numbers (0 or 1)
Output:
Print 1 if rat can reach (n-1,m-1)
Print 0 if it can not reach (n-1,m-1)
Test Case 1:
Input:
5
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1
Output:
1 

Time Complexity: O(2 n )
Space Complexity: O(2 n )*/

bool isSafe(int **arry, int x, int y, int n){
    if (x < n && y < n && arry[x][y] == 1){
       return true; 
    }
    return false;
}

bool ratInMaze(int** arry, int x, int y, int n, int** solArry){
    if ((x == (n-1)) && (y == (n-1)))
    {
        solArry[x][y] = 1;
        return true;
    }
    if (isSafe(arry, x, y, n))
    {
        solArry[x][y] = 1;
        if (ratInMaze(arry, x + 1, y, n, solArry))
        {
            return true;
        }
        if (ratInMaze(arry, x, y + 1, n, solArry))
        {
            return true;
        }
        solArry[x][y] = 0; //backtracking
        return false; 
    }
    return false;   
}


int main(){
    int n;
    cin>>n;

    int** arry=new int*[n];
    for (int i = 0; i < n; i++)
    {
        arry[i]=new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arry[i][j];
        }
        
    }
    cout<<"Solution are: "<<endl;

    int** solArry=new int*[n];
    for (int i = 0; i < n; i++)
    {
        solArry[i]=new int[n];
        for (int j = 0; j < n; j++)
        {
            solArry[i][j] = 0;
        }
        
    }

    if(ratInMaze(arry, 0, 0, n, solArry)){
        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < n; j++)
           {
               cout<<solArry[i][j] << " ";
           }
           cout<<endl;
           
        }
        
    }
    
}         