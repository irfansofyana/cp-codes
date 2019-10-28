#include <bits/stdc++.h>
using namespace std;
struct pemain{
	int np,menit;
};
bool pembanding(pemain a,pemain b){
	if (a.menit<b.menit) return true;
	else return false;
}
pemain A[10];
int n,i;
int main(){
	int x,y;
	cin>>n;
	for (i=0;i<n;i++){
		cin>>x>>y;
		A[i].menit=x;
		A[i].np=y;
	}
	sort(A,A+n,pembanding);
	for (i=0;i<n;i++)
		cout<<A[i].menit<<endl;
}
