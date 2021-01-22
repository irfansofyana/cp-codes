#include <bits/stdc++.h>
using namespace std;

int a[6],i;
int x,y,z,tx,ty,tz;

int sqr(int a){
	return a*a;
}

int main(){
	cin.tie(0);
	for (i = 0; i < 6 ; i++) cin >> a[i];
	x = sqr(a[0]-a[2])+sqr(a[1]-a[3]);
	y = sqr(a[0]-a[4])+sqr(a[1]-a[5]);
	z = sqr(a[2]-a[4])+sqr(a[3]-a[5]);
	if (x==y+z || y==x+z || z==x+y) puts("RIGHT");
	else {tx = sqr(a[0]-a[2]+1)+sqr(a[1]-a[3]);
		if (tx==y+z) puts("ALMOST");
		else {
			tx = sqr(a[0]-a[2]-1)+sqr(a[1]-a[3]);
			if (tx==y+z) puts("ALMOST");
			else {
				tx = sqr(a[0]-a[2])+sqr(a[1]-a[3]-1);
				if (tx==y+z) puts("ALMOST");
				else {
					tx = sqr(a[0]-a[2])+sqr(a[1]-a[3]+1);
					if (tx==y+z) puts("ALMOST");
					else {
						ty = sqr(a[0]-a[4]-1)+sqr(a[1]-a[5]);
						if (ty==x+z) puts("ALMOST");
						else {
							ty = sqr(a[0]-a[4]+1)+sqr(a[1]-a[5]);
							if (ty==x+z) puts("ALMOST");
							else {
								ty = sqr(a[0]-a[4])+sqr(a[1]-a[5]-1);
								if (ty==x+z) puts("ALMOST");
								else {
									ty = sqr(a[0]-a[4])+sqr(a[1]-a[5]+1);
									if (ty==x+z) puts("ALMOST");
									else {
										tz = sqr(a[2]-a[4]-1)+sqr(a[3]-a[5]);
										if (tz==x+y) puts("ALMOST");
										else {
											tz = sqr(a[2]-a[4]+1)+sqr(a[3]-a[5]);
											if (tz==x+y) puts("ALMOST");
											else {
												tz = sqr(a[2]-a[4])+sqr(a[3]-a[5]+1);
												if (tz==x+y) puts("ALMOST");
												else {
													tz = sqr(a[2]-a[4])+sqr(a[3]-a[5]-1);
													if (tz==x+y) puts("ALMOST");
													else puts("NEITHER");
												}
											}
										}
									}
								}
							}
						}
					} 
				}
			}
		}
	}
	return 0;
}