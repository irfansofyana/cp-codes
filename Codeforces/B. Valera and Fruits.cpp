#include <iostream>
using namespace std;

int n,v,a,b,x[3005],ans,one,two;
int main(){
    cin >> n >> v;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        x[a]+=b;
    }
    for(int i=0;i<3002;i++){
        //yesterday
        one = min(x[i], v);
        ans += one;
        //today
        two = min(x[i+1], v-one);
        ans += two;
        x[i+1] -= two;
    }
    cout << ans << endl;
}
