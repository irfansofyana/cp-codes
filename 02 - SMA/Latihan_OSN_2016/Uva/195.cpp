#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
int A[55];
vector<int> v;
vector<string> ans;
string s;

bool comp(string a,string b){
	for (int z = 0 ; z < a.size(); z++){
		char t1,t2;
		if (a[z] >= 'a' && a[z] <= 'z') t1 = char((int)a[z]-32);
		else t1 = a[z];
		if (b[z] >= 'a' && b[z] <= 'z') t2 = char((int)b[z]-32);
		else t2 = b[z];
		if (t1 != t2) {
			return t1 < t2;
		}
		else {
			if (a[z] >= 'A' && a[z] <= 'Z' ) {
				if (b[z] >= 'a' && b[z] <= 'z') return true;
			} 
			else if (a[z] >= 'a' && a[z] <='z') {
				if (b[z] >= 'A' && b[z] <='Z') return false;
			}
		}
	}
	return a < b;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n;
	while (n--) {
		cin >> s;
		memset(A,0,sizeof A);
		for (i = 0 ; i < s.size(); i++){
			if (s[i] >= 'a' && s[i] <= 'z') A[s[i]-'a']++;
			else A[s[i]-'A'+26]++;
		}
		v.clear();
		for (i = 0 ; i < 52; i++) {
			if (A[i] > 0) {
				for (j = 0 ; j < A[i] ; j++) v.push_back(i);
			}
		}
		ans.clear();
		do {
			string temp = "";
			for (i = 0 ; i < v.size(); i++){
				if (v[i] >= 0 && v[i] <= 25) temp = temp + char(v[i]+'a');
				else temp = temp + char(v[i]-26+'A');
			}
			ans.push_back(temp);
		}while (next_permutation(v.begin(),v.end()));
		sort(ans.begin(),ans.end(),comp);
		for (i = 0 ; i < ans.size(); i++) cout << ans[i] << '\n';
	}
	return 0;
}