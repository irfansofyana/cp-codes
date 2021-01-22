#include <bits/stdc++.h>
using namespace std;

int l,d,v,g,r,i;
double waktu1,waktu2;

bool merah(double k){
	for (i=1;i<=1000;i++) {
		if (double(i*g+(i-1)*r)<=k && k<=double(i*g+i*r-1)) return true;
		else if (double(i*g+(i)*r-1)<k) {
			if (k-double(i*g+i*r-1)<double(1)) return true;
		}
	}
	return false;
}
int main(){
    scanf("%d %d %d %d %d", &l, &d, &v, &g, &r);
    waktu1 = (double(d)/v); 
    if (merah(waktu1)) {
    	i = 0;
    	while (double(i*g+i*r)<waktu1) i++;
    	printf("%.8lf\n", double(i*g+i*r)+(double(l-d)/v));
    }
    else {
    	printf("%.8lf\n", (double(l)/v));
    }
    return 0;
}
