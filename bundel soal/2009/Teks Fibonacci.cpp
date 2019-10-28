#include <bits/stdc++.h>
using namespace std;
 
string hasil,s[10005];
int t,i,k,j,sum;
int fibo[1000];

int main(){
    cin.tie(0);
    cin >> t;
    for (j=0;j<t;j++) {
        cin >> s[1] >> s[2] >> k;
        hasil = "";
    	for (i=1;i<=2;i++) hasil = hasil+s[i];
		fibo[1] = fibo[2] = 1;
    	sum = 2;
		for (i=3;i<=1000;i++) {
			fibo[i] = fibo[i-2]+fibo[i-1];
			sum+=fibo[i];
			if (sum>k+1) break;
		}  
		for (int z=3;z<=i;z++) {
			s[z] = s[z-1]+s[z-2];
			hasil = hasil+s[z];
		}  
		cout << hasil[k] << endl;
 	}
    return 0;
}
