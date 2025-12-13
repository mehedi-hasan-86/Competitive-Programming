#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

//=============== PRIME CHECK =================
//   Time Complexity: O(sqrt(n))

bool isPrime(lli n){
    if(n<2) return false;
    for(lli i= 2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

//==============PRIME FACTORIZATION =============
// Time Complexity: O(sqrt(n))
vector<lli> primeFactors(long long n){
       vector<lli> factors;
       for(lli i=2; i*i <= n; i++){
        while(n%i==0){
            factors.push_back(i);
            n /=i;
        }
    }
    if(n>1) factors.push_back(n);
    return factors;
}

//============GCD(EUCLID) =================
// Time Complexity : O(long n)
lli gcd(lli a, lli b){
    if(b==0) return a;
    return gcd(b, a%b);
}

//=================LCM===================
lli lcm(lli a, lli b){
    return (a/gcd(a,b))*b;
}

//=======================EULLER TOTIENT FUNCTION ============
lli phi(lli n){
    lli res = n;
    for(lli i = 2; i*i <=n; i++){
        if(n%i==0){
            while(n%i==0){
                n /=i;
                res -=res/i;
            }
        }
        if(n>1){
            res -=res/n;
        }
        return res;
    }
}

//====================NUMBER OF DIVISOR ====================
lli numberOfDivisors(lli n){
    lli ans = 1;
    for(lli i=2; i*i <=n; i++){
        if(n%i==0){
            lli cnt =  0;
            while(n%i==0){
                n /=i;
                cnt++;
            }
            ans *= (cnt+1);
        }
    }
    if(n>1) ans  *=2;
    return ans;
}

//=================SUM OF DIVISORS================
lli sumOfDivisors(lli n){
    lli sum = 1;
    for(lli i=2; i*i<=n; i++){
        if(n%i==0){
            lli cur_sum =1;
            lli power = 1;
            while(n%i==0){
                n /=i;
                power *=i;
                cur_sum +=power;
            }
            sum *=cur_sum;
        }
    }
    if(n>1){
        sum *=(1+n);
    }
    return sum;
}

//====================PERFECT NUMBER CHECK========
bool isPerfect(lli n){
    if(n==1) return false;
    return  (sumOfDivisors(n)-n==n);
}

//================SIEVE OF ERATOSTHENES =============
vector<int> sieve(int n){
    vector<int> isPrime(n+1, 1);
    isPrime[0] = isPrime[1] = 0;

    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=n; j +=i){
                isPrime[j] = 0;
            }
        }
    }
    return isPrime;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    lli n = 84;

    cout << (isPrime(n) ? "YES": "NO" )<< endl;

    vector<lli> pf = primeFactors(n);
    for(auto x : pf) cout << x << " ";
    cout << endl;

    cout << numberOfDivisors(n) << endl;
    cout << sumOfDivisors(n) << endl;
    cout << phi(n) << endl;
    cout << (isPerfect(n) ? "YES":"NO") << endl;

    lli a =24, b = 36;
    cout << gcd(a,b) << endl;
    cout << lcm(a,b) << endl;

    int limit = 50;
    vector<int> primes = sieve(limit);
    cout << limit << " : ";
    for(int i=2; i<= limit; i++){
        if(primes[i]) cout << i << " ";
    }
    cout << endl;


    return 0;
}