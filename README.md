🏦 Banking System - C++ Project

📖 Introduction
This is a C++ banking system that allows customers to create bank accounts, perform deposits, withdrawals, and transfers between accounts. The system also integrates ATM functionalities and maintains customer account records.

✨ Features
✅ Customer Account Management → Create and manage bank accounts.
✅ Deposit Money → Add money to a specific bank account.
✅ Withdraw Money → Deduct money while ensuring sufficient balance.
✅ Money Transfer → Transfer money between two accounts.
✅ ATM Functionality → Check balance using an ATM system.
✅ Friend Functions & Classes → Implements friend function and class relationships for controlled access.

🛠 Technologies Used
C++ (OOP Concepts)
Friend Functions & Classes
Static Methods
User Input Handling
🚀 How to Compile and Run
🔹 Steps (Using g++)
1️⃣ Open Terminal / Command Prompt.
2️⃣ Navigate to the folder containing the file:

sh
Copy
Edit
cd path/to/your-project
3️⃣ Compile the program using:

sh
Copy
Edit
g++ -o banking_system banking_system.cpp
4️⃣ Run the program:

sh
Copy
Edit
./banking_system
📌 Usage Example
🔹 Sample User Interaction
yaml
Copy
Edit
Enter customer name: John Doe
Enter customer address: 123 Main St

Enter account number for account 1: 1001
Enter initial balance for account 1: 5000

Enter account number for account 2: 2002
Enter initial balance for account 2: 3000

Accounts for Customer John Doe:
Account Number: 1001, Balance: $5000
Account Number: 2002, Balance: $3000

Enter transaction type (deposit, withdraw, transfer): transfer
Enter transaction amount: 1000
Enter 1 for account no. 1 to 2 for account no. 2
Enter 2 for account no. 2 and 1 for account no. 1
1

Transfer of $1000 from account number 1001 to account number 2002

Updated Account Information:
Account Number: 1001, Balance: $4000
Account Number: 2002, Balance: $4000
📂 File Structure
bash
Copy
Edit
/BankingSystem
│── banking_system.cpp   # Main source code
│── README.md            # Documentation file
🔧 Future Enhancements
🚀 Add file handling to store transaction history.
🚀 Implement interest calculation based on account type.
🚀 Add authentication system for customer logins.

📜 License
This project is open-source. Feel free to use, modify, and contribute!

💡 Conclusion
This banking system demonstrates Object-Oriented Programming (OOP) principles, friend functions, and user-friendly transactions. It is a simple yet effective banking simulation for learning C++ programming.
