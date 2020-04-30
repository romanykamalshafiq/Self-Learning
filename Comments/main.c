#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temprature;
//Supply the temprature in Fahrenheit
printf("Enter the temprature in Fahrenheit : \r\n");
scanf("%lf", &temprature);
/*Convert temprature from
Fahrenheit to Celsius */
temprature = (temprature - 32.0) * 5.0/9.0;
//prints the
//result
printf("The temprature in Celsius is %lf\r\n",temprature);
    return 0;
}
