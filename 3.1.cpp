#include <iostream> using 
namespace std; class 
BankAccount { private:  
int accountNumber;     
string name;     
double balance; 
public:  
// Constructor to initialize account 
BankAccount(int accNo, string accName, double initialBalance) {         
accountNumber = accNo;   
initialBalance;  
}  
      name = accName;         
balance = 
// Deposit function     void deposit(double amount) {         
if (amount > 0) {             
balance += amount;      
<< "Amount deposited: ?" << amount << endl;  
} else {             
amount!" << endl;  
}  
}  
cout << "Invalid deposit 
       cout 
// Withdraw function     void withdraw(double amount) {         
if (amount <= balance) {    
         balance -= amount;             
cout << "Amount withdrawn: ?" << amount << endl;  
} else {             
balance!" << endl;  
}  
}  
cout << "Insufficient 
// Display account details
     void display() {         
"\nAccount Number: " << accountNumber << endl;      
<< "Account Holder: " << name << endl;      
cout << 
   cout 
   cout << "Current
   Balance: ?" << balance << endl;  
} }; int 
main() { 
// Create account object  
Roll No.:  
BankAccount myAccount(12345, "Aditya", 10000.0);  
myAccount.display();     
myAccount.deposit(2500.0);     
myAccount.withdraw(4000.0);     
myAccount.display(); 
return 0;  
}  
