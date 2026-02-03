#include <iostream> 
using namespace std; 
int main() { 
int a, b, c; 
cout << "Enter three numbers: "; 
cin >> a >> b >> c; 
if (a >= b && a >= c) { 
cout << a << " is the maximum" << endl; 
} 
else if (b >= a && b >= c) { 
cout << b << " is the maximum" << endl; 
} 
else { 
cout << c << " is the maximum" << endl; 
} 
return 0; 
}