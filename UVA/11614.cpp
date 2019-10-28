#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

long long tc,i,j;
long long n;

long long bs(long long awal,long long akhir,long long target,long long temp){
	long long tengah = (awal+akhir)/2;
	if (awal>akhir) return temp;
	else if (((tengah*(tengah+1))/2)==target) return tengah;
	else if (((tengah*(tengah+1))/2)>target) return bs(awal,tengah-1,target,temp);
	else if (((tengah*(tengah+1))/2)<target) return bs(tengah+1,akhir,target,tengah);
}

int main(){
	OPTIMASI
	cin >> tc;
	while (tc--) {
		cin >> n;
		cout << bs(0,10000000000,n,1) << '\n';
	}
	return 0;
}