#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back

using namespace std;

typedef long long ll;

const int MAXN=(int)1e6;
ll t;
ll f[MAXN+2], n;
bitset<MAXN+2> bil;
vector<ll> primes;

void fastscan(ll &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register ll c;
 
    number = 0;
 
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
 
        // extract the next character from the buffer
        c = getchar();
    }
 
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

void sieve(){
	bil.set();
	bil[0] = bil[1] = false;
	for (ll i = 2; i <= MAXN; i++) {
		if (bil[i]) {
			primes.pb(i);
			for (ll j = i ; i * j <= MAXN; j++) 
				bil[i*j] = 0;
 		}
	}
}

void generate(){
	sieve();
	for (ll i = 1; i <= MAXN; i++) {
		if (i == 1) f[i] = 1;
		else if (bil[i]) f[i] = i-1;
		else {
			ll bil = i;
			ll idx = 0;
			f[i] = i;
			while (primes[idx]*primes[idx] <= bil) {
				if (bil % primes[idx] == 0) f[i] -= (f[i]/primes[idx]);
				while (bil%primes[idx]==0) bil /= primes[idx];
				idx++;
			}
			if (bil != 1) {
				f[i] -= (f[i]/bil);
			}
		}
	}
}

int main(){
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	generate();
	//cin >> t;
	fastscan(t);
	while (t--) {
		fastscan(n);
		printf("%lld\n", f[n]);
	}
	return 0;
}