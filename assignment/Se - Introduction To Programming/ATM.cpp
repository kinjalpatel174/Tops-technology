#include <iostream>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;

class A {
protected:
    int Ac;
    int balance = 5000;
    int Withdrawal = 0;
    int available = 5000;
    int pass = 12345;
    bool authenticated = false;
    char bankname[100];

public:
    void getbankname() {
        cin.ignore();
        cout << "Enter Bank Name: ";
        cin.getline(bankname, 100);
    }

    void bank() {
        cout << "Enter Account Number: ";
        cin >> Ac;
    }
};

class B : public A {
public:
    void Withdrawala() {
        cout << "\nYou have 30 seconds to enter password\n";

        auto start = steady_clock::now();

        int u_pass;
        cout << "Enter Password: ";
        cin >> u_pass;

        auto end = steady_clock::now();
        int timeTaken = duration_cast<seconds>(end - start).count();

        if (timeTaken > 30) {
            cout << "\nTime expired!";
            authenticated = false;
            return;
        }

        if (u_pass == pass) {
            authenticated = true;

            cout << "Enter Withdrawal Amount: ";
            cin >> Withdrawal;

            if (Withdrawal <= balance) {
                available = balance - Withdrawal;
                cout << "Withdrawal Successful\n";
            } else {
                cout << "Insufficient Balance\n";
                authenticated = false;
            }
        } else {
            cout << "Wrong Password\n";
            authenticated = false;
        }
    }

    void print() {
        if (authenticated) {
            cout << "\nBank Name: " << bankname;
            cout << "\nAccount Number: " << Ac;
            cout << "\nAvailable Balance: " << available;
        } else {
            cout << "\nAccess Denied";
        }
    }
};

int main() {
    B obj;
    obj.getbankname();
    obj.bank();
    obj.Withdrawala();
    obj.print();
    return 0;
}

#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib> // For atoi

using namespace std;

class A {
protected:
    int Ac;
    int balance = 5000;
    int Withdrawal = 0;
    int available = 5000;
    int pass = 12345;
    char bankname[100];
    bool authenticated = false; 

public:
    void bank() {
        cout << "\nEnter AC Number: ";
        cin >> Ac;
    }

    void getbankname() {
        cin.ignore();
        cout << "\nEnter Bank Name: ";
        cin.getline(bankname, 100);
    }
};

class B : public A {
public:
    void Withdrawala() {
        char input_pass[20] = ""; 
        int i = 0;
        time_t startTime, currentTime;

        cout << "\n--- PASSWORD ENTRY ---";
        cout << "\nNote: You have 30 seconds to finish typing.";
        cout << "\nEnter Password: ";

        startTime = time(0); // Record start time

        while (true) {
            currentTime = time(0);
            
            // Check if 30 seconds passed
            if (difftime(currentTime, startTime) >= 30) {
                cout << "\n\n[ERROR] Timeout! 30 seconds exceeded.\n";
                authenticated = false;
                return;
            }

            // Check for key press
            if (kbhit()) {
                char ch = getch();
                
                if (ch == 13) { // Enter key
                    input_pass[i] = '\0';
                    break;
                } else if (ch == 8) { // Backspace
                    if (i > 0) {
                        i--;
                        cout << "\b \b";
                    }
                } else {
                    input_pass[i++] = ch;
                    cout << "*"; // Masking
                }
            }
        }

        // Convert char array to integer and compare
        if (atoi(input_pass) == pass) {
            authenticated = true; 
            cout << "\n\nLogin Successful!";
            cout << "\nEnter Withdrawal Amount: ";
            cin >> Withdrawal;

            if (Withdrawal <= balance) {
                available = balance - Withdrawal;
                cout << "Withdrawal successful...\n";
            } else {
                cout << "Insufficient balance.\n";
            }
        } else {
            cout << "\n\nIncorrect password!\n";
            authenticated = false;
        }
    }

    void print() {
        if (authenticated) {
            cout << "\n--- Account Details ---";
            cout << "\nBank Name: " << bankname;
            cout << "\nAccount Number: " << Ac;
            cout << "\nAvailable Balance: " << available << endl;
        } else {
            cout << "\nAccess denied.\n";
        }
    }
};

int main() {
    B obj;
    obj.getbankname();
    obj.bank();
    obj.Withdrawala();
    obj.print();
    return 0;
}
