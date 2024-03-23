#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for(int i=n;i>=0;i--){
		for(int a=n-i;a>0;a--) cout << " ";
		for(int a=1;a<=i;a++) cout << "*";
	cout << endl;
	}
    return 0;
}
