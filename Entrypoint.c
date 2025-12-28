#include "Marvellous.h"

int main()
{
    float fValue = 10.5f;
    float fRet = 0.0f;

    fRet = CircleArea(fValue);

    printf("Area of circle is : %f\n",fRet);

    return 0;
}


// gcc Helper.c Entrypoint.c -o Myexe
// gcc Entrypoint.c Helper.c -o Myexe
