#include <iostream> 
using namespace std; 
int main() { 
    int marks; 
    cout << "Enter your marks (0-100): "; 
    cin >> marks; 
    if (marks < 0 || marks > 100) { 
        cout << "Invalid marks! Please enter between 0 and 100." << endl; 
        return 0;   
    } 
    int gradeGroup = marks / 10; 
    cout << "Your Grade: "; 
    switch (gradeGroup) { 
        case 10:   cout<<”O”<<endl; 
            break; 
        case 9:    
            cout << "A+" << endl; 
            break; 
        case 8:  
            cout << "A" << endl; 
            break; 
        case 7:  
            cout << "B+" << endl; 
            break; 
        case 6:   
            cout << "B" << endl; 
            break; 
        case 5: 
            cout << "C" << endl; 
            break; 
        case 4:  
            cout << "D" << endl; 
            break; 
        default: 