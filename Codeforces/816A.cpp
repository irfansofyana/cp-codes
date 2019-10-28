#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int jam, menit;
char dumm;

pair<int,int> tambah(int x){
	int tjam = jam;
	int tmenit = menit;
	for (int i = 1; i <= x ; i++) {
		tmenit++;
		if (tmenit == 60) {
			tmenit = 0;
			tjam++;
			if (tjam == 24) tjam = 0;
		}
	}
	return {tjam, tmenit};
}

bool cek(int x,int y){
	int blk = y%10;
	int dpn = y/10;
	if (10 * blk + dpn == x) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> jam >> dumm >> menit;
	for (int i = 0 ; ; i++) {
		pair<int,int> tmp = tambah(i);
		if (cek(tmp.fi, tmp.se)) {
			cout << i << '\n';
			return 0;
		}
	}
	return 0;	
}