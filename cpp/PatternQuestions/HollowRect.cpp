#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter the value of row: ";
    cin >> row;
    cout << "Enter the value of col: ";
    cin >> col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1) {
                cout << "*";
            } else {
                if (j == 0 || j == col - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            // // Add space after each character except the last one
            // if (j < col - 1) {
            //     cout << " ";
            // }
        }
        cout << endl;
    }
    return 0;
}
