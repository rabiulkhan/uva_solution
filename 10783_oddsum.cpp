#include<cstdio>

int main(void){
    int a,b,n=1,T,i,sum;
    scanf("%d",&T);

    while(n<=T){
        scanf("%d %d",&a, &b);
        sum =0;
        for(i = a; i<=b; i++){
            if(i%2==1){
                sum = sum + i;
            }
        }
        printf("case %d: %d\n",n,sum);
        n++;
    }
    return 0;
}
