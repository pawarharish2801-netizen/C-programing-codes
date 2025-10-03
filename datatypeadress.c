#include<stdio.h>

int main() 
{
    char cValue='s';
    int iValue=11 ;
    float fValue=32.355f;
    double dValue=64.34534633;

     printf("size of character is %lu\n",sizeof(cValue)) ;
    printf("size of integer is %lu\n",sizeof(iValue)) ;
    printf("size of float is %lu\n",sizeof(fValue)) ;
    printf("size of double is %lu\n",sizeof(dValue)) ;

    printf("Address of character is %lu\n",&(cValue)) ;
    printf("Address of integer is %lu\n",&(iValue)) ;
    printf("Address of float is %lu\n",&(fValue)) ;
    printf("Address of double is %lu\n",&(dValue)) ;




    return 0;
}