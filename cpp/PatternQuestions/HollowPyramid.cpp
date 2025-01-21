#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        // Printing the leading spaces
        for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }

        // Printing stars and spaces for the hollow part of the pyramid
        for (int col = 1; col <= 2 * row - 1; col++) {
            if (col == 1 || col == 2 * row - 1 || row == n) {
                // Printing star at the borders or the last row
                cout << "*";
            } else {
                // Printing space for the hollow part of the pyramid
                cout << " ";
            }
        }
        
        cout << endl;
    }

    return 0;
}
