#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    long long n,i;
    long long A[1001];
     
    cin>>n;
    A[0]=1;
    A[1]=1;
    A[2]=1;
    for (i=3;i<=n;i++)
        {
            A[i]=A[i-1]+A[i-3];
                if (A[i]>999999)
                    A[i]=A[i]%1000000;
        }
    printf("%lld\n",A[n]);
}
