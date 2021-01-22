#include <bits/stdc++.h>
using namespace std;

stack<int> st;
int n,x;

int main(){
	while (cin >> x){
		st.push(x);
	}
	while (!st.empty()){
		cout << st.top() << '\n';
		st.pop();
	}
	return 0;
}