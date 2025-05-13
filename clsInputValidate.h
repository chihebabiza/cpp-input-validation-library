// MIT License
// Copyright (c) 2025 Abiza Chiheb
// See the LICENSE file for full details.
#pragma once
#include <iostream>
#include <string>
#include "clsString.h"
#include "clsDate.h"
#include <limits>

class clsInputValidate
{

public:
    template <typename T>
    static bool IsNumberBetween(T Number, T From, T To)
    {
        return (Number >= From && Number <= To);
    }

    static bool IsDateBetween(clsDate Date, clsDate From, clsDate To)
    {
        // Date >= From && Date <= To
        if ((clsDate::IsDate1AfterDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From)) &&
            (clsDate::IsDate1BeforeDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To)))
        {
            return true;
        }

        // Date >= To && Date <= From
        if ((clsDate::IsDate1AfterDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To)) &&
            (clsDate::IsDate1BeforeDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From)))
        {
            return true;
        }

        return false;
    }

    template <typename T>
    static T ReadNumber(std::string ErrorMessage = "Invalid Number, Enter again\n")
    {
        T Number;
        while (!(std::cin >> Number))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << ErrorMessage;
        }
        return Number;
    }

    template <typename T>
    static T ReadNumberBetween(T From, T To, std::string ErrorMessage = "Number is not within range, Enter again:\n")
    {
        T Number = ReadNumber<T>();

        while (!IsNumberBetween(Number, From, To))
        {
            std::cout << ErrorMessage;
            Number = ReadNumber<T>();
        }
        return Number;
    }

    static bool IsValideDate(clsDate Date)
    {
        return clsDate::IsValidDate(Date);
    }

    static std::string ReadString()
    {
        std::string S1 = "";
        // Usage of std::ws will extract all the whitespace character
        std::getline(std::cin >> std::ws, S1);
        return S1;
    }
};