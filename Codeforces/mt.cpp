#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;

int n,i,j,temp;
string s[15];
int A[15];

void perintah(string s,int k){
	if (s=="ADD") temp += k;
	else if (s=="SUBTRACT") temp -= k;
	else if (s=="MULTIPLY") temp *= k;
	else {
		if (temp%k==0) temp /= k;
		else temp = -1000;
	}
}

int main() {
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) {
		cin >> s[i] >> A[i];
	}
	int ans = 0;
	for (i = 1 ; i <= 100; i++) {
		temp = i;
		for (j = 0 ; j < n ; j++) {
			perintah(s[j],A[j]);
			if (temp<0) {
				ans++;
				break;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}