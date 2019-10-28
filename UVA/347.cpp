#include <bits/stdc++.h>
using namespace std;

int tc,t,n,i,j;
vector<int> ans;
string s;
int pake[10];

string ubah(int k){
	stringstream ss;
	ss << k;
	return ss.str();
}

int ampas(int x,int y){
	return x-(x/y)*y;
}
bool cek(string s){
	memset(pake,0,sizeof pake);
	int sisa = (int)s.size();
	int idx = 0;
	int ukuran = (int)s.size();
	while (sisa>0) {
		sisa--; 
		pake[(int)s[idx]-'0']++;
		if (pake[(int)s[idx]-'0']>=2) return false;
		idx += (int)s[idx]-'0';
		idx  = ampas(idx,ukuran);
	}
	pake[(int)s[idx]-'0']++;
	if (pake[(int)s[0]-'0']==2) return true;
	return false;
}

void generate(){
	for (i = 10 ; i <= 9999999 ; i++) {
		s = ubah(i);
		if (cek(s)) ans.push_back(i);
	}
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	//for (i = 0 ; i < ans.size(); i++) cout << ans[i] << '\n';
	while (cin >> n, n) {
		i = n;
		while (!cek(ubah(i))) i++;
		cout << "Case " << ++tc << ": " << i << '\n';
	}
	return 0;
}