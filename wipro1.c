#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j ,N,a=1;
    printf("Enter the value of N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        a=(i*(i+1))/2;

    for(j=i;j<i;j++){

        printf("%d*",a--);
    }
    printf("%d\n",a--);
}
}
