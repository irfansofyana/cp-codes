#include <bits/stdc++.h>
using namespace std;
long long A[100005],n,i,j,jwb;
bool tanda=true,ans=false;
bool comp(long long a,long long b){
	if (a>b) return true;
	else return false;
}
int main(){
	scanf("%I64d",&n);
	for (i=0;i<n;i++) scanf("%I64d",&A[i]);
	sort(A,A+n,comp);
	i=0;
	while (i<n){
		tanda=false;
		if (A[i]==A[i+1] && A[i+2]==A[i+3]){
			tanda=true;
			ans=true;
			jwb+=A[i]*A[i+2];
		}
		else if (A[i]-A[i+1]==1 && A[i+2]-A[i+3]==1){
				tanda=true;
				ans=true;
				jwb+=A[i+1]*A[i+3];
		}
		else if (A[i]==A[i+1] && A[i+2]-A[i+3]==1){
				tanda=true;
				ans=true;
				jwb+=A[i]*A[i+3];
		}
		else if (A[i]-A[i+1]==1 && A[i+2]==A[i+3]){
				tanda=true;
				ans=true;
				jwb+=A[i+1]*A[i+2];
		}
	 	if (tanda) i+=4;
	 	else i++;
	}
	if (!ans) cout<<0<<endl;
	else cout<<jwb<<endl;
}
