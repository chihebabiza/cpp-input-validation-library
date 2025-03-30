#include <iostream>
#include "Validator.h"

using namespace std;

int main()
{
    cout << "\n"
         << Validator::IsNumberBitween(1, 2, 4);
    cout << "\n"
         << Validator::IsNumberBitween(2, 1, 4);

    cout << "\n"
         << Validator::IsNumberBitween(2.2, 1.1, 4.5);
    cout << "\n"
         << Validator::IsNumberBitween(2.4, 1.9, 4.8);

         

    return 0;
}