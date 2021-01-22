#include <bits/stdc++.h>
using namespace std;

long long ans,i;

int fpb(int a,int b){
	if (b==0) return a;
	else return fpb(b,a%b);
}

int kpk(int a,int b){
	return (a*b/fpb(a,b));
}

int main(){
	ans = 1;
	for (i=2;i<=20;i++) 
		ans = kpk(ans,i);
	cout << ans << endl; 
}
