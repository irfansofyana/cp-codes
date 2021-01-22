#include <bits/stdc++.h>
using namespace std;
long long A[100010],B[100010],C[100010];
long long n,i,j,ganti,idx1,idx2;
bool pertama=true,jawaban=true,d;
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>A[i]; B[i]=A[i];
	}
	sort(B,B+n); pertama=true; j=0; i=0; d=false;
	while (i<n) {
		if (A[i]!=B[i] && pertama){
			C[j]=A[i]; j++;
			idx1=i+1; pertama=false; i++;
		}
		else if (A[i]!=B[i]) {
			C[j]=A[i]; j++; i++;
		}
		else if (A[i]==B[i] && !pertama) {
			if (A[i+1]==B[i+1]) {
				idx2=i; break;	
			}
			else {
				C[j]=A[i];
				j++;
			}
			i++;
		}
		else i++; 
	}  //cout<<idx1<<" "<<idx2<<endl; 
	//for (i=0;i<j;i++) cout<<C[i]<<endl;
	if (idx1==idx2 && idx2==0){
		idx1=1; idx2=1;  d=true; 
	}
	else if (idx2==0) idx2=n;
	j=0; jawaban=true;
	for (i=idx2-1;i>=idx1-1 && !d;i--) {
		if (B[i]!=C[j]) {
			jawaban=false;
		//	break;
		}
		else j++;
	}
	if (!jawaban) cout<<"no"<<endl;
	else {
		cout<<"yes"<<endl;
		if (!(idx1==0 && idx2==0)) cout<<idx1<<" "<<idx2<<endl;
		else cout<<1<<" "<<1<<endl; 
	}
}
