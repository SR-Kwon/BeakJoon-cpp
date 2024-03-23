#include <iostream>

using namespace std;

void single_sort(int a, int b, int c){
    if (b > c){
        int temp = b;
        b = c;
        c = temp;
    }
    if (a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if (b > c){
        int temp = b;
        b = c;
        c = temp;
    }

    cout << a << ' ' << b << ' ' << c << endl;
}

int main(int argc, char const *argv[]){
    
    int a, b, c;
    cin >> a >> b >> c;

    single_sort(a,b,c);

    return 0;
}
