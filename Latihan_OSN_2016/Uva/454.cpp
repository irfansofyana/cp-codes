#include <bits/stdc++.h>
using namespace std;

int tc,n,i,j;
string s,temp;
vector<pair<string,string> > A;
vector<pair<string,string> > _final;

bool comp(pair<string,string> a,pair<string,string> b){
	if (a.first == b.first) return a.second < b.second;
	return a.first < b.first;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> tc;
	getline(cin,s); getline(cin,s);
	for (int kl = 0 ; kl < tc; kl++) {
		A.clear();
		while (getline(cin,s)){
			if (s=="") break;
			else {temp = "";
			for (i = 0 ; i < s.size(); i++){
				if (s[i]!=' ') temp = temp+s[i];
			}
			sort(temp.begin(),temp.end());
			A.push_back(make_pair(temp,s));}
		}
		_final.clear();
		sort(A.begin(),A.end(),comp);
		i = 0;
		while (i < A.size()){
			temp = A[i].first;
			j = i+1; vector<string> ans;
			ans.clear();
			ans.push_back(A[i].second);
			while (j < A.size() && A[j].first==A[i].first) {
				ans.push_back(A[j].second);
				j++;
			}
			for (int z = 0; z < (int)ans.size()-1; z++){
				for (int zz = z+1 ; zz < (int)ans.size(); zz++){
					_final.push_back(make_pair(ans[z],ans[zz]));
				}
			}
			i = j;
		}
		sort(_final.begin(),_final.end(),comp);
		for (i = 0 ; i < _final.size(); i++){
			cout << _final[i].first << " = " << _final[i].second << '\n';
		}
		if (kl != tc-1) cout << '\n';
	}
	return 0;
}