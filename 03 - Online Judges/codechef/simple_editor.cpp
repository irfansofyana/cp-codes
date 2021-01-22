#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int m,i,N,l;
	string s,x,substr;
	char k;
	cin>>m;
	s="";
	for (i=1;i<=m;i++){
		cin>>k>>N;
		if (k=='+'){
			cin>>x;
			s.insert(N,x);
		}
		else{
			cin>>l;
			substr=s.substr((N-1),l);
			cout<<substr<<'\n';
		}
	}
	return 0;
}
