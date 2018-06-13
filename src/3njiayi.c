#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int result=0;
    long long n=a;
    while(n>1){
        if(n%2==1){
            n=n*3+1;
        }else{
            n=n/2;
        }
        result++;
    }
    printf("%d\n",result);

    return 0;
}
