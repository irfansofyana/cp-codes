#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;

int k,r;

int main(){
	scanf("%d %d", &k, &r);
	for (int i = 1; ; i++){
		int bil = i*k;
		if (bil%10 == r || bil%10 == 0) {
			printf("%d\n", i);
			return 0;
		}
	}
	return 0;
}