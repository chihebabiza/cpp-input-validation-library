#pragma once

#include <iostream>

using namespace std;

class Validator
{
public:
    static bool IsNumberBitween(int num, int num1, int num2)
    {
        return (num > num1 && num < num2);
    }
};