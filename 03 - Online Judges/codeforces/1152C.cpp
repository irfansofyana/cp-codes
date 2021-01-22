#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

bool first;
LL a, b, ret, ans;

void cek(LL i, LL a, LL b){
	LL s1 = a%i;
	LL s2 = b%i;
	if (s1 != s2) return;
	else {
		LL k = (i - s1)%i;
		LL lcm = ((a + k)*(b + k)) / i;
		if (first){
			ret = lcm;
			ans = k;
			first = false;
		}else{
			if (lcm < ret){
				ret = lcm;
				ans = k;
			}
		}
	} 
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	first = true;
	cin >> a >> b;
	for (LL i = 1; i <= sqrt(abs(a-b)); i++){
		if ((abs(a-b))%i == 0){
			cek(i, a, b);
			cek((abs(a-b))/i, a, b);
		}
	}
	cout << ans << '\n';
	return 0;
}