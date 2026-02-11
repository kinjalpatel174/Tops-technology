#include <iostream>
using namespace std;

int main() {
    int a = 10;         
    float b = 5.5;       
    const int c = 20;    

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    a = a + 5;           

    cout << "Updated a = " << a << endl;

    return 0;
}

