#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  long long temp=0;
  double sum=0;

  for(long long i=a;i<=b;i++){
    temp=i*i;
    sum=sum+1.0/temp;
  }
  printf("%.5f\n",sum);
  return 0;
}
