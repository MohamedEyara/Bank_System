#include <iostream>
#include<string>
#include <cctype>
using namespace std;
#include"Bank.h"

int main() {
    
    
        // ===== Clients =====
        Client client1(1, "Mohamed Ali", "password123", 3000);
        Client client2(2, "Ahmed Hassan", "password456", 2500);

        cout << "---- Client Operations ----\n";
        client1.checkBalance();
        client1.deposit(500);
        client1.checkBalance();

        client1.withdraw(1000);
        client1.checkBalance();

        cout << "\nTransfer 500 from Client1 to Client2\n";
        client1.transferTo(500, client2);

        cout << "\nClient1 Balance:\n";
        client1.checkBalance();

        cout << "Client2 Balance:\n";
        client2.checkBalance();

        // ===== Employee =====
        cout << "\n---- Employee Info ----\n";
        Employee emp1(10, "Sara Ahmed", "empPass123", 7000);
        emp1.display();

        // ===== Admin =====
        cout << "\n---- Admin Info ----\n";
        Admin admin1(100, "Admin User", "adminPass123", 12000);
        admin1.display();

        return 0;

}

