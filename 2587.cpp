#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int temp;
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        sum += temp;

        arr[i] = temp;
    }
    sort(arr, arr+5);

    cout << sum / 5 << endl << arr[2];
    
    return 0;
}
