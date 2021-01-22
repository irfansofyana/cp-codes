#include <bits/stdc++.h>
using namespace std;
int n,i,t,j;
int m;
int main(){
	cin.tie(0);
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n>>m;
		j=1;
		while (2*j-1<=n){
			if (j%m==0){
				if (2*(j+1)-1>n) cout<<"NPC"<<endl;
				else cout<<"NPC ";
			}
			else{
				if (2*(j+1)-1>n) cout<<2*j-1<<endl;
				else cout<<2*j-1<<" ";
			}
			j++;
		}
	}
	return 0;
}
