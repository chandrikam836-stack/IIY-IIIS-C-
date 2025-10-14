#include <iostream> using 
namespace std;  
// Function using Call by Value void 
callByValue(int a) {  
a 
= a + 10;     
" << a << endl;  
}  
// Function using Call by Reference void 
callByReference(int &b) {  
b 
= b + 10;     
callByReference, b = " << b << endl;  
} int main() 
{  
int x = 5, y = 5;  
Roll No.:  
cout << "Inside callByValue, a = 
2  
5  
B  
6 1  A  I  0  0 1 
cout << "Inside 
cout << "Before callByValue, x = " << x << endl;     
callByValue(x);     cout << "After callByValue, x = 
" << x << endl;     
" << endl;  
cout << "----------------------------
cout << "Before callByReference, y = " << y << endl;     
callByReference(y);     cout << "After callByReference, 
y = " << y << endl; 
return 0;  
} 