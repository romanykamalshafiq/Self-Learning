#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenght ;
    int width ;
    printf("Enter the Length ");
    scanf("%d",&lenght);
    printf("Enter the Width ");
    scanf("%d",&width );

    int area = lenght * width ;

    printf("Area = %d\n",area);
    return 0;
}
