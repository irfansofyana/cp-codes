#include <bits/stdc++.h>
using namespace std;

int n,t;
bool bilangan[1000005];
vector<long long> primes;
long long i,j;

void generate_prima(){
	memset(bilangan,false,sizeof bilangan);
	for (i=2;i<=1000000;i++) {
		if (!bilangan[i]) {
			primes.push_back(i);
			j = i;
			while (j*i<=1000000) {
				bilangan[j*i] = true;
				j++;
			}
		}
	}
}

int main(){
	generate_prima();
	
}
