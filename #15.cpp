#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long comb(long long n, long long m)
{
    long long i,j,k,l;
    l=1;
    j=n+m;
    for(i=m+1;i<=j;i++)
        {
        k=i-m;
        l=l*i/k;
    }
    return l%1000000007;
}
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,n,m,i,j,k;
    cin>>a;
    for(i=0;i<a;i++)
        {
        cin>>m>>n;
        cout<<comb(n,m)<<endl;
    }
    return 0;
}
