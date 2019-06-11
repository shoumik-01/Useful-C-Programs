#include <stdio.h>
int main()
{
  int n1, n2, i, j, flag;
  printf("This program finds prime numbers between two given numbers\n");
  printf("Enter lower bound: \n");
  scanf("%d", &n1);
  printf("Enter upper bound: \n");
  scanf("%d", &n2);
  printf("Prime numbers between %d and %d are: \n", n1, n2);
  for(i=n1+1; i<n2; ++i)
  {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
        if(i%j==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        printf("%d ",i);
  }
  return 0;
}
