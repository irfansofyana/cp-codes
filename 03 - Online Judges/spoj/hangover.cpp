#include <bits/stdc++.h>
using namespace std;

int n,i,j,ans;
double sum[505],x;

void isi(){
	for (i = 1 ; i <= 500; i++) {
		sum[i] = sum[i-1]+1/double(i+1);
	}
}

int binser(int awal,int akhir) {
	int tengah = (awal+akhir)/2;
	if (awal>akhir) return ans;
	else if (sum[tengah]<x) return binser(tengah+1,akhir);
	else if (sum[tengah]>=x) {
		ans = min(ans,tengah);
		return binser(awal,tengah-1);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	isi();
	//for (i = 1 ; i <= 4 ; i++) cout << sum[i] << '\n';
	cout << fixed << showpoint;
	cout << setprecision(3);
	while (cin >> x && x!=0.00) {
		ans = 500;
		cout << binser(1,500) << " card(s)" << '\n';
	}
	return 0;
}