#include<iostream>

using namespace std;

int yoon(int year){
    if (((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0)
		return 1;
	else
		return 0;
}
int main(){
	int year = 0;
	cin >> year;

	cout << yoon(year);

	return 0;
}