#include <stdio.h>
int main()
{
    int a=0,b=1;
    printf("The First 10 Even Natural Numbers are as follows ::\n");
   while(a>=0)
    {
        if(b%2==0)
        {
            a++;
            printf("%d\n",b);
       }
       b++;
       if(a==10)
       break;
    }
    return 0;

}
