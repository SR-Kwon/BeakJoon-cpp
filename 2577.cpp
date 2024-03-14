#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long long a;
    int b, c, arr[10] = {0};
    cin >> a >> b >> c;
    a *= b * c;
    while(a){arr[a%10]++; a /= 10;}
    for(int i = 0; i < 10; i++) cout << arr[i] << endl;
    return 0;
}
