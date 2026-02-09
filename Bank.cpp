#include "Bank.h"
#include <cctype>

// ================= Validation =================
bool Validation::isAlphabetic(string name) {
    for (char c : name) {
        if (!isalpha(c) && c != ' ')
            return false;
    }
    return true;
}

bool Validation::validName(string name) {
    return isAlphabetic(name) && name.length() >= 5 && name.length() <= 20;
}

bool Validation::validPassword(string password) {
    return password.length() >= 8 && password.length() <= 20;
}

bool Validation::validBalance(double balance) {
    return balance >= 1500;
}

bool Validation::validSalary(double salary) {
    return salary >= 5000;
}

// ================= Person =================
Person::Person(int id, string name, string password) {
    this->id = id;
    setName(name);
    setPassword(password);
}

void Person::setId(int id) { this->id = id; }

void Person::setName(string name) {
    if (Validation::validName(name))
        this->name = name;
    else
        cout << "Invalid Name!\n";
}

void Person::setPassword(string password) {
    if (Validation::validPassword(password))
        this->password = password;
    else
        cout << "Invalid Password!\n";
}

int Person::getId() { return id; }
string Person::getName() { return name; }
string Person::getPassword() { return password; }

// ================= Client =================
Client::Client(int id, string name, string password, double balance)
    : Person(id, name, password) {
    setBalance(balance);
}

void Client::setBalance(double balance) {
    if (Validation::validBalance(balance))
        this->balance = balance;
    else
        cout << "Minimum balance is 1500\n";
}

double Client::getBalance() { return balance; }

void Client::deposit(double amount) { balance += amount; }

void Client::withdraw(double amount) {
    if (amount <= balance)
        balance -= amount;
    else
        cout << "Not enough balance\n";
}

void Client::transferTo(double amount, Client& recipient) {
    if (amount <= balance) {
        withdraw(amount);
        recipient.deposit(amount);
    }
    else {
        cout << "Transfer failed\n";
    }
}

void Client::checkBalance() {
    cout << "Balance = " << balance << endl;
}

void Client::display() {
    cout << "Client ID: " << id
        << "\nName: " << name
        << "\nBalance: " << balance << endl;
}

// ================= Employee =================
Employee::Employee(int id, string name, string password, double salary)
    : Person(id, name, password) {
    setSalary(salary);
}

void Employee::setSalary(double salary) {
    if (Validation::validSalary(salary))
        this->salary = salary;
    else
        cout << "Minimum salary is 5000\n";
}

double Employee::getSalary() { return salary; }

void Employee::display() {
    cout << "Employee ID: " << id
        << "\nName: " << name
        << "\nSalary: " << salary << endl;
}

// ================= Admin =================
Admin::Admin(int id, string name, string password, double salary)
    : Employee(id, name, password, salary) {
}

void Admin::display() {
    cout << "Admin ID: " << id
        << "\nName: " << name
        << "\nSalary: " << salary << endl;
}
