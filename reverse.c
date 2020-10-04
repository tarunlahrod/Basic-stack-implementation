#include<stdio.h>
#include<conio.h>


int main() {
    int A[1000],N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    scanf("%d",&A[N]);
    }
    for(i=N-1;i>=0;i--)
    {
        printf("%d", A[N]);
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

