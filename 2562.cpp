#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int max = -1;
    int index = 0;
    int temp = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> temp;
        if (temp > max)
        {
            max = temp;
            index = i + 1;
        }
        
    }
    
    cout << max << endl << index;

    return 0;
}
