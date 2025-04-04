// MIT License
// Copyright (c) 2025 Abiza Chiheb
// See the LICENSE file for full details.
#include <iostream>
#include "Validator.h"

int main()

{
    cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl;
    cout << clsInputValidate::IsNumberBetween(5.5, 1.3, 10.8) << endl;

    cout << clsInputValidate::IsDateBetween(clsDate(),
                                       clsDate(8,12,2022), 
                                       clsDate(31, 12, 2022)) << endl;
    
    cout << clsInputValidate::IsDateBetween(clsDate(),
                                       clsDate(31, 12, 2022),
                                       clsDate(8, 12, 2022)) << endl;
    
    cout << "\nPlease Enter a Number:\n";
    int x= clsInputValidate::ReadIntNumber("Invalid Number, Enter again:\n");
    cout << "x=" << x;

    cout << "\nPlease Enter a Number between 1 and 5:\n";
    int y = clsInputValidate::ReadIntNumberBetween(1,5,"Number is not within range, enter again:\n");
    cout << "y=" << y;

    cout << "\nPlease Enter a Double Number:\n";
    double a = clsInputValidate::ReadDblNumber("Invalid Number, Enter again:\n");
    cout << "a=" << a;

    cout << "\nPlease Enter a Double Number between 1 and 5:\n";
    double b = clsInputValidate::ReadDblNumberBetween(1, 5, "Number is not within range, enter again:\n");
    cout << "b=" << b;

    cout << endl << clsInputValidate::IsValideDate(clsDate(35,12,2022)) << endl;

    system("pause");

    return 0;
}