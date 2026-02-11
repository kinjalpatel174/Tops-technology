#include <iostream>
using namespace std;

class A {
protected:
    int Ac;
    int balance = 5000;
    int Withdrawal;
    int available;
    string bankname;

public:
    void bank() {
        cout << "\nEnter AC Number: ";
        cin >> Ac;
    }

    void getbankname() {
        cout <<"\nEnter Bank Name: ";
        cin.ignore();
        getline(cin,bankname);
    }
};

class B : public A {
public:
    void Withdrawala() {
        cout << "\nEnter Withdrawal Amount: ";
        cin >> Withdrawal;

        if (Withdrawal <= balance) {
            available = balance - Withdrawal;
            cout << "\nWithdrawal successful....\n";
        } else {
            cout << "\nInsufficient balance.";
            available = balance;
        }
    }

    void print() {
        cout << "\nBank Name: "<<bankname;
        cout << "\nAccount Number: " << Ac;
        cout << "\nAvailable Balance: " << available;
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

