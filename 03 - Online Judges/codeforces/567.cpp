#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;

int n,i,j,ans,kapasitas;
char c;
bool sudah[MAXN+5];
int x;

int main(){
	cin.tie(0);
	cin >> n;
	memset(sudah,false,sizeof sudah);
	for (i = 0 ; i < n ; i++) {
		cin >> c >> x;
		if (c=='+') {
			kapasitas++;
			if (kapasitas>ans) ans = kapasitas;
			sudah[x] = true;
		}
		else {
			if (!sudah[x]) ans++;
			else kapasitas--;
			sudah[x] = false;
		}
	}
	cout << ans << endl; 
	return 0;
}