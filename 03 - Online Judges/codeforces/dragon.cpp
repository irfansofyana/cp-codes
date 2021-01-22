#include <bits/stdc++.h>
using namespace std;

struct naga{
	int kekuatan,bonus;
};

int n,s,i,j;
naga A[10010];
int temp1,temp2;
int mulai;
bool tes=true;

bool comp(naga a,naga b){
	if (a.kekuatan<b.kekuatan) return true;
	else return false;
}

int main(){
	cin>>s>>n;
	for (i=0;i<n;i++){
		cin>>temp1>>temp2;
		A[i].kekuatan=temp1;
		A[i].bonus=temp2;
	}
	sort(A,A+n,comp);
	mulai=-1;
	for (i=0;i<n-1;i++){
		if (A[i].kekuatan<s && A[i+1].kekuatan>=s){
			mulai=i;
		}
	}
	if (mulai!=-1){
		for (i=0;i<=mulai;i++){
			s+=A[i].bonus;
		}
	}
	for (i=mulai+1;i<n;i++){
		if (A[i].kekuatan>=s){
			tes=false;
			break;
		}
		else s+=A[i].bonus;
	}
	if (tes) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
