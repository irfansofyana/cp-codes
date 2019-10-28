#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

int g, b;

int main(){
	while (scanf("%d %d", &g, &b)){
		if (g == -1 && b == -1) break;
		if (b > g) swap(b, g);
		printf("%d\n", (g%(b+1) == 0 ? g/(b+1) : (g/(b+1)) + 1));
	}
	return 0;	
}