#include <iostream> 
using namespace std; 
class Rectangle { 
private:  
int length;     
int width; 
public: 
// Default constructor     
length = 0;     
constructor called." << endl;  
}  
// Constructor with one parameter     
Rectangle(int l) {         
width = l; // making it a square         
cout << "Single-parameter 
constructor called." << endl;  
}  
Roll No.:  
WEEK-5  
Rectangle() {         
    width = 0; 
        cout << "Default 
length = l;         
// Constructor with two parameters     Rectangle(int l, 
int w) {         
length = l;      
   width = w;   
"Two-parameter constructor called." << endl;  
}     void area() {  
       cout << "Area: " << 
(length * width) << endl;  
} }; int 
main() {  
Rectangle r1;     
     //
      cout << 
2  
5  
B  
6 1  A  I  0  0 1 
 Calls default constructor     
r1.area();  
Rectangle r2(5);    
r2.area();  
   // Calls single-parameter constructor     
Rectangle r3(4, 6);    // Calls two-parameter constructor     
r3.area();
return 0; 
 }  
  
    