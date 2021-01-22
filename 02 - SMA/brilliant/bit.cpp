#include<bits/stdc++.h>
using namespace std;

int n,i,j;
int ans;

int main(){
	for (i = 0 ; i <= 80 ; i++) {
		int temp = 0;
		for (j = 0 ; j < 7 ; j++) {
			if ((i&(1<<j))!=0) temp++;
		}
		if (temp==4) ans++;
	}
	cout << ans << '\n';
}