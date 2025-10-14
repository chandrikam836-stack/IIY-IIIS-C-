#include <iostream> 
using namespace std; 
class Student { private: 
string name;     
int rollNo; public:  
// Constructor  
Student(string n, int r) {         
name = n;         
rollNo = r;  
Roll No.:  
WEEK-5  
cout << "Constructor called for " << name << endl;  
}  
// Display function     void display() {
 2  
5  
B  
6 1  A  I  0  0 1 
         cout << "Name: " << 
name << ", Roll No: " << rollNo << endl;  
}  
// Destructor  
~Student() {         
<< name << endl;  
} };  
cout << "Destructor called for " 
int main() {  
{  
Student s1("Aditya", 101);  
s1.display();  
Student s2("Laxman", 102);  
s2.display();  
} // s1 and s2 go out of scope here, so destructors are called automatically     
cout << "End of main function." << endl;  
return 0;  
}  