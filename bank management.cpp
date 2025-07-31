#include <iostream>
#include <string>
#include <iomanip> // For formatting output
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(string name, string accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Invalid deposit amount.\n";
        } else {
            balance += amount;
            cout << "Deposited: $" << fixed << setprecision(2) << amount << " successfully.\n";
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << fixed << setprecision(2) << amount << " successfully.\n";
        }
    }

    // Function to display the current balance
    void displayBalance() const {
        cout << "Current Balance: $" << fixed << setprecision(2) << balance << "\n";
    }

    // Function to display account details
    void displayAccountDetails() const {
        cout << "Account Holder Name: " << accountHolderName << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        displayBalance();
    }
};

int main() {
    string name, accountNumber;
    double initialBalance;

    cout << "Welcome to the Bank Management System!\n";
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Initial Balance: $";
    cin >> initialBalance;

    // Create a bank account
    BankAccount account(name, accountNumber, initialBalance);

    int choice;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Display Account Details\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account.displayAccountDetails();
            break;
        case 2: {
            double depositAmount;
            cout << "Enter amount to deposit: $";
            cin >> depositAmount;
            account.deposit(depositAmount);
            break;
        }
        case 3: {
            double withdrawAmount;
            cout << "Enter amount to withdraw: $";
            cin >> withdrawAmount;
            account.withdraw(withdrawAmount);
            break;
        }
        case 4:
            account.displayBalance();
            break;
        case 5:
            cout << "Thank you for using the Bank Management System! Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
