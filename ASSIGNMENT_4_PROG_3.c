#include <stdio.h>
int main()
{
    printf("The First 10 Natural Numbers in Reverse Order are ::\n");
    for(int i=10;i>0;i--)
    {
      if(i==1)
        printf("and %d ",i);
      else
        printf("%d,",i);
}
    return 0;
}

