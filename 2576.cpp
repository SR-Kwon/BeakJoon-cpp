#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int min = 101;
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> temp;
        if ((temp % 2) == 1)
        {
            sum += temp;
            min = temp < min ? temp : min;
        }
    }
    
    if (sum == 0)
    {
        cout << -1;
        return 0;
    }
    
    cout << sum << endl << min;

    return 0;
}
