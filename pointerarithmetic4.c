#include <stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111} ; 
    
    int *p = NULL ;
    int *q = NULL ;
    
    p = &Arr[1] ;
    q = &Arr[4] ;

    printf(" Result of Subscration is : %ld\n", q-p); //ALLOWED

    q= q - 2 ;

    printf(" Data Pointed by q is  is : %ld\n",*q);   //ALLOWED

    return 0 ;
}