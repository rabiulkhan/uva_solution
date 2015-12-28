#include <stdio.h>

int main(void){
    int x, y, T, i;

    scanf("%d",&T);

    while(T > 0){
        int count = 0;
        scanf("\n%d %d", & x, & y);
        for(i = x; i <= y; i++){
            count++;
        }
        printf("\n%d\n",count-1);
        T--;

    }
    return 0;
}
