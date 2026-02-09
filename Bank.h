#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>
using namespace std;

// ================= Validation =================
class Validation {
public:
    static bool isAlphabetic(string name);
    static bool validName(string name);
    static bool validPassword(string password);
    static bool validBalance(double balance);
    static bool validSalary(double salary);
};

// ================= Person =================
class Person {
protected:
    int id;
    string name;
    string password;

public:
    Person() {}
    Person(int id, string name, string password);

    void setId(int id);
    void setName(string name);
    void setPassword(string password);

    int getId();
    string getName();
    string getPassword();

    virtual void display() = 0;
};

// ================= Client =================
class Client : public Person {
private:
    double balance;

public:
    Client() {}
    Client(int id, string name, string password, double balance);

    void setBalance(double balance);
    double getBalance();

    void deposit(double amount);
    void withdraw(double amount);
    void transferTo(double amount, Client& recipient);
    void checkBalance();
    void display() override;
};

// ================= Employee =================
class Employee : public Person {
protected:
    double salary;

public:
    Employee() {}
    Employee(int id, string name, string password, double salary);

    void setSalary(double salary);
    double getSalary();

    void display() override;
};

// ================= Admin =================
class Admin : public Employee {
public:
    Admin() {}
    Admin(int id, string name, string password, double salary);

    void display() override;
};

#endif
