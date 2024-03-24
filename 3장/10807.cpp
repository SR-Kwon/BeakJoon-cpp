#include<stdio.h>

int main()
{
    int N, arr[201] = {}, temp;
    
    scanf("%d", &N);
    
    for(int i=0; i<N; i++)
    {
        scanf("%d", &temp);
        arr[temp + 100]++;
    }
    
    scanf("%d", &temp);
    
    printf("%d", arr[temp + 100]);
}