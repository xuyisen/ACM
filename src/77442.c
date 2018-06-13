#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    for(int x=1;;x++){
        int n=x*x;
        if(n<1000){
            continue;
        }
        if(n>9999){
            break;
        }
        int a=n/100;
        int b=n%100;
        if(a/10==a%10&&b/10==b%10){
            printf("%d\n",n);
        }
    }
    return 0;
}
