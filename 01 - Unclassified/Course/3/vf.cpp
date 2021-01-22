#include <bits/stdc++.h>
using namespace std;

const int MAXN = (int)1e5;

int parent[MAXN + 5];
int rankk[MAXN + 5];
int cnt[MAXN + 5];
int n,i,j,t,curr;
string s1,s2;
map<string,int> mep;

void initial(){
	memset(rankk,0,sizeof rankk);
	for (i = 1 ; i <= MAXN ; i++) {
		parent[i] = i;
		cnt[i] = 1;
	}
}

int cari(int x){
	if (x == parent[x]) return x;
	return cari(parent[x]);
}

void gabung(int a,int b){
	int x,y;
	x = cari(a); y = cari(b); 
	if (x!=y){
		if (rankk[x] > rankk[y]) {
			parent[y] = x;
			cnt[x]+=cnt[y];
		}
		else {
			parent[x] = y;
			cnt[y] += cnt[x];
			if (rankk[x] == rankk[y]) rankk[y]++;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n;
		initial();
		mep.clear();
		curr = 1;
		while (n--) {
			cin >> s1 >> s2;
			if (mep[s1] == 0) mep[s1] = curr++;
			if (mep[s2] == 0) mep[s2] = curr++;
			int t1,t2;
			t1 = mep[s1];
			t2 = mep[s2];
			gabung(t1,t2);
			cout << cnt[cari(t1)] << '\n';
		}
	}
	return 0;
}