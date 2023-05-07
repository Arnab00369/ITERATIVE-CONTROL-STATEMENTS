#include <stdio.h>
int main()
{
    int a,b=0,c;
     printf("The First 10 Even Natural Numbers in Reverse Order are ::\n");
   for(a=0;a<=9;a++)
    {
      b+=2;
    }
    c=b;

    for(a=0;a<=9;a++)
    {
        printf("%d\n",c);
        c-=2;
    }
    return 0;
}
