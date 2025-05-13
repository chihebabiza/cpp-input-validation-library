// MIT License
// Copyright (c) 2025 Abiza Chiheb
// See the LICENSE file for full details.
#include <iostream>
#include "clsInputValidate.h"
#include "clsDate.h"

int main()
{
    // Test IsNumberBetween for int and double
    std::cout << clsInputValidate::IsNumberBetween(5, 1, 10) << std::endl;       // Should print 1 (true)
    std::cout << clsInputValidate::IsNumberBetween(5.5, 1.3, 10.8) << std::endl; // Should print 1 (true)

    // Test IsDateBetween for date ranges
    std::cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(8, 12, 2022), clsDate(31, 12, 2022)) << std::endl; // Should print 1 (true)
    std::cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(31, 12, 2022), clsDate(8, 12, 2022)) << std::endl; // Should print 1 (true)

    // Read and validate an integer input
    std::cout << "\nPlease Enter a Number:\n";
    int x = clsInputValidate::ReadNumber<int>("Invalid Number, Enter again:\n");
    std::cout << "x = " << x << std::endl;

    // Read and validate an integer input within a range
    std::cout << "\nPlease Enter a Number between 1 and 5:\n";
    int y = clsInputValidate::ReadNumberBetween<int>(1, 5, "Number is not within range, enter again:\n");
    std::cout << "y = " << y << std::endl;

    // Read and validate a double input
    std::cout << "\nPlease Enter a Double Number:\n";
    double a = clsInputValidate::ReadNumber<double>("Invalid Number, Enter again:\n");
    std::cout << "a = " << a << std::endl;

    // Read and validate a double input within a range
    std::cout << "\nPlease Enter a Double Number between 1 and 5:\n";
    double b = clsInputValidate::ReadNumberBetween<double>(1.0, 5.0, "Number is not within range, enter again:\n");
    std::cout << "b = " << b << std::endl;

    // Validate a date
    std::cout << "\nIs the date valid (35, 12, 2022)?\n";
    std::cout << clsInputValidate::IsValideDate(clsDate(35, 12, 2022)) << std::endl; // Should print 0 (false)

    system("read -p '\nPress Enter to continue...'");

    return 0;
}