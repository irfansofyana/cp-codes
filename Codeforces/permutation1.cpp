#include <bits/stdc++.h>
using namespace std;
int n;
long long A[300010];
long long jawaban;

int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (int i=0;i<n;i++) cin>>A[i];
	sort(A,A+n);
	for (int i=0;i<n;i++){
		jawaban+=abs(A[i]-(i+1));
	}
 	cout<<jawaban<<endl;
}
