#include <bits/stdc++.h>
using namespace std;

int n,i,j,s,x,y,sz;
int beli[100005],jual[100005];
vector<pair<int,int> > ans1,ans2;
char perintah;

bool comp(pair<int,int> a, pair<int,int> b) {
	return a.first<b.first;
}

bool comp1(pair<int,int> a,pair<int,int> b) {
	return a.first > b.first;
}

int main(){
	cin.tie(0);
	cin >> n >> s;
	for (i = 0 ; i < n ; i++) {
		cin >> perintah >> x >> y;
		if (perintah=='S') jual[x] += y;
		else beli[x] += y;
	}
	for (i = 0 ; i<=100000 ; i++) {
		if (jual[i]!=0) ans1.push_back(make_pair(i,jual[i]));
		if (beli[i]!=0) ans2.push_back(make_pair(i,beli[i]));
	} 
	sort(ans1.begin(),ans1.end(),comp);
	sort(ans2.begin(),ans2.end(),comp1);
	sz = ans1.size();
	for (i = min(s,sz)-1; i>=0 ;i--) {
		cout << "S " << ans1[i].first << " " << ans1[i].second << endl;
	}
	sz = ans2.size();
	for (i = 0 ; i < min(s,sz) ; i++) {
		cout << "B " << ans2[i].first << " " << ans2[i].second << endl;
	}
	return 0;
}
