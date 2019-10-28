#include <bits/stdc++.h>
using namespace std;
struct paket{
	int nilai,urutan;
};

int n,i,j,idx;
paket A[100005];
paket ans[100005];

bool comp(paket a,paket b){
	if (a.nilai==b.nilai) return a.urutan<b.urutan;
	return a.nilai<b.nilai;
}

bool komp(paket a,paket b){
	return a.urutan<b.urutan;
}
int main(){
	scanf("%d",&n);
	for (i=0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		A[i].urutan = i+1;
		A[i].nilai = temp;
	}
	sort(A,A+n,comp);
	i = 0;
	idx = 0;
	while (i<n) {
		ans[idx].nilai = A[i].nilai;
		ans[idx].urutan = A[i].urutan;
		idx++;
		j = i+1;
		while (A[j].nilai==A[i].nilai && j<n) j++;
		i = j;
	}
	sort(ans,ans+idx,komp);
	for (i=0;i<idx;i++)
		printf("%d\n",ans[i].nilai);
	return 0;
}
