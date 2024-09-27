#include<bits/stdc++.h>
using namespace std;
const int N = 1e6;
vector<bool>prime(N+1,true);
void sieve()
{
    int n=N;
    for (int p = 2; p * p <= n; p++) {

        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
int main()
{
    sieve();
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        cout<<prime[x]<<'\n';
    }
}