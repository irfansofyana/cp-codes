import random
import math

primes = []
MAXB = 1000000
bil = []

def sieve():
	for i in range(1, 1000005):
		bil.append(True)
	for i in range(2, 1000001):
		if (bil[i]):
			j = i * i
			primes.append(i)
			while (j <= 1000000):
				bil[j] = False
				j += i

def power(a, b, c):
	if (b == 0):
		return 1
	elif (b == 1):
		return a%c
	tmp = power(a, b/2, c)
	tmp = (tmp * tmp) % c
	if (b%2 == 0):
		return tmp
	else:
		return ((a%c) * tmp)%c

def millerTest(d, n):
	lon = int(math.log(n))
	# b = min(n-2, 2*lon*lon)
	a = random.randrange(2, n-2)
	x = power(a, d, n)
	if (x == 1 or x == n-1):
		return True
	while (d != n-1):
		x = (x *x) % n
		d *= 2
		if (x == 1):
			return False
		if (x == n-1):
			return True
	return False

def isPrime(n, k):
	if (n <= 1 or n == 4):
		return False
	if (n <= 3):
		return True

	d = n-1
	while (d % 2 == 0):
		d /= 2

	for i in range(0, k):
		if (not(millerTest(d, n))):
			return False
	return True

def ans(n):
	res = 1
	for pf in primes:
		if (pf * pf * pf > n):
			break
		cnt = 1
		while (n%pf == 0):
			n /= pf
			cnt+=1
		res *= (cnt)
	sqt = int(math.sqrt(n))
	if (isPrime(n, 10)):
		res *= 2
	elif (sqt * sqt == n and isPrime(sqt, 10)):
		res *= 3
	elif (n != 1):
		res *= 4
	return res

if __name__ == '__main__':
	sieve()
	tot = 0
	for pf in primes:
		if (pf <= 50000):
			tot+=1
	print(tot)