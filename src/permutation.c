#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int temp[10]={0};
 for(int i=123;i<=333;i++){
    int a=i*2;
    int b=i*3;
    temp[i/100]=temp[i/10%10]=temp[i%10]=1;
    temp[a/100]=temp[a/10%10]=temp[a%10]=1;
    temp[b/100]=temp[b/10%10]=temp[b%10]=1;
    int sum=0;
    for(int j=1;j<10;j++){
        sum+=temp[j];
        temp[j]=0;
    }
    if(sum==9){
        printf("%d %d %d\n",i,a,b);
    }
    sum=0;

 }
 return 0;
}
