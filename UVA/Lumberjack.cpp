#include <bits/stdc++.h>
using namespace std;
int n;
int A[100];
int B[100],C[100];
int jawab[100]; bool cek=true;
bool comp(int a,int b){
	if (a>b) return true;
	else return false;
}
int main(){
	cin.tie(0); ios_base::sync_with_stdio(0);
	cin>>n; int idx=1;
	while (n--){ 
		for (int z=0;z<10;z++) {
			cin>>A[z];
			B[z]=A[z];
			C[z]=A[z];
		}
		sort(B,B+10);  cek=true;
		for (int z=0;z<10;z++){
			if (B[z]!=A[z]) cek=false;
		}
		if (cek) jawab[idx]=1;
		else {
			sort(C,C+10,comp); cek=true;
			/*for (int z=0;z<10;z++) cout<<C[z]<<" ";
			cout<<"\n";*/
			for (int z=0;z<10;z++){
				if (C[z]!=A[z]) cek=false;
			}
			if (!cek) jawab[idx]=0;
			else jawab[idx]=1; 
		}
		idx++;
	}
	cout<<"Lumberjacks:"<<endl;
	for (int i=1;i<=idx-1;i++) {
		cout<<(jawab[i]==1?"Ordered":"Unordered")<<endl;
	}
	return 0;
}
