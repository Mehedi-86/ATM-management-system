#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accountNumber, double balance)
    : accountNumber(accountNumber), balance(balance) {}

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void setBalance(double newBalance) {
        balance = newBalance;
    }

    void showAccountInfo() {
        cout << "Account Number: " << accountNumber << ", Balance: $" << balance << endl;
    }

    friend void performTransaction(BankAccount& account, const string& type, double amount);
    friend class Customer;
    friend class Transaction;
};


class Customer {
private:
    string name;
    string address;
    BankAccount* accounts[10]; // Assuming a customer can have up to 10 bank accounts
    int numAccounts;

public:
    Customer(const string& name, const string& address)
    : name(name), address(address), numAccounts(0) {}

    void addAccount(BankAccount& account) {
        if (numAccounts < 10) {
            accounts[numAccounts] = &account;
            numAccounts++;
        } else {
            cout << "Cannot add more accounts. Maximum limit reached.\n";
        }
    }

    void showAccounts() {
        cout << "Accounts for Customer " << name << ":\n";
        for (int i = 0; i < numAccounts; i++) {
            accounts[i]->showAccountInfo();
        }
    }

    friend class ATM;
};



class Transaction {
public:
    static void deposit(BankAccount& account, double amount) {
        account.balance += amount;
    }

    static void withdraw(BankAccount& account, double amount) {
        if (account.balance >= amount) {
            account.balance -= amount;
            cout << "Withdrawal of $" << amount << " successful on account no. "
             << account.getAccountNumber() << "\n";
        } else {
            cout << "Insufficient funds for withdrawal!\n";
        }
    }

    static void transfer(BankAccount& fromAccount, BankAccount& toAccount, double amount) {
        if (fromAccount.balance >= amount) {
            fromAccount.balance -= amount;
            toAccount.balance += amount;
     cout<<"Transfer of $"<<amount<<"from account number "<<fromAccount.getAccountNumber()
            <<" to account number "<<toAccount.getAccountNumber()<<endl;
        } else {
            cout << "Insufficient funds for transfer!\n";
        }
    }
};

class ATM {
public:
    static void displayBalance(BankAccount& account) {
        cout << "Account Number: " << account.getAccountNumber() << ", Balance: $"
         << account.getBalance() << endl;
    }

    friend void performTransaction(BankAccount& account, const string& type, double amount);
};

void performTransaction(BankAccount& account, const string& type, double amount) {
    if (type == "deposit") {
        Transaction::deposit(account, amount);
        cout << "Deposit of $" << amount << " successful on account no. "
         << account.getAccountNumber() << "\n";
    } else if (type == "withdraw") {
        Transaction::withdraw(account, amount);
    }
    else
        cout<<"Invalid transaction"<<endl;
}

int main() {
    string name, address;
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter customer address: ";
    getline(cin, address);

    Customer customer(name, address);

    int accountNumber1, accountNumber2;
    double balance1, balance2;

    cout << "Enter account number for account 1: ";
    cin >> accountNumber1;
    cout << "Enter initial balance for account 1: ";
    cin >> balance1;
    BankAccount account1(accountNumber1, balance1);

    cout << "Enter account number for account 2: ";
    cin >> accountNumber2;
    cout << "Enter initial balance for account 2: ";
    cin >> balance2;
    BankAccount account2(accountNumber2, balance2);

    customer.addAccount(account1);
    customer.addAccount(account2);

    customer.showAccounts();

    // ATM Transactions using friend function
    string transactionType;
    double transactionAmount;

    cout << "Enter transaction type (deposit, withdraw, transfer): ";
    cin >> transactionType;
    cout << "Enter transaction amount: ";
    cin >> transactionAmount;

    if(transactionType=="transfer"){
      cout<<"enter 1 for account no. 1 to 2 for account no. 2"<<endl;
      cout<<"enter 2 for account no. 2 and 1 for account no. 2"<<endl;
      int b;
      cin>>b;
      if(b==1)
      Transaction::transfer(account1,account2,transactionAmount);
      else if(b==2)
      Transaction::transfer(account2,account1,transactionAmount);
    }
    else{
      cout<<"enter 1 for account no. 1 and 2 for account no. 2"<<endl;
      int a;
      cin>>a;
      if(a==1)
      performTransaction(account1, transactionType, transactionAmount);
      else if(a==2)
      performTransaction(account2, transactionType, transactionAmount);
    }

    cout << "Updated Account Information:\n";
    customer.showAccounts();

    return 0;
}
