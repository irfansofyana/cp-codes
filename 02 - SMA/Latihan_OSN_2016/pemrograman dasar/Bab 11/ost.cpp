#include <bits/stdc++.h>
using namespace std;

string a,b,c,d;

int main(){
	cin >> a >> b >> c >> d;
	int pos = a.find(b);
	a.erase(pos,(int)b.size());
	//cout << a << '\n';
	int pos_ = a.find(c);
	pos_ += (int)c.size();
	a.insert(pos_,d);
	cout << a << '\n';
	return 0;
}