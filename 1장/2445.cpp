#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int k = 1; k <= (num - i) * 2; k++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = num - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int k = 1; k <= (num - i) * 2; k++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
