#include <iostream> 
using namespace std; 
int main() { 
int choice; 
double num1, num2; 
cout << "\n=== Simple Calculator ===\n"; 
cout << "1. Addition\n"; 
cout << "2. Subtraction\n"; 
cout << "3. Multiplication\n"; 
cout << "4. Division\n"; 
cout << "Enter your choice (1-4): "; 
cin >> choice; 
cout << "Enter first number: "; 
cin >> num1; 
cout << "Enter second number: "; 
cin >> num2; 
if (choice == 1) { 
cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl; 
} 
else if (choice == 2) { 
cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl; 
} 
else if (choice == 3) { 
cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl; 
} 
else if (choice == 4) { 
if (num2 != 0) { 
cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl; 
} else { 
cout << "Error! Division by zero is not allowed." << endl; 
} 
} 
else { 
cout << "Invalid choice! Please select 1, 2, 3 or 4." << endl; 
} 
return 0; 
} 