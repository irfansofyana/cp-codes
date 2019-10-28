#include <bits/stdc++.h>
using namespace std;

int n,i,j,t;
map<int,int> mep;

void digit(int k){
	while (k>0) {
		mep[k%10]++;
		k/=10;
	}
}

int main(){
	cin.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		mep.clear();
		for (i = 1 ; i<= n ; i++) {
			digit(i);
		}
		for (i = 0; i < 10 ; i++) {
			cout << mep[i];
			if (i==9) cout << endl;
			else cout << " ";
		}
	}
	return 0;
}