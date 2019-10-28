#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0); cout.tie(0);
using namespace std;

typedef long long ll;
ll t,l,r,sum;
ll i,j,bawah,atas;
vector<ll> A;

bool cek(ll bil){
	vector<ll> temp;
	int sz = 0;
	while (bil>0) {
		sz++;
		temp.push_back(bil%10);
		bil/=10;
	}
	int idx = sz-1,idxx = 0;
	while (idxx<=idx) {
		if (temp[idxx]!=temp[idx]) return false;
		else {
			idxx++;
			idx--;
		}
	}
	return true;
}

ll binser1(ll kiri,ll kanan){
	ll mid = (kiri+kanan)/2;
	if (kiri>kanan) return bawah;
	else if (A[mid]<l) {
		bawah = mid;
		return binser1(mid+1,kanan);
	}
	else if (A[mid]>=l) {
		return binser1(kiri,mid-1);
	}
}

ll binser2(ll kiri,ll kanan){
	ll mid = (kiri+kanan)/2;
	if (kiri>kanan) return atas;
	else if (A[mid]<=r) {
		return binser2(mid+1,kanan);
	}
	else if (A[mid]>r) {
		atas = mid;
		return binser2(kiri,mid-1);
	}
}

int main(){
	OPTIMASI
	for (i = 1 ; i <= 100000; i++) {
		if (cek(i)) A.push_back(i);
	}
	cin >> t;
	while (t--) {
		cin >> l >> r;
		bawah = -1; atas = A.size();
		ll temp1 = binser1(0,A.size()-1); ll temp2 = binser2(0,A.size()-1);
		sum = 0;
		for (i = temp1+1; i <= temp2-1; i++) {
			sum += A[i];
		}
		cout << sum << '\n';
	}
	return 0;
}