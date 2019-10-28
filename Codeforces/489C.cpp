#include <bits/stdc++.h>
using namespace std;

int m,n,sum;
int i,j;
char mini[105],maks[105];

int main(){
	scanf("%d %d",&n,&m);
	if (m>9*n || m==0) {
		if (m==0 && n>=2) puts("-1 -1");
		else if (m==0) puts("0 0");
		else if (m>9*n) puts("-1 -1");
	}
	else {
		i = n-1; sum = m;
		mini[0] = '1'; sum--;
		while (sum>9) {
			mini[i] = '9';
			i--;
			sum-=9;
		}
		if (i!=0) mini[i] = char(sum+48);
		else mini[i] = char(sum+49);
		for (int z=1;z<i;z++) mini[z]='0';
		i = 0; sum = m;
		while (sum>9) {
			maks[i] = '9';
			i++;
			sum-=9;
		}
		maks[i] = char(sum+48);
		for (int z=i+1;z<n;z++) maks[z] = '0';
		printf("%s %s\n",mini,maks); 
	}
}
