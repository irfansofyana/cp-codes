#include <bits/stdc++.h>
using namespace std;

int i,j,ans,temp;

int main(){
	for (i=100;i<=999;i++){
		temp = i;
		while (temp>0) {
			ans+=(temp%10);
			temp/=10;
		}
	}
	printf("%d\n",ans);
}
