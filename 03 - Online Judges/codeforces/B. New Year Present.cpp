#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int A[500];
string jawaban;

int main(){
	cin.tie(0);
	cin>>n;
	for (i=1;i<=n;i++) cin>>A[i];
	i=1;
	jawaban="";
	while (i<=n){
		if (i==1){
			if (A[i]>=1){
				jawaban=jawaban+'P';
				A[i]--;
			}
			jawaban=jawaban+'R';
			i++;
		}
		else if (i==n){
			if (A[i]>=1){
				jawaban=jawaban+'P';
				A[i]--;
			}
			if (A[i]!=0){
				jawaban=jawaban+'L';
				i--;	
			}
			else if (A[i]==0 && A[i-1]==0) i++;
			else if (A[i]==0 && A[i-1]!=0){
				jawaban=jawaban+'L';
				i=i-1;
			}
		}
		else{
			if (A[i]>=1){
				jawaban=jawaban+'P';
				A[i]--;
			}
			if (A[i-1]>=1){
				jawaban=jawaban+'L';
				i--;
			}
			else if (A[i-1]<1){
				jawaban=jawaban+'R';
				i++;
			}
		}
	}
	cout<<jawaban<<endl;
	return 0;
}
