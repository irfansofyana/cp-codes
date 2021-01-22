// C++ program Miller-Rabin primality test 
#include <bits/stdc++.h> 
#define pb push_back
using namespace std; 

typedef long long LL;

auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
std::mt19937 mt(seed);
const LL MAXB = 1e6;

LL myrand(LL mod){
    return mt() % mod; 
}
  
/* this function calculates (a*b)%c taking into account that a*b might overflow */
long long mulmod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
  

LL lon(LL n){
    return (LL)log(n);
}
// This function is called for all k trials. It returns 
// false if n is composite and returns false if n is 
// probably prime. 
// d is an odd number such that  d*2<sup>r</sup> = n-1 
// for some r >= 1 
bool miillerTest(LL d, LL n) 
{ 
    // Pick a random number in [2..n-2] 
    // Corner cases make sure that n > 4 
    // LL a = 2 + myrand(n-4); 

    LL b = min(n-2, 2*lon(n)*lon(n));
    LL a = 2 + myrand(b-1);
  
    // Compute a^d % n 
    LL x = power(a, d, n); 
  
    if (x == 1  || x == n-1) 
       return true; 
  
    // Keep squaring x while one of the following doesn't 
    // happen 
    // (i)   d does not reach n-1 
    // (ii)  (x^2) % n is not 1 
    // (iii) (x^2) % n is not n-1 
    while (d != n-1) 
    { 
        x = (x * x) % n; 
        d *= 2; 
  
        if (x == 1)      return false; 
        if (x == n-1)    return true; 
    } 
  
    // Return composite 
    return false; 
} 
  
// It returns false if n is composite and returns true if n 
// is probably prime.  k is an input parameter that determines 
// accuracy level. Higher value of k indicates more accuracy. 
bool isPrime(LL n, int k) 
{ 
    // Corner cases 
    if (n <= 1 || n == 4)  return false; 
    if (n <= 3) return true; 
  
    // Find r such that n = 2^d * r + 1 for some r >= 1 
    LL d = n - 1; 
    while (d % 2 == 0) 
        d /= 2; 
  
    // Iterate given nber of 'k' times 
    for (int i = 0; i < k; i++) 
         if (!miillerTest(d, n)) 
              return false; 
  
    return true; 
} 

bitset<MAXB+3>bil;
vector<LL> primes;

void sieve(){
    bil.set();
    for (LL i = 2; i <= MAXB; i++){
        if (bil[i]){
            primes.pb(i);
            for (LL j = i * i;j <= MAXB; j+=i){
                bil[j] = false;
            }
        }
    }
}


bool squarePrima(LL n){
    for (int i = 0; i < (int)primes.size(); ++i){
        LL bil = primes[i] * primes[i];
        if (bil == n) return true;
        if (bil > n) break;
    }
    return false;
}

LL ans(LL n){
    LL res = 1;
    for (auto pf : primes){
        if (pf * pf * pf > n) break;
        LL cnt = 1;
        while (n%pf == 0){
            n /= pf;
            ++cnt;
        }
        res = (res * cnt);
    }
    LL sqt = (LL)sqrt(n);
    if (isPrime(n, 10)) {
        res *= 2;
    }
    else if (sqt * sqt == n && isPrime(sqt, 10)){
        res *= 3;
    }
    else if (n != 1) res *= 4;
    return res;
}
  
// Driver program 
int main() 
{ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    LL n;
    sieve();
    cin >> n;
    // cout << ans(n) << '\lean';
    if (isPrime(n, 10)) cout << "xxx\n";
    return 0; 
} 