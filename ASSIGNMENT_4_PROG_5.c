#include <stdio.h>
int main()
{
    int a,b=-1,c;
    printf("The First 10 Natural Odd Numbers in Reverse Order are as follows ::\n");
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
