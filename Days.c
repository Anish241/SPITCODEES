
#include<stdio.h>
int main()
{ int n;
  printf("Enter the number of days: ");
  scanf("%d",&n);
  int years = n/365;
  int leftdays= n%365;
  int months = leftdays/30;
  int ld = leftdays%30;
  int weeks = ld/7;
  int fld = ld%7;
 printf("No of year %u\n",years);
 printf("No of months %u\n",months);
 

 
 printf("No of weeks %d\n",weeks);
 
 printf("No of days %d\n",fld);
 
 



    return 0;
}





