#include <stdio.h>

int set[10]={0,0,0,0,0,0,0,0,0,0};

int main(){
	int N,j,max=0;
	scanf("%d",&N);
	while(N!=0){
		set[N%10]++;
		N/=10;
	}
	set[6]=(set[6]+set[9]+1)/2;
	for(j=0;j<9;j++)
		if(max<set[j])max=set[j];
	printf("%d",max);
	return 0;
}