#include <bits/stdc++.h>
using namespace std;

int v1,v2,t,d;
int i,ans;
int A[1000];

int main(){
	cin >> v1 >> v2;
	cin >> t >> d;
	A[0]=v1;
	A[t-1]=v2;
	for (i=1;i<t-1;i++) A[i]=A[i-1]+d;
	for (i=t-2;i>=0;i--) {
		if (abs(A[i]-A[i+1])>d) {
			A[i]=A[i+1]+d;
		}
	}	
	for (i=0;i<t;i++) ans+=A[i];
	cout<<ans<<endl;	
}
