<h1>🏦 Banking System - C++ Project</h1>

<h2>📖 Introduction</h2>
<p>This is a <strong>C++ banking system</strong> that allows customers to create bank accounts, perform deposits, withdrawals, and transfers between accounts. The system also integrates ATM functionalities and maintains customer account records.</p>

<h2>✨ Features</h2>
<ul>
  <li>✅ <strong>Customer Account Management</strong> → Create and manage bank accounts with customer details.</li>
  <li>✅ <strong>Deposit Money</strong> → Add money to a specific bank account by specifying the amount.</li>
  <li>✅ <strong>Withdraw Money</strong> → Deduct money from a bank account while ensuring sufficient balance is available.</li>
  <li>✅ <strong>Money Transfer</strong> → Transfer money between two different accounts after validating the balance.</li>
  <li>✅ <strong>ATM Functionality</strong> → Customers can check their account balance using ATM system functionality.</li>
  <li>✅ <strong>Friend Functions & Classes</strong> → Implements friend functions and class relationships for controlled access to private members of classes.</li>
</ul>

<h2>🛠 Technologies Used</h2>
<ul>
  <li>C++ (Object-Oriented Programming concepts)</li>
  <li>Friend Functions & Classes</li>
  <li>Static Methods</li>
  <li>User Input Handling</li>
</ul>

<h2>🚀 How to Compile and Run</h2>

<h3>🔹 Steps (Using g++)</h3>
<ol>
  <li>Open <strong>Terminal / Command Prompt</strong>.</li>
  <li>Navigate to the folder containing the file using the <code>cd path/to/your-project</code> command.</li>
  <li>Compile the program using the following command:
    <pre>g++ -o banking_system banking_system.cpp</pre>
  </li>
  <li>Run the program using:
    <pre>./banking_system</pre>
  </li>
</ol>

<h2>📌 Usage Example</h2>

<h3>🔹 Sample User Interaction</h3>
<pre>
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
</pre>

<h2>📂 File Structure</h2>

<pre>
/BankingSystem
│── banking_system.cpp   # Main source code
│── README.md            # Documentation file
</pre>

<h2>🔧 Future Enhancements</h2>
<ul>
  <li>🚀 Add file handling to store transaction history for better tracking.</li>
  <li>🚀 Implement interest calculation based on account type (savings, checking, etc.).</li>
  <li>🚀 Add an authentication system for customer logins to enhance security.</li>
</ul>

<h2>📜 License</h2>
<p>This project is open-source. Feel free to use, modify, and contribute!</p>

<h2>💡 Conclusion</h2>
<p>This banking system demonstrates Object-Oriented Programming (OOP) principles, <strong>friend functions</strong>, and user-friendly transactions. It serves as a simple yet effective banking simulation for learning and practicing <strong>C++ programming</strong>.</p>
