#include "../include/CSubstraction.h"
CSubstraction::CSubstraction(int x, int y)
{
    this->x = x;
    this->y = y;
}
int CSubstraction::getSubstration()
{
    return (x - y);
}