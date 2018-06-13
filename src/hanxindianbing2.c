#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a<0||b<0||c<0||a>=3||b>=5||c>=7){
    printf("No answer");
    return 0;
   }
   int i=10;
   int m=(70*a+21*b+15*c)%105;
   if(m>100){
        printf("No answer\n");
   }else{
       printf("%d\n",m);
   }
   return 0;
}
