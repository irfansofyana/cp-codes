#include <bits/stdc++.h>
using namespace std;

string s,temp;
int koma,n,i,j,awal;
int prev,bil;
int A[1005];
vector<pair<int,int> > ans;
int ubah(string s){
	int result;
	stringstream ss(s);
	return ss >> result ? result:0;
}

int main(){
	cin.tie(0);
	cin >> s;
	koma = s.find(',',0);
	while (koma>=0 && koma<s.size()) {
		temp = s.substr(prev,koma-prev);
		bil = ubah(temp);
		A[bil]++;
		prev = koma+1;
		koma = s.find(',',koma+1);	
	}
	temp = s.substr(prev,s.size()-prev);
	bil = ubah(temp);
	A[bil]++;
	i = 1;
	while (i<=1000) {
		awal = i;
		while (awal<=1000 && A[awal]==0) awal++;
		if (awal>1000) break;
		j = awal+1;
		while (j<=1000 && A[j]!=0) j++;
		ans.push_back(make_pair(awal,j-1));
		i = j;
	}
	//for (i=0;i<ans.size();i++)
	//	cout << ans[i].first << " " << ans[i].second << endl;
	for (i=0;i<ans.size();i++) {
		if (i==ans.size()-1) {
			if (ans[i].first==ans[i].second) cout<<ans[i].first;
			else cout<<ans[i].first<<'-'<<ans[i].second;
			cout<<endl;
		}
		else {
			if (ans[i].first==ans[i].second) cout<<ans[i].first;
			else cout<<ans[i].first<<'-'<<ans[i].second;
			cout<<',';
		}
	}
	return 0;
}
