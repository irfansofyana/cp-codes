	#include <bits/stdc++.h>
	using namespace std;
	struct paket{
		int nilai,pos;
	};
	int n,k,i,j,minimal,ans;
	int langkah1[10010],langkah2[10010];
	paket A[110];
	bool comp(paket a,paket b){
		if (a.nilai<b.nilai) return true;
		else return false;
	}
	int main(){
		cin.tie(0); ios_base::sync_with_stdio(0);
		cin>>n>>k;
		for (i=0;i<n;i++){
			cin>>A[i].nilai;
			A[i].pos=i+1;
		}
		sort(A,A+n,comp);
		minimal=A[n-1].nilai-A[0].nilai;
		for (i=1;i<=k;i++){
			int temp1,temp2;
			A[n-1].nilai-=1; A[0].nilai+=1;
			temp1=A[0].pos;
			temp2=A[n-1].pos;
			sort(A,A+n,comp);
			if (A[n-1].nilai-A[0].nilai<minimal && A[n-1].nilai-A[0].nilai>=0) {
					minimal=A[n-1].nilai-A[0].nilai;
					ans=i;
			}
			langkah1[i]=temp2; langkah2[i]=temp1;
		}
		cout<<minimal<<" "<<ans<<endl;
		for (i=1;i<=ans;i++){
			cout<<langkah1[i]<<" "<<langkah2[i]<<endl;
		}
		return 0;
	}
