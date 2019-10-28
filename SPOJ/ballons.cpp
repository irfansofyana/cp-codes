#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll red,green,blue,white;

int main(){
	int t;
	int tc = 0; 
	scanf("%d", &t);
	while (t--) {
		scanf("%lld %lld %lld %lld", &white, &red, &green, &blue);
		printf("Case %d: %lld\n", ++tc,(white+red+green+blue)/4);
	}
	return 0;
}