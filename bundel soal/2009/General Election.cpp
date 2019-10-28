#include <bits/stdc++.h>
using namespace std;
int t,n,i,j,m,x;
struct paket{
	int pos,nilai;
};
bool comp(paket a,paket b){
	if (a.nilai<b.nilai) return true;
	else return false;
}
paket A[1010];
int main(){
	cin.tie(0); 
	cin>>t;
	while (t--){
		cin>>n>>m;
		memset(A,0,sizeof(A));
		for (i=0;i<n;i++) {
			A[i].pos=i+1;
		}
		for (i=0;i<m;i++){
			for (j=0;j<n;j++){
				cin>>x;
				A[j].nilai+=x;
			} 
		}
		sort(A,A+n,comp);
		/*for (i=0;i<n;i++) cout<<A[i].nilai<<" ";
		cout<<endl;
		for (i=0;i<n;i++) cout<<A[i].pos<<" ";
		cout<<endl; */
		cout<<A[n-1].pos<<endl;
	}
}

