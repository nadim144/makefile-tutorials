#ifndef _CMULTIPLICATION_
#define _CMULTIPLICATION_
#include <iostream>
using namespace std;

class CMultiplication
{
    private:
        int x;
        int y;
    public:
        CMultiplication() = default;
        CMultiplication(int, int);
        int getMultiplication();
};
#endif