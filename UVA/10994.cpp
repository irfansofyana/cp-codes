#include <bits/stdc++.h>
#define OPTIMASI cin.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll ;

ll a,b;
ll sum1,sum2,sum3;
ll bawah,atas;

int main(){
	OPTIMASI
	while (cin >> a >> b){
		if (a<0 && b<0) break;
		sum2 = (b*(b+1))/2; sum1 = ((a-1)*a)/2;
		sum2 -= sum1;
		if (a%10==0) bawah = a/10;
		else bawah = (a/10)+1;
		atas = (b/10);
		sum3 = 10*((atas*(atas+1)/2)-((bawah-1)*(bawah)/2));
	}
	return 0;
}