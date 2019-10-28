#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int temp,target;

int jdigit(int k){
	int res = 0;
	while (k>0) {
		res += (k%10);
		k/=10;
	}
	return res;
}

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	while(cin >> n && n!=0) {
		target = jdigit(n);
		for (i = 11  ; ; i++) {
			m = i;
			temp = m*n;
			if (jdigit(temp)==target) break;
		}
		cout << i << '\n';
	}
	return 0;
}