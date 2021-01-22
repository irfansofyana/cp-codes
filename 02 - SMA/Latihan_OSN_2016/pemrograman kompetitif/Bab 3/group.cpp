#include <bits/stdc++.h>
using namespace std;

int t,n,i,j;
int A[10];
int poin[10];
vector<pair<int,int> > tanding;
bool ans;

void rekursi(int udah){
	if (udah==(n*(n-1))/2){
		int temp[10];
		for (int z =0 ; z < n ; z++) temp[z] = poin[z];
		sort(temp,temp+n);
		bool cekk = true;
		for (int z =0 ; z < n ; z++) {
			if (temp[z]!=A[z]) {
				cekk = false;
				break;
			}
		}
		if (cekk) ans = true;
	}
	else {
		poin[tanding[udah].first] += 3; rekursi(udah+1); poin[tanding[udah].first] -= 3;
		poin[tanding[udah].first] += 1; poin[tanding[udah].second] += 1; rekursi(udah+1); 
		poin[tanding[udah].first] -= 1; poin[tanding[udah].second] -= 1; 
		poin[tanding[udah].second] += 3; rekursi(udah+1); poin[tanding[udah].second] -= 3;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		for (i = 0 ; i < n ; i++) cin >> A[i];
		sort(A,A+n);
		ans = false;
		memset(poin,0,sizeof poin);
		tanding.clear();
		for (i = 0 ; i < n-1; i++) 
			for (j = i+1; j < n ; j++){
				tanding.push_back(make_pair(i,j));
			}
		rekursi(0);
		cout << (ans ? "YES":"NO") << '\n';
	}
	return 0;
}