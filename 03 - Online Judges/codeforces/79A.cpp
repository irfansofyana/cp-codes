#include <bits/stdc++.h>
using namespace std;

int x,y,sum;
int i;

int main(){
	scanf("%d %d", &x ,&y);
	i = 1;
	while (i>0) {
		if (i%2==1) {
			if (x>=2 && y>=2) {x-=2; y-=2;}
			else if (x>=1 && y>=12) {x--; y-=12;}
			else if (x>=0 && y>=22) {y-=22;}
			else {
				puts("Hanako");
				return 0;
			}
		}
		else {
			if (x>=0 && y>=22) {y-=22;}
			else if (x>=1 && y>=12) {x--; y-=12;}
			else if (x>=2 && y>=2) {x-=2; y-=2;}
			else {
				puts("Ciel");
				return 0;
			}
		}
		i++;
	}
	return 0;
}