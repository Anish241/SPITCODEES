#include<stdio.h>
int main()
{ float temp;
  float degrees;
  
  printf("Enter the temperature in farenheit: ");
  scanf("%f",&temp);

  degrees=(temp-32)*5/9;

  printf("The temperature in degrees is %f\n",(float)degrees);



    return 0;
}
