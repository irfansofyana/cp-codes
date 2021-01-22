#include <bits/stdc++.h>
using namespace std;
int n,i,c;
char ans[100010];
bool sebelum;
int main(){
	cin.tie(0);
	cin>>n;
	c=97;
	for (i=0;i<=100010;i++) ans[i]='0';
	sebelum=false;
	for (int z=1;z<=n;z++){
		if (z+4>n && ans[z]=='0' && sebelum) {
			c++;
			ans[z]=char(c);
		}
		else if (z+4>n && ans[z]=='0') {
			ans[z]=char(c);
			c++;
		}
		else if (z+4<=n && ans[z]=='0') {
			ans[z]=char(c); ans[z+4]=char(c);
			sebelum=true;
		} 
	}
	for (i=1;i<=n;i++) cout<<ans[i];
	cout<<"\n";
	return 0;
}
