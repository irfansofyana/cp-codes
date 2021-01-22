#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,m,i,j;
int t;
int f[1000005];

int sqr(int x){
	return x*x;
}

int cari(int x,int y){
	if (y==0) return (1);
	else if (y==1) return x%10;
	else if (y%2==0) return sqr(cari(x,y/2))%10;
	else if (y%2==1) return (x%10)*(sqr(cari(x,(y-1)/2))%10);
}

void isi(){
	f[1] = 1;
	for (i = 2; i <= 1000000; i++) {
		f[i] = (f[i-1]+cari(i,i));
		f[i] %= 10;
	}
}

int main(){
	OPTIMASI
	isi();
	cin >> t;
	while (t--) {
		cin >> n;
		cout << f[n] << '\n';
	}
	return 0;
}