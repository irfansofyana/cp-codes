#include <bits/stdc++.h>
using namespace std;
int t,i,j,idx,n,banyak,idx2;
string s,nama[1000];
int main(){
	cin>>n;
	if (n%2==1) t=(n/2)+1;
	else t=(n/2);
	idx=1;
	for (i=1;i<=t;i++){
		cin>>s;
		nama[idx]=s;
		idx+=2;
	}
	idx-=2;
	if (n%2==0) idx2=idx+1;
	else idx2=idx-1;
	for  (i=t+1;i<=n;i++){
		cin>>s;
		nama[idx2]=s;
		idx2-=2;
	}
	for (i=1;i<=n;i++) cout<<nama[i]<<endl;
	return 0;
}
