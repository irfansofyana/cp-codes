#include <bits/stdc++.h>
using namespace std;

int n,i,ans;

bool cek(int x){
	if (x<=1) return false;
	for (int ii = 2 ; ii <= (int)sqrt(x); ii++) {
		if (x%ii==0) return false;
	}
	return true;
}

int main(){
	for (i = 2001 ; i <= 2020 ; i++) {
		int j = i;
		if (cek(j)) ans++;
	}
	cout << ans << '\n';
}