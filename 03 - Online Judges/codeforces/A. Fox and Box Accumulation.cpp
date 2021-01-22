#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j;
	int jawaban,min,banyak=0;
	int A[1000];
	
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
		if (A[i]==0)
			banyak++;
	}
	sort(A,A+n);
	i=n-1;
	banyak=1;
	while (i>=0){
		if (A[i]<1){
			banyak++;
			i=i-1;
		}
		else{
			if ()	
		}
	}
}
