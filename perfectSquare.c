#include <stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Enter the no\n");
    scanf("%d",&num);
    float val;
    val=sqrt(num);
    int final;
    final =val;
    if(final==val)
        printf("perfect square");
    else
        printf("not  a perfect square");
    return 0;
}