
#include "../include/CAddition.h"
#include "../include/CSubstraction.h"
#include "../include/CMultiplication.h"
using namespace std;



int main()
{
    CAddtion a(10, 20);
    CSubstraction b(10, 20);
    CMultiplication c(10, 20);
    std::cout<<"Addition = "<<a.getAddtion()<<std::endl;
    std::cout<<"Addition = "<<b.getSubstration()<<std::endl;
    std::cout<<"Addition = "<<c.getMultiplication()<<std::endl;
    return 0;
}