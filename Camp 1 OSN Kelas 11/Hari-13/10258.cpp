#include <bits/stdc++.h>
using namespace std;
struct paket{
	int solved,penalty,subs;
	int nomor;
};

int n,m,i,j,pre;
int tc,spasi;
int a,b,c;
char res;
string s;
paket A[120];
int tambahan[120][120];
vector<pair<int,pair<int,int> > > ans;
bool pertama,udah[120][120];

bool comp(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b){
	if (a.second.first==b.second.first) {
		if (a.second.second==b.second.second) return a.first<b.first;
		return a.second.second<b.second.second;
	}
	return a.second.first>b.second.first;
}

int ubah(string s) {
	stringstream ss(s);
	int res;
	return ss >> res?res:0;
}

int main(){
	//cout << ubah("12312") << endl;
	//cin.tie(0);
	cin >> tc; pertama = true;
	getchar();
	while (tc--) {
		if (pertama) {
			getline(cin,s);
			pertama = false;
		}
		for (i = 0 ; i <= 119 ; i++){
			A[i].solved = 0; A[i].penalty = 0;
			A[i].nomor = i; A[i].subs = 0;
		}
		memset(tambahan,0,sizeof tambahan); ans.clear(); memset(udah,false,sizeof udah);
		while (getline(cin,s)) {
			if (s.size()==0) break;
			spasi = s.find(" ",0);
			a = ubah(s.substr(0,spasi)); pre = spasi+1; spasi = s.find(" ", spasi+1);
			b = ubah(s.substr(pre,spasi-pre)); pre = spasi+1; spasi = s.find(" ", spasi+1);
			c = ubah(s.substr(pre,spasi-pre)); res=s[s.size()-1];
			if (res=='C') {
				if (!udah[a][b]) {
					A[a].solved++; A[a].subs++;
					A[a].penalty += (c+tambahan[a][b]);
					udah[a][b] = true;
				}
			}
			else if (res=='I') {
				tambahan[a][b] += 20;
				A[a].subs++;
			}
			else A[a].subs++;
			//cout << tambahan[1][2] << endl;
		}
		for (i = 1 ; i <= 100 ; i++) {
			if (A[i].subs>0) {
				ans.push_back(make_pair(A[i].nomor,make_pair(A[i].solved,A[i].penalty)));
			}
		}
		sort(ans.begin(),ans.end(),comp);
		for (i = 0 ; i < ans.size() ; i++) {
			cout << ans[i].first << " " << ans[i].second.first << " " << ans[i].second.second << endl;
		}
		if (tc!=0) cout << endl;
	}
	return 0;
}