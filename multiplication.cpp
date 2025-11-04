//Carolina Anchondo
//Program to create a multiplication table to help my younger sibling with his math homework.
//10/26/25

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Variables to hold the number of rows and columns
    int rows;
    int cols;

    cout << "  Multiplication Table Tool  " <<endl;
    cout << "Enter the number of rows you need: ";
    cin >> rows;

    cout << "Enter the number of columns you need: ";
    cin >> cols;

    //Input validation
    if (rows <= 0 || cols <= 0) {
        cout << "Error: Rows and columns must be positive numbers." <<endl;
        return 1;
    }

    cout << "\nGenerating a " << rows << "x" << cols << " Multiplication Table:\n" <<endl;

    // Set the width for alignment.
    const int cellWidth = 4;

    //Print the Column Numbers (Header Row)
    cout <<setw(cellWidth) << "X";

    // Print the column numbers across the top
    for (int j = 1; j <= cols; ++j) {
        cout <<setw(cellWidth) << j;
    }
    cout <<endl; 

    // Print a separator line for clarity
    for (int k = 0; k <= cols; ++k) {
        cout <<setw(cellWidth) << "----";
    }
    cout << "\n";


    
    // Outer loop for rows (i)
    for (int i = 1; i <= rows; ++i) {
        
        cout <<setw(cellWidth) << i << "|";

        // Inner loop for columns (j) - calculate and print products
        for (int j = 1; j <= cols; ++j) {
        
            cout <<setw(cellWidth) << i * j;
        }

        cout <<endl; 
    }

    cout << "\nYour table is complete, good luck!!" <<endl;

    
}
