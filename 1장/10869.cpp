//A+B, A-B, A*B, A/B(몫), A%B(나머지)

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    cout << a + b << endl << a - b << endl << a * b << endl << a / b << endl << a % b << endl;

    return 0;
}