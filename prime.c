#include<stdio.h>
void main()
{
  int n,i,flag=0;
  printf("enter the prime number to check:");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
    printf("\nthe given number is prime number:%d",n);
  else
    printf("the given number is not a prime number:%d\n",n);
}
