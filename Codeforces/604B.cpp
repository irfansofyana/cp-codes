#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;
int n,k,i,j;
ll A[100005],awal,akhir,tengah;

bool cek1(ll x){
	j = 0; ll sum = 0;
	int target = k;
	for (i = 0 ; i < n ; i++) {
		j++;
		if (A[i]>x) return false;
		sum += A[i];
		if (j==2) {
			if (sum>x) {
				target -=2;
			} 
			else target--;
			j = 0; sum = 0;
		}
	}
	if (n%2==1) target--;
	if (target<0 || sum>x) return false;
	return true;
}

bool cek2(ll x){
	int target,it,itt;
	j = 0; target = k;
	it = 0; itt = n-1;
	while (it<=itt) {
		if (A[it]>x) return false;
		if (A[itt]>x) return false;
		if (it!=itt){
			if (A[it]+A[itt]>x) target -=2;
			else target --;
		}
		else target --;
		it++; itt--;
	}
	if (target < 0) return false;
	return true;
}

int main(){
	OPTIMASI
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) 
		cin >> A[i];
	awal = 1; akhir = 1000000000;
	ll ans = 0;
	while (awal<=akhir) {
		tengah = (awal+akhir)/2;
		if (cek1(tengah)) {
			ans  = tengah;
			akhir = tengah-1;
		}
		else awal = tengah+1;
	}
	awal = 1; akhir = 1000000000;
	ll ans1 = 0;
	while (awal<=akhir) {
		tengah = (awal+akhir)/2;
		if (cek2(tengah)) {
			ans1  = tengah;
			akhir = tengah-1;
		}
		else awal = tengah+1;
	}
	
	cout << min (ans,ans1)<< '\n';
	return 0;
}