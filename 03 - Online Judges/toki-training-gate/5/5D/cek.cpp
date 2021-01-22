#include <bits/stdc++.h>
using namespace std;
 
int t,n,temp,jumlah;
bool ans,ada;
int k,i,j,y;
 
int main(){
    scanf("%d",&t);
    while (t--) {
        scanf("%d",&n);
        ans = true;
        jumlah = 0;
        for (i=0;i<n;i++) {
            scanf("%d",&temp);
            ada = false;
            for (j=0;j<=temp/3;j++) {
                y = temp-3*j;
                if (j+y<=n-1) {
                    ada = true;
                    break;
                }
            }
            if (!ada) ans = false;
            jumlah+=temp;
        }
        if (!ans) puts("NO");
        else {
            for (k=0;(k<=(n*(n-1))/2);k++) {
                if (3*((n*(n-1))/2)-k==jumlah) {
                    ans = false;
                    puts("YES");
                    break;
                }
            }
            if (ans) puts("NO");
        }
    }
}
