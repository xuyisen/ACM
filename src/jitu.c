#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a=(4*n-m)/2;
    int b=n-a;
    if(m%2==1||a,0||b<0){
        printf("NO answer\n");
    }else{
        printf("%d %d",a,b);
    }

}
