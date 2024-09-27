#include<bits/stdc++.h>
using namespace std;
map<int,int>prime_factor(int n)
{
    int i=2;
    map<int,int>ret;
    while(i*i<=n)
    {
        while(n%i==0)
        {
            ret[i]++;
            n/=i;
        }
        ++i;
    }
    if (n>1)
        ret[n]++;
    return ret;
    // O(sqrt(n))
}