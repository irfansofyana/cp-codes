#include <bits/stdc++.h>
using namespace std;

long long n;
bool fi;

int main(){
    scanf("%lld", &n);
    fi = true;
    while (n != 1){
        if (fi) {
            printf("%lld", n);
            fi = false;
        }else{
            printf(" %lld", n);
        }
        n = (n%2 == 0 ? n/2 : 3 * n + 1);
    }
    printf(" 1\n");
    return 0;
}