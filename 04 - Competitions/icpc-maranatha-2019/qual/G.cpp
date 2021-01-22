#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000
int t,n,c,r, k[MAXN+5], h[MAXN+5], a, b, len, xam, total, x, y;
long long val[MAXN+5];
double ans, xamAns;
map<int, bool> v[MAXN+5];

bool check(int idx){
	int cur = k[idx];
	for(int i = 1; i <= n; i++){
		if(val[i] > 0){
			if(v[cur].find(i) != v[cur].end()){
				return false;
			}
		}
	}
	return true;
}

void clear(){
	for(int i = 1; i <= n; i++){
		v[i].clear();
		val[i] = 0;
	}
	a = b = 0;
	xam = 0;
	ans = 0;
	total = 0;
	xamAns = 0;
}

void input(){
	scanf("%d %d %d", &n, &c, &r);
	clear();
	total = 0;
	for(int i = 0; i < r; i++){
		scanf("%d %d", &x, &y);
		v[x][y] = true;
		v[y][x] = true;
	}
	for(int i = 0; i < n; i++){
		scanf("%d %d", &k[i], &h[i]);
		k[i+n] = k[i];
		h[i+n] = h[i];
	}
}

void inc(int idx){
	if(val[k[idx]] == 0){
		total++;
	}
	val[k[idx]] += h[idx];
	ans += h[idx];
}

void dec(int idx){
	val[k[idx]] -= h[idx];
	ans -= h[idx];
	if(val[k[idx]] == 0){
		total--;
	}
}

void out(){
	cout<<a<<" "<<b<<endl;
	for(int i = 1; i <= n; i++){
		printf("%d %d\n", i, val[i]);
	}
	printf("\n");
}

int main(){
	scanf("%d", &t);
	while(t--){
		input();
		inc(0);
		while(a < n && b-a < n){
			while(a <= b && !check(b)){
				if(a > b){
					break;
				}
				dec(a);
				a++;
			}
			//out();
			if(a <= b){
				if(xam < total){
					xam = total;
					xamAns = ans;
					len = b-a+1;
				} else if(xam == total && xamAns < ans){
					xamAns = ans;
					len = b-a+1;
				}
			}
			b++;
			inc(b);
		}
		printf("%d %d\n", (int)(xamAns/len), xam);
	}
}