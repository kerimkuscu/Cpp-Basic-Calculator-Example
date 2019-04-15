#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
    int operation_number;
    
    float number1, number2;
    float sum, subtraction, multiplication, division;
    
    start:
    
    cout << "\tPlease select the operation you want to make." << endl;
    cout << "1) Sum \t2)Subtraction \t3)Multiplication \t4)Division" << endl;
    
    cin >> operation_number;
    
    if (operation_number == 1) {
        cout << "Please entered number 1 = ";
        cin >> number1;
        
        cout << "Please entered number 2 = ";
        cin >> number2;
        
        sum = number1 + number2;
        
        cout << number1 << " + " << number2 << " = " << sum;
    } else if (operation_number == 2) {
        cout << "Please entered number 1 = ";
        cin >> number1;
        
        cout << "Please entered number 2 = ";
        cin >> number2;
        
        subtraction = number1 - number2;
        
        cout << number1 << " - " << number2 << " = " << subtraction;
    } else if (operation_number == 3) {
        cout << "Please entered number 1 = ";
        cin >> number1;
        
        cout << "Please entered number 2 = ";
        cin >> number2;
        
        multiplication = number1 * number2;
        
        cout << number1 << " * " << number2 << " = " << multiplication;
    } else if (operation_number == 4) {
        cout << "Please entered number 1 = ";
        cin >> number1;
        
        cout << "Please entered number 2 = ";
        cin >> number2;
        
        division = number1 * number2;
        
        cout << number1 << " / " << number2 << " = " << division;
    } else {
        cout << "\tPlease select a number from 1 to 4." << endl;
        
        goto start; 
    }
    
	return 0;
}
