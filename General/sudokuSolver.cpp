//https://practice.geeksforgeeks.org/problems/solve-the-sudoku/0


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
#define UNASSIGNED 0  
#define N 9  
  

bool FindLocation(int grid[N][N],int &row, int &col);   
bool isSafe(int grid[N][N], int row,int col, int num);  
  
bool SolveSudoku(int arr[N][N])  
{  
    int row, col;  
 
    if (!FindLocation(arr, row, col))  
    return true; 

    for (int num = 1; num <= 9; num++)  
    {  
        if (isSafe(arr, row, col, num))  
        {    
            arr[row][col] = num;  
 
            if (SolveSudoku(arr))  
                return true;  
 
            arr[row][col] = UNASSIGNED;  
        }  
    }  
    return false;   
}  

bool FindLocation(int grid[N][N],int &row, int &col)  
{  
    for (row = 0; row < N; row++)  
        for (col = 0; col < N; col++)  
            if (grid[row][col] == UNASSIGNED)  
                return true;  
    return false;  
}  
  
bool UsedInRow(int grid[N][N], int row, int num)  
{  
    for (int col = 0; col < N; col++)  
        if (grid[row][col] == num)  
            return true;  
    return false;  
}  
  
bool UsedInCol(int grid[N][N], int col, int num)  
{  
    for (int row = 0; row < N; row++)  
        if (grid[row][col] == num)  
            return true;  
    return false;  
}  
  
bool UsedInBox(int grid[N][N], int boxRow, 
               int boxCol, int num)  
{  
    for (int row = 0; row < 3; row++)  
        for (int col = 0; col < 3; col++)  
            if (grid[row + boxRow] 
                    [col + boxCol] == num)  
                return true;  
    return false;  
}  
  
bool isSafe(int grid[N][N], int row,int col, int num)  
{  

    return !UsedInRow(grid, row, num) &&  
           !UsedInCol(grid, col, num) &&  
           !UsedInBox(grid, row - row % 3 ,col - col % 3, num) &&  
            grid[row][col] == UNASSIGNED;  
}  
  

void printGrid(int grid[N][N])  
{  
    for (int row = 0; row < N; row++)  
    {  
    for (int col = 0; col < N; col++)  
            cout << grid[row][col] << " ";  
        cout << endl; 
    }  
}  
     
int main() {
    int arr[N][N];
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin >>arr[i][j];
            }
        }
        if(SolveSudoku(arr)==true);
        printGrid(arr);
    }
	return 0;
}