#include<cstdio>

int main(void){
    int v,t;

    while(scanf("%d %d", & v,& t)==2){
        if(v>=-100 && v <= 200 && t >= 0 && t <= 200){
            printf("%d",2*v*t);
        }
    }

    return 0;
}
