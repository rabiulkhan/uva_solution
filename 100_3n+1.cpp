#include<cstdio>

int main(void){
    int i,j, n,temp,len,max;

    while(scanf("%d%d",&i,&j)==2){
        printf("%d %d ", i, j);
        if(i > j){
            temp = i;
            i = j;
            j = temp;
        }
        for(n = i,max=1; n <= j; n++){
            len = 1;
            temp = n;

            while(temp != 1){
                if(temp % 2 == 1)
                    temp = 3*temp+1;
                else
                    temp = temp / 2;

                len++;
            }
            if(len > max)
                max = len;
        }
        printf("%d\n", max);
    }
}
