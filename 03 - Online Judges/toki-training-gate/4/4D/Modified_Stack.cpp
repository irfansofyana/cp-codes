#include <bits/stdc++.h>
using namespace std;

int n,i,j,tambahan;
stack<int> st;
queue<int> que;
int x,y,ada;
string s;

int main(){
	cin >> n;
	while (n--) {
		cin >> s;
		if (s=="add"){
			cin >> x >> y;
			while (y--) st.push(x-tambahan);
			cout<<st.size()<<endl;
		}
		else if (s=="del") {
			cin >> y;
			cout<<st.top()+tambahan<<endl;
			while (y--) st.pop();
		}
		else if (s=="adx") {
			cin >> x;
			tambahan+=x;
		}
		else if (s=="dex") {
			cin >> x;
			tambahan-=x;
		}
	}
	return 0;
}