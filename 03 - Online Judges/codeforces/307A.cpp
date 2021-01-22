#include <bits/stdc++.h>
using namespace std;
struct paket{
	int poin,pos;
};
int n,i,j,idx;
paket A[2005];
int x,k;
int ans[2005];

bool comp(paket a,paket b){
	return a.poin>b.poin;
}
int main(){
	cin.tie(0);
	cin >> n;
	for (i=0;i<n;i++){
		cin >> x;
		A[i].poin = x;
		A[i].pos = i;
	}
	sort(A,A+n,comp);
	//for (i=0;i<n;i++) 
		//cout<<A[i].poin<<" "<<A[i].pos<<endl;
	i = 0;
	idx = 1;
	while (i<n-1){
		j = i+1;
		ans[A[i].pos] = idx;
		k = 1;
		while (j<n && A[j].poin==A[i].poin) {
			ans[A[j].pos] = idx;
			k++;
			j++;
		}
		idx+=k;
		i = j;
	}
	if (i==n-1)ans[A[i].pos] = idx;
	for (i=0;i<n;i++){
		if (i==n-1) cout<<ans[i]<<endl;
		else cout<<ans[i]<<" ";
	}
	return 0;
}
