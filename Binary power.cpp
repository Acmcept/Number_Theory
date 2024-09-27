#include<bits/stdc++.h>
using namespace std;
long long pow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b%2)
            res = res * a % m;
        a = a * a % m;
        b/=2;
    }
    return res;
}
