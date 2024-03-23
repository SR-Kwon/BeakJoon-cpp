#include <iostream>
using namespace std;
int main() {
    int a[21],i,s,e;
    for(i=1;i<=20;i++)a[i]=i;
    i=10;
    while(i--){
        cin >> s >> e;        
        while(s<e){
            int temp = a[s];
            a[s] = a[e];
            a[e] = temp;
            s++; e--;
        }
    }
    for(i=1;i<=20;i++) cout << a[i] << ' ';
    return 0;
}

