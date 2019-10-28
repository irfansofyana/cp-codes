#include <bits/stdc++.h>
using namespace std;

int n,i,idx;
int A[1000];
int jawaban[1000];
int main(){
	cin.tie(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n); idx=0; i=0;
	while (i<n){
		if (A[i]!=A[i+1]) {
			jawaban[idx]=A[i];
			i++; idx++;
		}
		else if (A[i]==A[i+1]) {
			i++;
		} 
	}
	/*for (i=0;i<idx;i++) cout<<jawaban[i]<<" ";
	cout<<endl; */
	sort(jawaban,jawaban+idx);
	if (jawaban[1]!=0) cout<<jawaban[1]<<endl;
	else cout<<"NO"<<endl;
}
