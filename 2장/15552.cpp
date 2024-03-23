#include <iostream>

using namespace std;
int main(){
	int a,b,c,d;
	int i,j,k;
	
    ios::sync_with_stdio(false);
	
    cin.tie(NULL);
    cin >> a;

	for(i=0;i<a;i++){
		cin >> b >> c;
		cout << b+c << "\n";
	}
	
	return 0;
}