#include <bits/stdc++.h>
using namespace std;

long long x,y;

int main(){
	cin >> x >> y;
	if (x>0 && y>0) {
		cout<<0<<" "<<x+y<<" "<<x+y<<" "<<0<<endl;
	}
	else if (x<0 && y>0) {
		cout<<x-y<<" "<<0<<" "<<0<<" "<<abs(x-y)<<endl;
	}
	else if (x>0 && y<0) {
		cout<<0<<" "<<-1*(x-y)<<" "<<abs(-1*(x-y))<<" "<<0<<endl;
	}
	else if (x<0 && y<0) {
		cout<<-1*(abs(x)+abs(y))<<" "<<0<<" "<<0<<" "<<-1*(abs(x)+abs(y))<<endl;
	}
	return 0;
}
