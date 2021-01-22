#include <bits/stdc++.h>
using namespace std;

string s;
int n,i,j,k;
char ch;
int q;
vector<string> A[25];

int ans(string s){
	char c = s[0];
	int idx = c-'a';
	int ret = 0;
	if ((int)s.size()==n) return 1;
	for (int z = 0; z < A[idx].size();z++){
		string temp = s.substr(1,(int)s.size()-1);
		temp = A[idx][z] + temp;
		ret += ans(temp);
	}
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> q;
	for (i = 0 ; i < q ; i++) {
		cin >> s >> ch;
		A[(int)ch-'a'].push_back(s);
	}
	cout << ans("a") << '\n';
	return 0;
}