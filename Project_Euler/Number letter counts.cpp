#include <bits/stdc++.h>
using namespace std;

int i,j,ans,temp;
int kata[21]={3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,9,8,6};
int puluhan[10]={3,6,6,5,5,5,7,6,6};
const int hundred=7;

int main(){
	for (i=1;i<=999;i++) {
		if (i<100) {
			if (i%10==0) 
				ans+=puluhan[(i/10)-1];
			else if (i<=20) 
				ans+=kata[i-1];
			else if (i%10!=0 && i>20) {
				ans+=puluhan[(i/10)-1]+kata[i%10-1];
			}
		}
		else {
			if (i%100==0) {
				ans+=kata[(i/100)-1]+hundred;
			}
			else if (i%100!=0) {
				ans+=3;
				if (i%10==0) ans+=kata[(i/100)-1]+hundred+puluhan[((i/10)%10)-1];
				else if (i%100<20) ans+=kata[(i/100)-1]+hundred+kata[(i%100)-1];
				else ans+=kata[(i/100)-1]+hundred+puluhan[((i/10)%10)-1]+kata[(i%10)-1];
			}
		}
	}
	cout<<ans+11<<endl; 
}

