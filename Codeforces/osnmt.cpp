#include <bits/stdc++.h>
using namespace std;
int i,j,temp,awal;
int main(){
	for (i=100;i<=999;i++){
		if (i%11==0){
			j=i/11;
			awal=j;
			temp=0;
			while (j>0){
				temp+=(j%10)*(j%10);
				j=j/10;
			}
			if (temp==awal) printf("%d\n",i);
		}
	}
	return 0;
}
