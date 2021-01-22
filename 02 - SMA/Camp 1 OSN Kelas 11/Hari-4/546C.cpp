#include <bits/stdc++.h>
using namespace std;

int n,i,a,b,x,ans,y;
string temp1,temp2;
queue<int> A,B;
map<pair<string,string>,int> mep;
vector<int> smt;

int main(){
	cin.tie(0);
	cin >> n;
	cin >> a;
	temp1 = temp2 = "";
	for (i = 0 ; i < a ; i++) {
		cin >> x;
		A.push(x);
		temp1 = temp1+char(x+'0');
	}
	cin >> b;
	for (i = 0 ; i < b; i++) {
		cin >> x;
		B.push(x);
		temp2 = temp2+char(x+'0');
	}
	while (A.size()>0 && B.size()>0 && mep[make_pair(temp1,temp2)]==0) {
		//cout << temp1 << " " << temp2 << endl; 
		ans++; x = A.front(); y = B.front(); mep[make_pair(temp1,temp2)]=1;
		if (x>y) {
			B.pop(); A.pop();
			A.push(y); A.push(x);
		}
		else if (y>x) {
			A.pop(); B.pop();
			B.push(x); B.push(y);
		}
		temp1 = ""; temp2 = ""; smt.clear();
		while (A.size()>0) {
			smt.push_back(A.front());
			A.pop();
		}
		for (i = 0 ; i < smt.size() ; i++) 
			temp1 = temp1+char(smt[i]+'0');
		for (i = 0 ; i < smt.size(); i++) {
			A.push(smt[i]);
		}
		smt.clear();
		while (B.size()>0) {
			smt.push_back(B.front());
			B.pop();
		}
		for (i = 0 ; i < smt.size(); i++)
			temp2 = temp2+char(smt[i]+'0');
		for (i = 0 ; i < smt.size(); i++)
			B.push(smt[i]);
	}
	//cout << temp1 << " " << temp2 << endl;
	if (A.size()>0 && B.size()>0) cout << -1 << endl;
	else {
		cout << ans << " ";
		if (A.size()==0) cout << 2 << endl;
		else cout << 1 << endl;
	}
	return 0;
}