#include <stdio.h>
#include "pluse.h"
#include "minus.h"

int main()
{
    int a = 2;
    int b = 1;
    printf("%d + %d = %d\n", a, b, pluse(a,b));
    printf("%d - %d = %d\n", a, b, minus(a,b));
    return 0;
}