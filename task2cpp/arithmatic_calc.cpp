// CODSOFT TASK 2

#include <iostream>
using namespace std;

template< class T1,class T2 >
T1 add( T1 x , T2 y){
    return x+y;
}

template< class T1,class T2 >
T1 sub( T1 x , T2 y){
    return x-y;
}

template< class T1,class T2 >
T1 multi( T1 x , T2 y){
    return x*y;
}

template< class T1,class T2 >
T1 divi( T1 x , T2 y){
    return x/y;
}

int main() {
    int num1, num2;
    char mode;

    cout << "Enter a Number 1: ";
    cin >> num1;

    cout << "Enter the Mode of Operation (+, -, *, /): ";
    cin >> mode;

    cout << "Enter a Number 2: ";
    cin >> num2;

    switch(mode) {
        case '+':
            cout << "THE SUM IS: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "THE SUB IS: " << sub(num1, num2) << endl;
            break;
        case '*':
            cout << "THE MULTI IS: " << multi(num1, num2) << endl;
            break;
        case '/':
            cout << "THE DIVISION IS: " << divi(num1, num2) << endl;
            break;
        default:
            cout << "Invalid Operation" << endl;
            break;
    }

    return 0;
}

/* decleration :
       This program is truely done with my knowledge and  also I had done using function templates
                                                      -- AKSAY M-- */
