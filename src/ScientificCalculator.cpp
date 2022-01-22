#include <iostream>
#include <math.h>
using namespace std;

class Calculator {
    float num1 , num2;
    float rad , m;
    public:
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

void ArithmeticMenu () {
    Calculator cal;
    cout << "\n\n\t1. Enter 10 to add";
    cout << "\n\t2. Enter 11 to subtract";
    cout << "\n\t3. Enter 12 to multiply";
    cout << "\n\t4. Enter 13 to divide";
    cout << "\n\t5. Enter 0 to return to main menu\n";
    int choice2;
    do {
        cout << "\nEnter your choice: ";
        cin >> choice2;
        switch(choice2) {
            case 10:
                cal.Input();
                cout << "Result: " << cal.add() << endl;
                break;
            case 11:
                cal.Input();
                cout << "Result: " << cal.sub() << endl;
                break;
            case 12: 
                cal.Input();
                cout << "Result: " << cal.mul() << endl;
                break;
            case 13: 
                cal.Input();
                cout << "Result: " << cal.div() << endl;
                break;
        }
    } while (choice2 >= 10 && choice2 <= 13);
}

void TrigonometricMenu() {
    Calculator cal;
    int choice3;
    do {
        cout << "\n\t1. Enter 20 to find sin()";
        cout << "\n\t2. Enter 21 to find cos()";
        cout << "\n\t3. Enter 22 to find tan()";
        cout << "\n\t4. Enter 23 to find sin Inverse";
        cout << "\n\t5. Enter 24 to find cos Inverse";
        cout << "\n\t6. Enter 25 to find tan Inverse: ";
        cout << "\n\t7. Enter 0 to return to main menu\n";
        cout << "\nEnter your choice: ";
        cin >> choice3;
        switch (choice3) {
            case 20:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.sine() << endl;
                break;
            case 21:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.cose() << endl;
                break;
            case 22:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.tane() << endl;
                break;
            case 23:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.sinInverse() << endl;
                break;
            case 24: 
                cal.TrigoInput();
                cout << "Result in radians: " << cal.cosInverse() << endl;
                break;
            case 25:
                cal.TrigoInput();
                cout << "Result in radians: " << cal.tanInverse() << endl;
                break;
        }
        break;
    } while (choice3 >= 20 && choice3 <=25);
}

void PowerMenu() {
    Calculator cal;
    int choice4;
    do {
        cout << "\n\t1. Enter 30 to find power of a number";
        cout << "\n\t2. Enter 31 to find squareroot of a number: ";
        cout << "\n\t3. Enter 32 to find cuberoot of a number: ";
        cout << "\n\t4. Enter 0 to return to main menu";
        cout << "\nEnter your choice: ";
        cin >> choice4;
        switch (choice4) {
            case 30:
                cal.Input();
                cout << "Result: " << cal.power() << endl;
                break;
            case 31: 
                cal.PowInput();
                cout << "Result: " << cal.squareroot() << endl;
                break;
            case 32:
                cal.PowInput();
                cout << "Result: " << cal.cuberoot() << endl;
                break;
        }
    } while(choice4 >= 30 && choice4 <=32);
}

int main () {
    int choice1;
    do {
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