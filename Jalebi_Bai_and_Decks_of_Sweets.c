#include <stdio.h>

#define MOD 1000000007L

long int modpow(long int x, long int e)
{
    long int r = 1;
    
    while ( 1 ) {
        if (e & 1)
            r = (r * x) % MOD;
        e >>= 1;
        if (e == 0)
            return r;
        x = (x * x) % MOD;
    }
}

long int modinv(long int x)
{
    return modpow(x, MOD - 2);
}

long int cosine_multi(long int x, long int y, long int r, long int n)
{
#define LONG_BIT (sizeof(long int)*8)

    long int m = 1L << (n ? LONG_BIT-1 - __builtin_clzl(n) : 0);
    long int c = 1;
    long int s = 0;
    long int t, p;
    
    while ( 1 ) {
        if (m & n) {
            p =  r*s % MOD;
            t = (c*x - p*y) % MOD;
            s = (s*x + c*y) % MOD;
            c = t;
        }
        
        m >>= 1;
        
        if (m == 0) {
            if (c < 0)
                c = (c + 1) % MOD + MOD - 1;
            return c;
        }
        
        t = (2*c*c - 1) % MOD;
        s =  2*s*c % MOD;
        c = t;
    }
}

int main(void)
{
    int ntest;
    scanf("%d", &ntest);
    
    while ( ntest-- ) {
        long int l, d, t;
        scanf("%ld %ld %ld", &l, &d, &t);
        
        long int invl = modinv(l);
        long int cosn = cosine_multi(d*invl % MOD, invl, (l*l-d*d) % MOD, t);
        printf("%ld\n", l*cosn % MOD);
    }
    return 0;
}
