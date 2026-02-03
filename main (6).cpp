#include <iostream> 
#include <cmath>    // for sqrt() 
using namespace std; 
int main() { 
double a, b, c, discriminant, root1, root2; 
cout << "Enter coefficients a, b, c: "; 
cin >> a >> b >> c; 
if (a == 0) { 
cout << "Not a quadratic equation!" << endl; 
return 0; 
} 
discriminant = b*b - 4*a*c; 
if (discriminant > 0) { 
root1 = (-b + sqrt(discriminant)) / (2*a); 
root2 = (-b - sqrt(discriminant)) / (2*a); 
cout << "Two real roots:" << endl; 
cout << "Root 1 = " << root1 << endl; 
cout << "Root 2 = " << root2 << endl; 
} 
else if (discriminant == 0) { 
root1 = -b / (2*a); 
cout << "One real root (repeated): " << root1 << endl; 
} 
else { 
double real = -b / (2*a); 
double imag = sqrt(-discriminant) / (2*a); 
cout << "Two complex roots:" << endl; 
cout << "Root 1 = " << real << " + " << imag << "i" << endl; 
cout << "Root 2 = " << real << " - " << imag << "i" << endl; 
} 
return 0; 
} 