#include<stdio.h>

int main(int argc, char const *argv[])
{
    int N, K, Sex, Grade, result = 0;;
    scanf("%d %d", &N, &K);

    int school[6][2] = {0};
    for(int i = 0; i < N; i++){
        scanf("%d %d", &Sex, &Grade);
        school[Grade-1][Sex]++;
    }
    
    for (int i = 0; i < 6; i++)
    {
        if((school[i][0] % K) == 0) result += school[i][0] / K;
        else result += (school[i][0] / K )+ 1;

        if((school[i][1] % K) == 0) result += school[i][1] / K;
        else result += (school[i][1] / K )+ 1;   
    }
    
    printf("%d", result);

    return 0;
}
