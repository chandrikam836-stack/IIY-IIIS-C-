#include <iostream> 
using namespace std; 
class Employee { 
private:  
int id;     
string name; 
public:  
Roll No.:  
2  
5  
B  
6  1  A  I  0  0  1 
Resolve naming conflicts between member variables and function parameters.  
Return the current object from a method (useful in method chaining).  
   this->var = var; // 
     }  
// Setter using 'this' pointer to resolve name conflict     
void setDetails(int id, string name) {         
// this->id refers to member variable         
this->id = id;       
this->name = 
name;   // name is parameter  
}  
// Display function     void display() {
  cout << "Employee ID: " << this->id << endl;         
  cout <<"Employee Name: " << this->name << endl;  
} };
 int main() {  
 Employee emp1;   
emp1.setDetails(101,"Laxman");  
emp1.display();     
return 0;  
}  
   