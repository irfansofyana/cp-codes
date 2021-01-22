#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nilai,pos;
};
int A[100010];
int bil[100010];
paket ans[100010];
int n,m,i,j,mini;
bool comp(paket a,paket b){
	if (a.nilai>b.nilai) return true;
	else return false;
}
int main(){
	scanf("%d %d",&n,&m);
	for (i=0;i<n;i++){
		scanf("%d",&bil[i]);
		A[bil[i]]++;
	}
	for (i=0;i<n;i++){
		ans[bil[i]].nilai+=(n-i-1)-(A[bil[i]]-1);
		ans[bil[i]].pos=bil[i];
		A[bil[i]]--;
	}
//	for (i=1;i<=m;i++) printf("%d %d\n",ans[i].nilai,ans[i].pos);
	sort(ans+1,ans+m,comp);
//	for (i=1;i<=m;i++) printf("%d %d\n",ans[i].nilai,ans[i].pos);
	i=1; mini=ans[i].pos;
	while (ans[i].nilai==ans[i+1].nilai && i+1<=m){
		if (ans[i+1].pos<mini) mini=ans[i+1].pos;
	}
	printf("%d\n",mini); 
	return 0;
}
