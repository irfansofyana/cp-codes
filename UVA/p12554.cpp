#include <bits/stdc++.h>
using namespace std;
string nama[1000];
int n,i,j,idx,k;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=1;i<=n;i++) cin>>nama[i];
	j=1; idx=1; k=12;
	for (i=1;i<=16*((n/16)+1);i++){
		if (idx==1) cout<<nama[j]<<": Happy"<<endl;
		else if (idx==2) cout<<nama[j]<<": birthday"<<endl;
		else if (idx==3) cout<<nama[j]<<": to"<<endl;
		else if (idx==4 && i==k) {
			cout<<nama[j]<<": Rujia"<<endl;
			k+=16;
		}
		else if (idx==4) cout<<nama[j]<<": you"<<endl;
		idx++; if (idx==5) idx=1;
		j++; if (j>n) j=1;
	}
	return 0;
}
