#include <iostream>
using namespace std;

class ATM {
private:
    float balance;
    int pin;

public:
    ATM() {
        balance = 10000.0; // Initial balance
        pin = 1234;        // Default PIN
    }

    bool verifyPIN(int enteredPIN) {
        return enteredPIN == pin;
    }

    void showMenu() {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "====================\n";
    }

    void checkBalance() {
        cout << "Your current balance is ?" << balance << "\n";
    }

    void depositMoney(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "?" << amount << " deposited successfully!\n";
        } else {
            cout << "Invalid amount.\n";
        }
    }

    void withdrawMoney(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "?" << amount << " withdrawn successfully!\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }
};

int main() {
    ATM atm;
    int option, enteredPIN;
    float amount;

    cout << "Welcome to the ATM!\n";
    cout << "Please enter your PIN: ";
    cin >> enteredPIN;

    if (!atm.verifyPIN(enteredPIN)) {
        cout << "Incorrect PIN. Access denied.\n";
        return 0;
    }

    do {
        atm.showMenu();
        cout << "Select an option (1-4): ";
        cin >> option;

        switch (option) {
            case 1:
                atm.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ?";
                cin >> amount;
                atm.depositMoney(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ?";
                cin >> amount;
                atm.withdrawMoney(amount);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (option != 4);

    return 0;
}
