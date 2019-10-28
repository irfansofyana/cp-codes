#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int n,i,j,t;
int ans;
stack<int> t1,t2,t3;
vector<pair<char,char> > ganti;
vector<int> a,b,c;

void solve(int cnt ,char asal,char tujuan,char temp){
	if (cnt==1) {
		ganti.push_back(make_pair(asal,tujuan));
	}
	else {
		solve(cnt-1,asal,temp,tujuan);
		solve(1,asal,tujuan,temp);
		solve(cnt-1,temp,tujuan,asal);
	}
}

int main(){
	OPTIMASI
	cin >> n >> t;
	for (i = n ; i>=1 ; i--) 
		t1.push(i);
	solve(n,'A','C','B');
	//cout << ganti.size() << endl;
	if (t!=0){
		for (i = 0 ; i < ganti.size(); i++) {
		if (ganti[i].first=='A' && ganti[i].second=='B') {
			t2.push(t1.top()); t1.pop();
		}
		else if (ganti[i].first=='B' && ganti[i].second=='A') {
			t1.push(t2.top()); t2.pop();
		}
		else if (ganti[i].first=='A' && ganti[i].second=='C') {
			t3.push(t1.top()); t1.pop();
		}
		else if (ganti[i].first=='C' && ganti[i].second=='A') {
			t1.push(t3.top()); t3.pop();
		}
		else if (ganti[i].first=='B' && ganti[i].second=='C') {
			t3.push(t2.top()); t2.pop();
		}
		else if (ganti[i].first=='C' && ganti[i].second=='B') {
			t2.push(t3.top()); t3.pop();
		}
		if (i+1==t) {
			if (t1.empty()) a.push_back(-1);
			else {
				while (!t1.empty()) {
					a.push_back(t1.top());
					t1.pop();
				}
			}
			if (t2.empty()) b.push_back(-1);
			else {
				while (!t2.empty()) {
					b.push_back(t2.top());
					t2.pop();
				}
			}
			if (t3.empty()) c.push_back(-1);
			else {
				while (!t3.empty()) {
					c.push_back(t3.top());
					t3.pop();
				}
			}
			break;
		}
	}
	if (a[0]==-1) cout << "-" << endl;
	else {
		for (i = a.size()-1; i>=0 ; i--){
			cout << a[i] ;
			if (i!=0) cout << " ";
			else cout << endl;
		}
	}
	
	if (b[0]==-1) cout << "-" << endl;
	else {
		for (i = b.size()-1; i>=0 ; i--){
			cout << b[i] ;
			if (i!=0) cout << " ";
			else cout << endl;
		}
	}
	
	if (c[0]==-1) cout << "-" << endl;
	else {
		for (i = c.size()-1; i>=0 ; i--){
			cout << c[i] ;
			if (i!=0) cout << " ";
			else cout << endl;
		}
	}
	}
	else {
		for (i = n ; i>=1 ; i--) {
			cout << i;
			if (i!=1) cout << " ";
			else cout << endl;
		}
		cout << "-" << endl;
		cout << "-" << endl;
	}
	return 0;
}