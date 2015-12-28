#include<cstdio>

int main(void){
    int c,m=1,n,score[1000],avg=0,i,j,total,p;
    scanf("%d", &c);
    while(m <= c){
        scanf("%d", &n);
        for(i = total = 0; i<n; i++){
            scanf("%d", &score[i]);
            total = total + score[i];
        }
        avg = total/n;

        for(j = p =0; j < n; j++){
            if(score[j] > avg){
                p++;
            }
        }
        printf("%.3lf%%\n",(double)p/n*100);
        m++;
    }
    return 0;
}
