#include<stdio.h>

int main()
{
long int M;

while(scanf("%ld",&M)==1)
{
if(M>=0&&M<=210000000)

printf("%ld\n",(M*M+M+2)/2);
if(M<0)
break;

}

return 0;
}

