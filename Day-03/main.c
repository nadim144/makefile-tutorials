#include <stdio.h>
int main()
{
    int num = 0;
    printf("Enter any number within int rage: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("%d is Even number ...\n", num);
    }
    else
    {
        printf("%d is Odd number ...\n", num);
    }
    return 0;
}