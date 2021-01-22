#include <bits/stdc++.h>
using namespace std;

int n,m,i,j,tmp,smt,frek;
string s;

struct paket{
	string nama;
	int nilai,region;
};

paket A[100005];
vector<string> ans[100005];

bool comp(paket a,paket b){
	if (a.region == b.region) return a.nilai > b.nilai;
	return a.region < b.region;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	for (i = 0 ; i < n ; i++) {
		cin >> s >> tmp >> smt;
		A[i].nama = s;
		A[i].region = tmp;
		A[i].nilai = smt;
	}
	sort(A,A+n,comp);
	i = 0; int idx = 0;
	while (i < n) {
		frek = 1;  j = i+1; 
		while (j < n && A[j].region==A[i].region) {
			frek++;
			j++;
		}
		if (frek==2 && A[i].nilai!=A[i+1].nilai){
			ans[idx].push_back(A[i].nama);
			ans[idx].push_back(A[i+1].nama);
			idx++;
		} 
		else if (A[i].nilai!=A[i+1].nilai && A[i+1].nilai != A[i+2].nilai) {
			ans[idx].push_back(A[i].nama);
			ans[idx].push_back(A[i+1].nama);
			idx++;
		}
		else idx++;
		i = j;
	}
	for (i = 0 ; i < idx; i++) {
		if (ans[i].size()==0) cout << "?\n";
		else cout << ans[i][0] << " " << ans[i][1] << '\n';
	}
	return 0;
}