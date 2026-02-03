#include <iostream> 
#include <cmath>     
using namespace std; 
int main() { 
int choice; 
double length, width, radius, height, area, volume; 
cout << "\nChoose shape:\n"; 
cout << "1. Area of Rectangle\n"; 
cout << "2. Area of Circle\n"; 
cout << "3. Volume of Cylinder\n"; 
cout << "Enter choice (1-3): "; 
cin >> choice; 
if (choice == 1) { 
cout << "Enter length: "; 
cin >> length; 
cout << "Enter width: "; 
cin >> width; 
area = length * width; 
cout << "Area of rectangle = " << area << endl; 
} 
else if (choice == 2) { 
cout << "Enter radius: "; 
cin >> radius; 
area = 3.14159 * pow(radius, 2);   // π r² 
cout << "Area of circle = " << area << endl; 
} 
else if (choice == 3) { 
cout << "Enter radius: "; 
cin >> radius; 
cout << "Enter height: "; 
cin >> height; 
volume = 3.14159 * pow(radius, 2) * height;   // π r² h 
cout << "Volume of cylinder = " << volume << endl; 
} 
else { 
cout << "Wrong choice!" << endl; 
} 
return 0; 
}