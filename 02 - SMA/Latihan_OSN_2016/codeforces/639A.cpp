#include <bits/stdc++.h>
using namespace std;

int n,q,k,i,j;
int arr[150005];
int tipe,idx;
vector<int> isi;
map<int,int> indeks;

bool comp(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k >> q;
	for (i = 1 ; i <= n ; i++){
		cin >> arr[i];
		indeks[arr[i]] = i;
	}
	while (q--) {
		cin >> tipe >> idx;
		if (tipe == 1) {
			if ((int)isi.size() + 1 <= k){
				isi.push_back(arr[idx]);
				sort(isi.begin(),isi.end(),comp);
			}
			else if ((int)isi.size()+1 > k) {
				isi.push_back(arr[idx]);
				sort(isi.begin(),isi.end(),comp)	;
				isi.erase(isi.begin() + (int)isi.size()-1);
			}
		}
		else {
			for (i = 0 ; i < isi.size(); i++){
				if (indeks[isi[i]]==idx) {
					cout << "YES\n";
					break;
				}
			}
			if (i==(int)isi.size()) cout << "NO\n";
		}
	}
	return 0;
}