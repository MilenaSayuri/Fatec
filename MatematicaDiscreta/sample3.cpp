#include <stdio.h>

// && - and - e
// || - or - ou
// ! - not - negacao
// = - recebe
// == - comparacao

int main()
{
    bool A, B, C;
    float X, Y;
    int L;

    A = true;
    B = true;
    C = false;
    X = 1.5;
    Y = 3.2;
    X = X + 1;

    if (C || ((X + Y > 5) || (!A && B)))
    {
        L = 0;
        printf("L: %d", L);
    }
    else
    {
        L = 1;
        printf("L: %d", L);
    }
};