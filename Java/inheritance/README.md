Bank Management System – Java Project

A simple yet well-structured Bank Management System built using Core Java concepts such as:

Arrays

OOP (Encapsulation, Inheritance, Polymorphism)

Static

Abstract Classes

Exception Handling

This project is suitable for beginners and academic submissions.

✨ Features

Create a new bank account

Deposit and withdraw money

Transfer funds between accounts

View all account details

Auto-generated transaction history

Input validation using custom exceptions

Clean, modular OOP architecture

📁 Project Structure
BankSystem/
│
├─ src/
│  ├─ bank/
│  │  ├─ Bank.java
│  │  ├─ Account.java
│  │  ├─ SavingsAccount.java
│  │  ├─ SalaryAccount.java
│  │  ├─ Transaction.java
│  │  ├─ InvalidInputException.java
│  │  └─ Main.java
│
└─ README.md

🧩 Concepts Used
📌 Included Code Example

This project includes a robust implementation of:

Transaction

Account (Abstract Class)

SavingsAccount

SalaryAccount

These classes demonstrate arrays, inheritance, overriding, abstract methods, and transaction logging.

// Code snippet reference:
// Transaction, Account, SavingsAccount, SalaryAccount classes
// are part of the bankSystem package.

▶️ How to Run

Clone the repository:

git clone https://github.com/yourusername/BankManagementSystem.git


Open in VS Code, Eclipse, or IntelliJ

Compile:

javac bank/*.java


Run:

java bank.Main

📝 Sample Output
--- BANK MANAGEMENT SYSTEM ---
1. Create Account
2. Deposit Money
3. Withdraw Money
4. Transfer Funds
5. View All Accounts
6. Exit
Enter choice: 1
Enter Name: Rahul
Account Created Successfully!
Account Number: 1001

💡 Future Enhancements

Add file handling / database support

Add GUI (JavaFX / Swing)

Add login system for users & admins

Add interest calculation scheduler

🤝 Contributing

Pull requests are welcome. For major changes, please open an issue first.

📜 License

This project is open source and available under the MIT License.
