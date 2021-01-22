#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int warna[100005];
int n,m,i,j,sekarang,ans,awal;
bool visited[100005];
vector<vector<int> > A;
queue<int> now;

int main(){
	OPTIMASI
	cin >> n;
	for (i = 0 ; i < n ; i++) cin >> warna[i];
	A.assign(100005,vector<int>());
	for (i = 0 ; i < n-1 ; i++) {
		int x,y;
		cin >> x >> y;
		A[x].push_back(y); A[y].push_back(x);
	}
	cin >> m; awal = m;
	now.push(m);
	sekarang = 0;
	memset(visited,false,sizeof visited);
	while (!now.empty()) {
		m = now.front();
		now.pop();
		visited[m] = true;
		if (warna[m]!=sekarang) {
			ans++;
			sekarang = warna[m];
		}
		for (i = 0 ; i < A[m].size(); i++) {
			if (!visited[A[m][i]]){
				now.push(A[m][i]);
			}
		}
	}
	int ans1 = 0;
	now.push(awal); sekarang = 1;
	memset(visited,false,sizeof visited);
	while (!now.empty()) {
		m = now.front();
		now.pop();
		visited[m] = true;
		if (warna[m]!=sekarang) {
			ans1++;
			sekarang = warna[m];
		}
		for (i = 0 ; i < A[m].size(); i++) {
			if (!visited[A[m][i]]){
				now.push(A[m][i]);
			}
		}
	}
	cout << min(ans,ans1) << '\n';
	return 0;
}