#include <bits/stdc++.h>
using namespace std;
int t;
int A[3];

int main(){
	cin.tie(0);
	cin>>t; int i=1;
	while (t--){
		memset(A,0,sizeof(A));
		cin>>A[0]>>A[1]>>A[2];
		sort(A,A+3);
		cout<<"Case "<<i<<": "<<A[1]<<endl;
		i++;
	}
	return 0;
}
