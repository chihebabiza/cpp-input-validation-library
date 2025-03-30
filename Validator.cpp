#include <iostream>
#include "Validator.h"

using namespace std;

int main()
{
    cout << Validator::IsNumberBitween(1, 2, 4);
    cout << Validator::IsNumberBitween(2, 1, 4);

    return 0;
}