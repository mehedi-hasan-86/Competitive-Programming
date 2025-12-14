#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

const int N = 1e6;
const lli MOD = 1e9+7;

//---------------------------------
// 1. GCD  & LCM
//---------------------------------
lli gcd(lli a, lli b){
    if(b==0) return a;
    return gcd(b, a%b);

    // while(b){
    //     a %=b;
    //     swap(a,b);
    // }
    // return a;
}
lli lcm(lli a, lli b){
    return (a/gcd(a,b))*b;
}

//---------------------------------
// 2. Prime Check
//---------------------------------

// bool isPrime(lli n){
//      for(int i=2; i*i<=n; i++){
//         if(n%i==0){
//             return false;
//         }
//      }
//      return true;
// }


// bool isPrime(lli n){
//     if(n<2) return false;
//     if(n==2) return true;
//     if(n%2==0) return false;

//     for(lli i=3; i*i<=n; i+=2){
//         if(n%i==0){
//             return false;
//         }
//     }
// }

bool isPrime(lli n){
    if(n <=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3 == 0) return false;

    for(lli i=5; i*i <= n; i+=6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

//------------------------------------
// 3. Sieve of Eratosthenes
//------------------------------------

vector<bool> is_Prime(N+1, true);
void sieve(){
    is_Prime[0] = is_Prime[1] = false;
    for(int i=2; i*i <= N; i++){
        if(is_Prime[i]){
            for(int j= i*i; j<=N; j+=i){
                is_Prime[j] = false;
            }
        }
    }
}

//----------------------------------------
// 4. Prime Factorization 
//----------------------------------------
vector<pair<lli, int>> primeFactorization(lli n){
      vector<pair<lli, int>> factors;
      for(int i=2; i*i <=n; i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                n /=i;
                cnt++;
            }
            factors.push_back({i,cnt});
        }
      }
      if(n>1) factors.push_back({n,1});

      return factors;
}

//---------------------------------------------
// 5. Number of Divisors 
//---------------------------------------------

lli numberOfDivisors(lli n){
    auto factors = primeFactorization(n);

    lli ans = 1;
    for(auto p : factors){
        ans *= (p.second+1);
    }
    return ans;
}

//-------------------------------------------
// 6. Sum of Divisors 
//------------------------------------------

lli sumOfDivisors(lli n){
    auto factors = primeFactorization(n);
    lli ans = 1;
    for(auto p : factors){
        lli numerator = 1;
        lli term = 1;
        for(int i=0; i<=p.second; i++){
            numerator *=p.first;
        }
        term = (numerator - 1)/(p.first-1);
        ans *=term;
    }
    return ans;
}

//------------------------------------------
// 7. Product of Divisors
//-----------------------------------------

lli productOfDivisors(lli n){
    lli d = numberOfDivisors(n);
    return pow(n, d/2);
}

//----------------------------------------
// 8. Perfect Number Check
//---------------------------------------

bool isPerfect(lli n){
    if(n <= 1) return false;
    return sumOfDivisors(n)- n == n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve();

    int  n = 84;

    cout << "GCD(84,28): " << gcd(84,24) << endl;
    cout <<"LCM(84,28): " << lcm(84,28) << endl;
    cout <<"Is Prime : " << isPrime(n) << endl;
    cout <<"Is_Prime : " << is_Prime[n] << endl; 

    auto factors = primeFactorization(n);
    for(auto p : factors){
        cout << p.first << "^" << p.second << " ";
    }
    cout << endl;

    cout << "Number of Factors :" << numberOfDivisors(n) << endl;
    cout << "Sum of Divisors : " << sumOfDivisors(n) << endl;
    cout <<"Product of Divisors: " << productOfDivisors(n) << endl;
    cout <<"Is it perfect Number: " << isPerfect(28) << endl;

    return 0;
}