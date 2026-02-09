# Bank System in C++

A simple **Bank Management System** implemented in C++ using **Object-Oriented Programming (OOP)** concepts.  
This project demonstrates handling clients, employees, and admin accounts, including basic banking operations like deposit, withdrawal, and transfer.

---

## **Description**

This project simulates a basic banking system where:

- **Clients** can check their balance, deposit money, withdraw money, and transfer funds to other clients.
- **Employees** can view their personal information and salary.
- **Admins** can view their information and potentially manage the system (future enhancements).

The system uses **OOP principles** including inheritance, encapsulation, and abstraction.  
It also includes **input validation** for names, passwords, balances, and salaries.

---

## **Features**

- Create **Client, Employee, and Admin accounts**
- Client operations:
  - Check balance
  - Deposit money
  - Withdraw money
  - Transfer funds to another client
- Employee and Admin can display their info
- Input validation:
  - Names: alphabetic, 5-20 characters
  - Passwords: 8-20 characters
  - Minimum client balance: 1500
  - Minimum employee/admin salary: 5000
- Clean console-based interface

---

## **File Structure**

- `main.cpp` – Entry point, demonstrates all operations.
- `Bank.h` – Contains class definitions (`Validation`, `Person`, `Client`, `Employee`, `Admin`).
- `Bank.cpp` – Contains class implementations.

---

## **Requirements**

- C++ compiler (e.g., g++, Visual Studio, Code::Blocks)
- Basic knowledge of OOP in C++

---

## **How to Compile and Run**

Using **g++**:

```bash
g++ main.cpp Bank.cpp -o BankSystem
./BankSystem
