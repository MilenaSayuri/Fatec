// 0 = falso
// 1 = verdadeiro
#include<stdio.h>

bool B1 = false, B2 = true, B3 = false;
int main()
{
    if (B1)
    {
        printf("C1");
    }
    else
    {
        if (B2)
        {
            if (B3)
            {
                printf("C2");
            }
            else
            {
                printf("C3");
                printf("C4");
            };
        };
    };
    printf("C5");
};
