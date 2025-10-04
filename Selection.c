#include<stdio.h>
int main()
{

int x=1;
if (x==1)
{
     printf("Jay Ganesh\n"); 
}
else 
{
     printf("Jay Maruti\n"); 
}
int y = 1;

switch(y) {
    case 1: printf("Jay Ganesh\n");  //Ladder goes down if break is not used
    case 2: printf("Jay Maruti\n"); 
    default: printf("Jay Bajrangbali\n");
}

    return 0;
}
