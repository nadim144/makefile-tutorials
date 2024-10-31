#ifndef _ADDITION_
#define _ADDITION_
#include <iostream>
using namespace std;

class CAddtion
{
    private:
        int x;
        int y;
    public:
        CAddtion() = default;
        CAddtion(int, int);
        int getAddtion();
};
#endif