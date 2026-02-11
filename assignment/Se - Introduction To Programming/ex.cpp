#include <iostream>
using namespace std;

class A {
protected:
    int Ac;
    int balance = 5000;
    int Withdrawal = 0;
    int available = 5000;
    int pass = 12345, u_pass;
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
        cout << "\nEnter Your Password: ";
        cin >> u_pass;

        if (pass == u_pass) {
            authenticated = true; 

            cout << "\nEnter Withdrawal Amount: ";
            cin >> Withdrawal;

            if (Withdrawal <= balance) {
                available = balance - Withdrawal;
                cout << "\nWithdrawal successful...\n";
            } else {
                cout << "\nInsufficient balance.\n";
            }
        } else {
            cout << "\nIncorrect password...\n";
            authenticated = false;
        }
    }

    void print() {
        if (authenticated) {
            cout << "\nBank Name: " << bankname;
            cout << "\nAccount Number: " << Ac;
            cout << "\nAvailable Balance: " << available << endl;
        } else {
            cout << "\nAccess denied. Information cannot be displayed.\n";
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

