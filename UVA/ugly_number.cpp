#include <bits/stdc++.h>
using namespace std;

int i,ans;
int temp;

int main(){
	ans = 3;
	i = 3;
	while (ans!=11) {
		temp = i;
		if ((temp&(temp-1))==0) {
			ans++; i++;
		}
		else {
			while (temp%2==0)
				temp/=2;
			while (temp%3==0) 
				temp/=3;
			while (temp%5==0)
				temp/=5;
			if (temp==1) {
				ans++;
				i++;
			}
			else i++;
		} 
	}
	printf("The 1500'th ugly number is %d.\n",i);
}
