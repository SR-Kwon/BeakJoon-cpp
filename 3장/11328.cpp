#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    int n;
	cin >> n;
    char a[1004]={};
	for(int i=0;i<n;i++){
		cin >> a;
		int alp_1[26]={};
		int alp_2[26]={};
		int k=0;
		while(a[k]>='a'){
			alp_1[a[k]-'a']++;
			k++;
		}
		cin >> a;
		k=0;
		while(a[k]>='a'){
			alp_2[a[k]-'a']++;
			k++;
		}
		bool same=1;
		for(int j=0;j<26;j++){
			if(alp_1[j]!=alp_2[j]){
				same=0;
				break;
			}
		}
		if(same){
			cout << "Possible" << "\n";
		}else{
			cout << "Impossible" << "\n";
		}
	}
    return 0;
}