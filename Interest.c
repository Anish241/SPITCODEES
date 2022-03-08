#include<stdio.h>
#include<math.h>
int main()
{ int principal=500000;
  float rate= 3.5/100;

  float SI = principal * 10* rate;
  float CIA = (principal*(pow((1+rate),10)))-principal;
  float CISA= (principal*(pow((1+rate/2),20)))-principal;
  float CIQ=  (principal*(pow((1+rate/4),40)))-principal;
  float CIM =  (principal*(pow((1+rate/12),120)))-principal;
  float CID =  (principal*(pow((1+rate/365),3650)))-principal;

  printf("The simple interest on Rs 500000 in 10 years is: %f\n",SI);
  printf("The compound interest on Rs500000 in 10 years anually is:%f\n" ,CIA );
  printf("The compound interest on Rs500000 semi-anually is:%f\n" ,CISA );
  printf("The compound interest on Rs500000 quarterly is:%f\n" ,CIQ);
  printf("The compound interest on Rs500000 monthly is:%f\n" ,CIM);
  printf("The compound interest on Rs500000 daily is:%f\n" ,CID );



    return 0;
}

