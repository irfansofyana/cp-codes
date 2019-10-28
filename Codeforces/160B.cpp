#include <bits/stdc++.h>
using namespace std;

int n,i,j;
int pertama[105],kedua[105];
string s;

bool comp(int a,int b){
	return a>b;
}

int main(){
	cin.tie(0);
	cin >> n >> s;
	for (i=0;i<s.size();i++) {
		if (i<n) {
			pertama[i] = (int)s[i]-48;
		}
		else {
			kedua[i-n] = (int)s[i]-48;
		}
	}
	sort(pertama,pertama+n);
	sort(kedua,kedua+n,comp);	//cek kurang
	for (i=0;i<n;i++) {
		if (pertama[i]>=kedua[i]) break;
	}
	if (i==n) puts("YES");
	else {
		sort(pertama,pertama+n,comp);
		sort(kedua,kedua+n);
		for (i=0;i<n;i++) {
			if (pertama[i]<=kedua[i]) break;		//cek lebih
		}
		if (i==n) puts("YES");
		else {
			sort(pertama,pertama+n);
			sort(kedua,kedua+n);
			if (pertama[0]<kedua[0]) {
				for (i=1;i<n;i++) 
					if (pertama[i]>=kedua[i]) break;
				if (i==n) puts("YES");
				else {
					sort(pertama,pertama+n,comp);
					sort(kedua,kedua+n,comp);
					if (pertama[0]<pertama[0]) {
						for (i=1;i<n;i++) 
							if (pertama[i]>=kedua[i]) break;
						if (i==n) puts("YES");
						else puts("NO");
					}
					else if (pertama[0]>kedua[0]) {
						for (i=1;i<n;i++)
							if (pertama[i]<=kedua[i]) break;
						if (i==n) puts("YES");
						else puts("NO");
					}
					else puts("NO");
				}
			}
			else if (pertama[0]>kedua[0]) {
				for (i=1;i<n;i++) 
					if (pertama[i]<=kedua[i]) break;
				if (i==n) puts("YES");
				else {
					sort(pertama,pertama+n,comp);
					sort(kedua,kedua+n,comp);
					if (pertama[0]<pertama[0]) {
						for (i=1;i<n;i++) 
							if (pertama[i]>=kedua[i]) break;
						if (i==n) puts("YES");
						else puts("NO");
					}
					else if (pertama[0]>kedua[0]) {
						for (i=1;i<n;i++)
							if (pertama[i]<=kedua[i]) break;
						if (i==n) puts("YES");
						else puts("NO");
					}
					else puts("NO");
				}
			}
			else puts("NO");
		}
	}
}
