#include <stdio.h>
#include <stdlib.h>


int* fun()
{
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
    int x = 5;

    return &x;
}

// Driver Code
int main()
{
    int * ptr = (int *)malloc(20);
    printf("%d \n",ptr); //Adress of Pointer
    printf("%d \n",*ptr);
    free(ptr);
    printf("%d \n",ptr);
    printf("%d \n",*ptr);
    int* p = fun();

    // p points to something which is not
    // valid anymore
    printf("%d", *p);
    return 0;
}