#include <bits/stdc++.h>
using namespace std;
int A[3];
int main(){
	for (int i=0;i<3;i++) cin>>A[i];
	sort(A,A+3);
	for (int i=2;i>=0;i--) cout<<A[i]<<endl;
	cout<<endl;
	for (int i=0;i<3;i++) cout<<A[i]<<endl;
	return 0;
}
