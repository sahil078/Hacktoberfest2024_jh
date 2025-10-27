/*
Input - 
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9


Ouput - 
Solved Sudoku:
5 3 4 6 7 8 9 1 2 
6 7 2 1 9 5 3 4 8 
1 9 8 3 4 2 5 6 7 

8 5 9 7 6 1 4 2 3 
4 2 6 8 5 3 7 9 1 
7 1 3 9 2 4 8 5 6 

9 6 1 5 3 7 2 8 4 
2 8 7 4 1 9 6 3 5 
3 4 5 2 8 6 1 7 9 

*/

#include <bits/stdc++.h>
using namespace std;

#define N 9

bool isValid(vector<vector<int>>& board, int row, int col, int num) {
    // Check row
    for (int x = 0; x < N; x++)
        if (board[row][x] == num) return false;

    // Check column
    for (int x = 0; x < N; x++)
        if (board[x][col] == num) return false;

    // Check 3x3 subgrid
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + startRow][j + startCol] == num)
                return false;

    return true;
}

bool solveSudoku(vector<vector<int>>& board, int row, int col) {
    if (row == N - 1 && col == N)
        return true;
    if (col == N)
        return solveSudoku(board, row + 1, 0);
    if (board[row][col] != 0)
        return solveSudoku(board, row, col + 1);

    for (int num = 1; num <= 9; num++) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num;
            if (solveSudoku(board, row, col + 1))
                return true;
            board[row][col] = 0; // backtrack
        }
    }
    return false;
}

void printBoard(vector<vector<int>>& board) {
    cout << "\nSolved Sudoku:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
            if ((j + 1) % 3 == 0) cout << " ";
        }
        cout << endl;
        if ((i + 1) % 3 == 0) cout << endl;
    }
}

int main() {
    vector<vector<int>> board(N, vector<int>(N));

    cout << "Enter Sudoku grid (use 0 for empty cells):\n";
    for (int i = 0; i < N; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
            if (board[i][j] < 0 || board[i][j] > 9) {
                cout << "Invalid input. Please enter numbers 0–9 only.\n";
                return 0;
            }
        }
    }

    cout << "\nSolving Sudoku...\n";
    if (solveSudoku(board, 0, 0))
        printBoard(board);
    else
        cout << "No solution exists.\n";

    return 0;
}
