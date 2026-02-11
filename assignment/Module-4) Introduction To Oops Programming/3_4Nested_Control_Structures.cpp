//Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
//Objective: Learn nested control structures. 

#include <iostream>
using namespace std;

int main() {
    int rows,i,j;

    cout << "Enter the number of rows : ";
    cin >> rows;

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

