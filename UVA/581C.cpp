#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

struct paket{
	int asli,butuh;
};

int n,k,i,j;
paket A[100005];
int temp,x;

int main(){
	OPTIMASI
	cin >> n >> k;
	for (i = 0 ; i < n ; i++) {
		cin >> x
		if (x%10==0) temp = x/10;
		else temp = (x/10)+1;
		A[i].palsu = 90+10*temp-x;
		A[i].asli  = x;
	}
	return 0;
}