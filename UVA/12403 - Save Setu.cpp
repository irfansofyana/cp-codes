#include <bits/stdc++.h>
using namespace std;
int n,tab;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	while (n--){
		string s;
		cin>>s;
		if (s=="donate") {
			int n;
			cin>>n;
			tab+=n;
		}
		else if (s=="report") cout<<tab<<endl;
	}
	return 0;
}
