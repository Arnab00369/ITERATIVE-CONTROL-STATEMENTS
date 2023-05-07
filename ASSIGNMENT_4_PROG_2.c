#include <stdio.h>
int main()
{
    printf("The First 10 Natural Numbers are ::\n");
    for(int i=0;i<10;i++)
    {
      if(i==9)
        printf("and %d ",i+1);
      else
        printf("%d,",i+1);
}
    return 0;
}
