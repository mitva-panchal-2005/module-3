#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& name, double initialBalance)
        : accountHolder(name), balance(initialBalance) {}

    // Getter for account holder name
    std::string getAccountHolder() const {
        return accountHolder;
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }

    // Deposit method with validation
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount
                      << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    // Withdraw method with validation
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount
                      << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }
};

int main() {
    BankAccount account("nilam jadav", 1000.0);
    std::cout << "Account Holder: " << account.getAccountHolder() << "\n";
    std::cout << "Initial Balance: $" << account.getBalance() << "\n";

    account.deposit(500.0);    // valid deposit
    account.withdraw(200.0);   // valid withdrawal
    account.withdraw(1500.0);  // invalid withdrawal

    std::cout << "Final Balance: $" << account.getBalance() << "\n";
    return 0;
}
