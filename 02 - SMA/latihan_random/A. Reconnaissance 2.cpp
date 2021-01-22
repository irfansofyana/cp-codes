#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,jawaban;
	int min;
	int A[1010];
	
	cin>>n;
	for (i=0;i<n;i++) cin>>A[i];
	for (i=0;i<=n-2;i++){
		if (i==0){
			min=abs(A[i]-A[i+1]);
			jawaban=i;
		}
		else{
			if (abs(A[i]-A[i+1])<min){
				min=abs(A[i]-A[i+1]);
				jawaban=i;
			}
		}
	}
	if (abs(A[0]-A[n-1])<min) jawaban=-1;
	if (jawaban!=-1){
		cout<<jawaban+1<<" "<<jawaban+2<<endl;
	}
	else{
		cout<<n<<" "<<1<<endl;
	}
	return 0;
}
