t = int(input())
while (t > 0):
    x = int(input())
    ans = 1
    for i in range(1, x+1):
        ans *= i
    print(ans)
    t -=1

