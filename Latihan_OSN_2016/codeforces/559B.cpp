#include <bits/stdc++.h>
using namespace std;

int n,m,i,j;
string a,b;

bool is_same(string a,string b){
	if (a==b) return true;
	else if ((int)a.size()==1){
		if (a==b) return true;
		return false;
	}
	else {
		string a1,a2,b1,b2;
		int t1 = ((int)a.size()-1)/2;
		a1 = a.substr(0,t1+1);
		a2 = a.substr((int)a.size()/2,(int)a.size()-((int)a.size()/2));
		int t2 = ((int)b.size()-1)/2;
		b1 = b.substr(0,t2+1);
		b2 = b.substr((int)b.size()/2,(int)b.size()-((int)b.size()/2));
		if ((is_same(a1,b1) && is_same(a2,b2))||(is_same(a1,b2) && is_same(a2,b1))) return true;
		return false;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> a >> b;
	cout << ((is_same(a,b)) ? "YES" : "NO" ) << '\n';
	return 0;
}