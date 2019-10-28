#include <bits/stdc++.h>
using namespace std;

long long n;
long long A[33];
bool cek(long long k){
	if (k<=2) return false;
	for (int z=2;z<=static_cast<long long>(sqrt(k));z++){
		if (k%z==0) return false;
	}
	return true;
}
void pangkat(){
	A[0]=1;
	for (int i=1;i<=32;i++) A[i]=2*A[i-1];
}
int main(){
	pangkat();
	n=A[32]+1;
	if (cek(n)) cout<<"YES"<<endl;
	return 0;
}
