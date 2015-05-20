//works in python -- all test cases successful
def ans(n,m):
    k = 1
    p = 1000000007
    for i in range (m+1,n+m+1):
        k*=i
        k/=(i-m)
    return k%p
t = input()
for j in range(t):
    n,m = raw_input().split()
    print ans(int(n),int(m))
