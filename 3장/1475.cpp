#include <stdio.h>

int main(int argc, char const *argv[])
{
    int temp, set = -1;
    scanf("%d", &temp);

    float arr[10] = {0,};
    while (temp > 0)
    {
        if ((temp % 10 == 9) or (temp % 10 == 6))
        {
            arr[6] += 0.5;
        }
        else arr[temp % 10]++;

        temp /= 10;
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (set < arr[i])
        {
            set = arr[i];
        }
        
    }
    
    printf("%d", set);

    return 0;
}
