#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int ans,empat,tujuh;
string a,b;
vector<pair<int,int> > temp;

int main(){
	cin.tie(0);
	cin >> a >> b;
	for (i = 0 ; i < a.size() ; i++) {
		if (a[i]!=b[i]) {
			temp.push_back(make_pair(a[i]-'0',b[i]-'0'));
		}
	}
	for (i = 0 ; i < temp.size() ; i++) {
		if (temp[i].first==4) empat++;
		else tujuh++;
	}
	cout << min(empat,tujuh) + temp.size()-2*min(empat,tujuh) << endl;
	return 0;
}