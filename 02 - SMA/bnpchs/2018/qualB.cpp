#include <bits/stdc++.h>
using namespace std;

int t, tc;
long long a, b;

int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%lld %lld", &a, &b);
		int jaw = 0;
		if (a == b && a == 0) jaw = 0;
		else if (a >= 0) jaw = 1;
		else {
			if (b == abs(a)) jaw = 0;
			else if (b > abs(a)) jaw = 1;
			else jaw = -1;
		} 
		printf("Kasus #%d: ", ++tc);
		if (jaw == -1) puts("Negatif");
		else if (jaw == 0) puts("Nol");
		else puts("Positif");
	}
}