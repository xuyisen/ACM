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
   for(i=10;i<=100;i++){
    if(i%3==a&&i%5==b&&i%7==c){
        printf("%d\n",i);
        break;
    }
   }
   if(i==101){
    printf("No answer");
   }
   return 0;
}
