#include "../include/CMultiplication.h"
CMultiplication::CMultiplication(int x, int y)
{
    this->x = x;
    this->y = y;
}
int CMultiplication::getMultiplication()
{
    return (x * y);
}