#include <bits/stdc++.h>
using namespace std;

struct paket{
	int selesai,mulai;
};

int n,i,j,tc;
int x,y,z,ans;
paket A[100010];

bool comp(paket a,paket b) {
	if (a.selesai==b.selesai) return a.mulai>b.mulai;
	else return a.selesai<b.selesai;
}
int main(){
	scanf("%d",&tc);
	while (tc--) {
		scanf("%d",&n);
		ans = 0;
		for (i=0;i<n;i++) {
			scanf("%d %d %d",&x,&y,&z);
			A[i].mulai = x+y;
			A[i].selesai = x+y+z;
		}
		sort(A,A+n,comp);
		//for (i=0;i<n;i++) printf("%d %d\n",A[i].mulai,A[i].selesai);
		ans++;
		i = 1;
		while (i<n) {
			if (A[i].mulai>=A[i-1].selesai) {
				ans ++ ;
				i++;
			}
			else i++;
		}
		printf("%d\n",ans);
	}
}
