#include <bits/stdc++.h>
using namespace std;

int maks,mini;
int n,i,x;

int main(){
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> x;
		if (i==0) {
			maks = mini = x;
		}
		else {
			maks = max(maks,x);
			mini = min(mini,x);
		}
	}
	cout << maks << " " << mini << '\n';
}