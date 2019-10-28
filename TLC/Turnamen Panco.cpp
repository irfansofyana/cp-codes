#include <bits/stdc++.h>
using namespace std;
struct paket{
	int pos,nilai;
};
int n,t,i,temp;
paket A[5000];
int pangkat(int q){
	int awal=1;
	for (int i=1;i<=q;i++) awal=awal*2;
	return awal;
} 
bool comp(paket a,paket b){
	if (a.nilai<b.nilai) return true;
	else return false;
}
int main(){
	cin.tie(0);
	cin>>t;
	for (i=1;i<=t;i++){
		cin>>n;
		for (int j=0;j<pangkat(n);j++){
			cin>>temp;
			A[j].pos=j+1;
			A[j].nilai=temp;
		}
		sort(A,A+pangkat(n),comp);
		cout<<A[pangkat(n)-1].pos<<endl;
	}
	return 0;
}
