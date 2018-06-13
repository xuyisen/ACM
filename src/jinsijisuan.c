#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double sum=0;
    for(int i=1;;i=i+1){
        double n=1.0/(i*2-1);
        if(i%2==1){
            sum=sum+n;
        }else{
            sum=sum-n;
        }
        if(n<=1e-6){
            break;
        }
    }

    printf("%.6f\n",sum);
    return 0;
}
