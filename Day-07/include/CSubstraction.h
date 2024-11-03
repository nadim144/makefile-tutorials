#ifndef _SUBSTRATIOON_
#define _SUBSTRATIOON_

#include <iostream>
using namespace std;

class CSubstraction
{
    private:
        int x;
        int y;
    public:
        CSubstraction() = default;
        CSubstraction(int, int);
        int getSubstration();
};

#endif