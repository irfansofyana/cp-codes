#include <bits/stdc++.h>

using namespace std;

int ans,jaw;
double vtot,vnol;
double hasil,temp,acuan,buat;
double d;

int main(){
	while (scanf("%d %d",&vtot,&vnol) && vtot!=0 && vnol!=0) {
		ans = 1;
		hasil= -99999999;
		while ((vtot/ans)>vnol) {
			buat = double(vtot/ans);
			if (buat<=vnol && ans==1) {
				jaw = 0;
				break;
			}
			else d = (0.3)*sqrt(buat-vnol);
			if (ans*d>hasil) {
				hasil = ans*d;
				jaw = ans;
			}
			ans++;
		}
		printf("%d\n",jaw);
	}
	return 0;
}
