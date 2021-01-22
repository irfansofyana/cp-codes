#include <cstdio>
#include <cassert>
#include <algorithm>
#include <vector>
#define sz(a) (int)(a).size()
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int MAXN = 15;

int N;
ull M;
ull dat[MAXN], sorted[MAXN], freq[MAXN];
ull max_digit;
ull tot, money_left;
int idx = -1;

bool bisa (int x, ull used) {
 assert (used * dat[x] <= money_left);
 if (used * dat[x] > money_left) return false;
 ull tmp = money_left - used * dat[x];
 //printf ("x = %d, used = %llu\n", x, used);
 //printf ("tot = %llu, used = %llu, tmp = %llu\n", tot, used, tmp);
 return (tot + used + tmp / sorted[0] == max_digit);
}

void binser (int x, ull _lo, ull _hi) {
 ull lo = _lo, hi = _hi;
 while (lo <= hi) {
  ull mid = (lo + hi) / 2;
  //printf ("lo = %llu, mid = %llu, hi = %llu\n", lo, mid, hi);
  if (bisa (x, mid)) {
   freq[x] = mid;
   lo = mid + 1;
  }
  else {
   hi = mid - 1;
  }
 }
}

void Print () {
 if (tot <= 50) {
  int cntr = 2;
  while (cntr--) {
   for (int i = N; i >= 0; i--) {
    for (int j = 0; j < freq[i]; j++) {
     printf ("%d", i);
    }
   }
   printf ("\n");
  } 
 }
 else {
  ull cntr = 0;
  for (int i = N; i >= 0; i--) {
   if (cntr + freq[i] <= 50) {
    for (int j = 0; j < freq[i]; j++) {
     printf ("%d", i);
    }
    cntr += freq[i];
   }
   else {
    for (int j = 0; j < 50 - cntr; j++) {
     printf ("%d", i);
    }
    break;
   }
  }
  printf ("\n");
  cntr = 0;
  vector <int> tmp;
  for (int i = 0; i <= N; i++) {
   if (cntr + freq[i] <= 50) {
    for (int j = 0; j < freq[i]; j++) {
     tmp.push_back (i);
    }
    cntr += freq[i];
   }
   else {
    for (int j = 0; j < 50 - cntr; j++) {
     tmp.push_back (i);
    }
    break;
   }
  }
  for (int i = sz(tmp) - 1; i >= 0; i--) printf ("%d", tmp[i]);
  printf ("\n");
 } 
}

int main () {
 scanf ("%d", &N);
 for (int i = 0; i <= N; i++) {
  scanf ("%llu", &dat[i]);
  sorted[i] = dat[i];
 }
 
 scanf ("%llu", &M);
 money_left = M;
 
 if (N == 0) {
  if (M >= dat[0]) printf ("1\n0\n0\n");
  else printf ("0\n");
  return 0;
 }
 
 sort (sorted, sorted + N + 1);
 
 if (M < sorted[0]) {
  printf ("0\n");
  return 0;
 }
 
 ull mins = 0;
 if (sorted[0] == dat[0]) {
  for (int i = N; i > 0; i--) {
   if (M < dat[i]) continue;
   if ((M - dat[i]) / sorted[0] + 1 > max_digit) {
    max_digit = (M - dat[i]) / sorted[0] + 1;
    idx = i;
    mins = dat[i];
   }
  }
  if (idx == -1) {
   printf ("1\n0\n0\n");
   return 0;
  }
  ++tot;
 }
 else {
  max_digit = M / sorted[0];
 }
 
 money_left -= mins;
 for (int i = N; i >= 0; i--) {
  binser (i, 0, money_left / dat[i]);
  money_left -= freq[i] * dat[i];
  tot += freq[i];
  if (idx == i) ++freq[i];
 }
 printf ("%llu\n", tot);
 Print ();
 return 0;
}