// Program for Scientific Calculator...
#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// Class Calculator is used to initialize and define different functions.
class Calculator {
    float num1 , num2;
    float rad , m;
    public:
        // Different functions used to take Inputs and calculate different values as per users choice.
        void Input() {
            cout << "\nEnter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } 
        void PowInput() {
            cout << "\nEnter value: ";
            cin >> m; 
        }
        void TrigoInput() {
            cout << "\nEnter value (in radians): ";
            cin >> rad;
        }
        float add() {
            return num1 + num2;
        }
        float sub() {
            return num1 - num2;
        }
        float mul() {
            return num1 * num2;
        }
        float div() {
            // Here Exception handling is used...
            try {
                if (num2 == 0) 
                    throw num2;
                else 
                    return num1/num2;
            }
            catch (float num2) {
                return INFINITY;
            }
        }
        float sine() {
            return sin(rad);            
        }
        float cose() {
            return cos(rad);
        }
        float tane() {
            return tan(rad);
        }
        float sinInverse() {
            return asin(rad);
        }
        float cosInverse() {
            return acos(rad);
        }
        float tanInverse() {
            return atan(rad);
        }
        float power() {
            return pow(num1 , num2);
        }
        float squareroot() {
            return sqrt(m);
        }
        float cuberoot() {
            return cbrt(m);
        }
};

// Stack class is used to store already calculated values inside array using stack data structure.
class Stack {
    float arr[100];
    int top;
    public:
        stack() {
            top = -1;
        }
        // push(x) is used to store the value of result in the Array arr[].
        void push(float x) {
            top++;
            arr[top] = x;
        }
        void pop() {
            if (top == -1) {
                return;
            }
            top--;
        }
        // Top() is used to output the value stored in Array arr[].
        float Top() {
            if (top == -1) {
                cout << "No result value stored" << endl;
                return -1;
            }
            return arr[top];
        }
};

// Function() used to print menu.
void ArithmeticMenu () {
    // Classes are initialized here...
    Calculator cal;
    Stack s;
    int choice2;
    do {
        // MENU
        cout << "\n\n\t1. Enter 10 to add";
        cout << "\n\t2. Enter 11 to subtract";
        cout << "\n\t3. Enter 12 to multiply";
        cout << "\n\t4. Enter 13 to divide";
        cout << "\n\t5. Enter 14 to show previous result";
        cout << "\n\t6. Enter 0 to return to main menu\n";
        cout << "\nEnter your choice: ";
        cin >> choice2;
        switch(choice2) {
            case 10:
                cal.Input();
                cout << "Result: " << cal.add() << endl;
                s.push(cal.add()); /* Storing the result in the array using stack... */
                break;
            case 11:
                cal.Input();
                cout << "Result: " << cal.sub() << endl;
                s.push(cal.sub());
                break;
            case 12: 
                cal.Input();
                cout << "Result: " << cal.mul() << endl;
                s.push(cal.mul());
                break;
            case 13: 
                cal.Input();
                cout << "Result: " << cal.div() << endl;
                s.push(cal.div());
                break;
            case 14:
                cout << "Previous result: " << s.Top() << endl; /* Here we are printing the previous result stored in the array... */
                break;
        }
    } while (choice2 >= 10 && choice2 <= 14);
}

void TrigonometricMenu() {
    // Classes are initialized here...
    Calculator cal;
    Stack s;
    int choice3;
    do {
        // MENU
        cout << "\n\t1. Enter 20 to find sin()";
        cout << "\n\t2. Enter 21 to find cos()";
        cout << "\n\t3. Enter 22 to find tan()";
        cout << "\n\t4. Enter 23 to find sin Inverse";
        cout << "\n\t5. Enter 24 to find cos Inverse";
        cout << "\n\t6. Enter 25 to find tan Inverse";
        cout << "\n\t7. Enter 26 to show previous result";
        cout << "\n\t8. Enter 0 to return to main menu\n";
        cout << "\nEnter your choice: ";
        cin >> choice3;
        switch (choice3) {
            case 20:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.sine() << endl;
                s.push(cal.sine()); /* Storing the result in the array using stack... */
                break;
            case 21:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.cose() << endl;
                s.push(cal.cose());
                break;
            case 22:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.tane() << endl;
                s.push(cal.tane());
                break;
            case 23:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.sinInverse() << endl;
                s.push(cal.sinInverse());
                break;
            case 24: 
                cal.TrigoInput();
                cout << "Result in radians: " << cal.cosInverse() << endl;
                s.push(cal.cosInverse());
                break;
            case 25:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.tanInverse() << endl;
                s.push(cal.tanInverse());
                break;
            case 26:
                cout << "Previous result: " << s.Top() << endl; /* Here we are printing the previous result stored in the array... */
                break;
        }
    } while (choice3 >= 20 && choice3 <=26);
}

void PowerMenu() {
    // Classes are initialized here...
    Calculator cal;
    Stack s;
    int choice4;
    do {
        // MENU
        cout << "\n\n\t1. Enter 30 to find power of a number";
        cout << "\n\t2. Enter 31 to find squareroot of a number: ";
        cout << "\n\t3. Enter 32 to find cuberoot of a number: ";
        cout << "\n\t4. Enter 33 to show previous result";
        cout << "\n\t5. Enter 0 to return to main menu";
        cout << "\nEnter your choice: ";
        cin >> choice4;
        switch (choice4) {
            case 30:
                cal.Input();
                cout << "Result: " << cal.power() << endl;
                s.push(cal.power()); /* Storing the result in the array using stack... */
                break;
            case 31: 
                cal.PowInput();
                cout << "Result: " << cal.squareroot() << endl;
                s.push(cal.squareroot());
                break;
            case 32:
                cal.PowInput();
                cout << "Result: " << cal.cuberoot() << endl;
                s.push(cal.cuberoot());
                break;
            case 33:
                cout << "Previous result: " << s.Top(); /* Here we are printing the previous result stored in the array... */
                break;
        }
    } while(choice4 >= 30 && choice4 <=33);
}

int main () {
    int choice1;
    do {
        // MAIN MENU
        cout << "\n\t Scientific Calculator!";
        cout << "\n\t\t **MENU**";
        cout << "\n\t1. Arithmetic Operations (+ , - , * , /)";
        cout << "\n\t2. Trigonometric Operations (sin , cos , tan , inverse)";
        cout << "\n\t3. Power functions (power , squareroot , cuberoot)";
        cout << "\n\t4. Enter 0 to Exit\n";
        cout << "Enter your choice: ";
        cin >> choice1;
        switch (choice1) {
            case 1:
                ArithmeticMenu();
                break;
            case 2:
                TrigonometricMenu();
                break;
            case 3:
                PowerMenu();
                break;
        }
    } while (choice1 >= 1 && choice1 <=3);

    return 0;   
}