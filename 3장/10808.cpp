#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char arr[101];
    int result[26] = {0};
    cin >> arr;

    char pointer = arr[0];

    for (int i = 0; i < 100; i++)
    {
        if (arr[i] == '\0')
        {
            break;
        }
        
        result[arr[i]-97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << result[i] << ' ';
    }

    return 0;
}
