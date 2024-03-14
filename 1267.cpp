// def compare(times):
//     price_영식, price_민식 = 0, 0
//     for time in times:
//         
//     if price_영식 > price_민식:
//         print('M', price_민식)
//     elif price_영식 < price_민식:
//         print('Y', price_영식)
//     else:
//         print('Y M', price_영식)
        
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N = 0;
    cin >> N;
    int times[N];

    for (int i = 0; i < N; i++)
    {
        cin >> times[i];
    }
    
    int Y = 0, M = 0;

    for (int i = 0; i < N; i++)
    {
        if (times[i] <= 0)
        {
            continue;
        }
        else
        {
            Y += ((times[i] / 30) + 1) * 10;
            M += ((times[i] / 60) + 1) * 15;
        }
    }

    if (Y == M)cout << "Y M " << Y;
    else if (Y < M)cout << "Y " << Y;
    else cout << "M " << M;
    
    return 0;
}
