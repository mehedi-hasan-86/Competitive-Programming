#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

/* ---------Probability Basics -----------*/

// Dice even Probability
void probability_basic(){
    double p_even = 3.0/6.0;
    double p_not_even = 1-p_even;

    cout << p_even << endl;
    cout << p_not_even << endl;
}

//at least one size in 10 thorws
void probability_complement(){
    double p_no_six = pow(5.0/6.0, 10);
    double ans = 1 - p_no_six;
    cout << ans << endl;
}

/*-----------------Expected Value------------*/
void expected_value_dice(){
    double E = 0;
    for(int i=1; i<=6; i++){
        E += i*(1.0/6.0);
    }
    cout << E << endl;
}
/*--------------Binomial--------------------*/
lli nCr(int n, int r){
    if(r>n) return 0;
    r = min(r,n-r);

    lli res = 1;
    for(int i=1; i<=r; i++){
        res = res*(n-i+1)/i;
    }
    return res;
}

void binomial_example(){
    int n = 10, x = 3;
    double p = 1.0/6.0;

    double ans = nCr(n,x)*pow(p,x)*pow(1-p, n-x);
    cout << ans << endl;
}

/*-------------Geometric------------------*/
void geometric_example(){
    double p = 1.0/6.0;
    cout << 1.0/p << endl;
}

/*-------Markov Chain (DP)-----------------*/

void markov_chain(){
    int n = 5, k = 3;
    vector<vector<double>> dp(k+1, vector<double>(n+1, 0));
    dp[0][1] = 1.0;

    for(int step =1; step <=k; step++){
        for(int i=1; i<=n; i++){
            if(i==1){
                dp[step][i] = dp[step-1][2];
            }else if(i==n){
                dp[step][i] = dp[step-1][n-1];
            }else{
                dp[step][i] = 0.5*dp[step-1][i-1]+ 0.5*dp[step-1][i+1];
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout << dp[k][i] << " ";
    }
    cout << endl;

}

/*---------Quick Select (lag Vegas)------- */
int quickSelect(vector<int> &a, int k){
    int pivot = a[rand()% a.size()];
    vi left, mid, right;

    for(int x : a){
        if(x<pivot) left.push_back(x);
        else if(x== pivot) mid.push_back(x);
        else right.push_back(x);
    }
    if(k<= left.size()) return quickSelect(left, k);
    else if(k<=left.size()+mid.size()) return pivot;
    else return quickSelect(right, k-left.size()-mid.size());
}

void quickselect_demo(){
    vi a = {7,2,1,6,8,5,3,4};
    int k = 3;
    cout << quickSelect(a,k) << endl;
}

/*-----------Matrix Verification (Monte Carlo)------*/
void matrix_check(){
    int  n = 3;
    vector<vector<int>> A = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> B = {{1,0,0},{0,1,0}, {0,0,1}};
    vector<vector<int>> C = A;

    vector<int> X(n);
    for(int i=0; i<n; i++) X[i] = rand()%2;

    vector<int> BX(n,0), ABX(n,0), CX(n,0);

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            BX[i] +=B[i][j]*X[j];
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            ABX[i] +=A[i][j]*BX[j];
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            CX[i] +=C[i][j]*X[j];
        }
    }

    if(ABX == CX) cout <<"Matixx is probably correct\n";
    else cout <<"Matix is wrong\n";
}

/*----------Graph Random Coloring----------*/
void graph_coloring(){
    int n = 5;
    vector<int> color(n);
    for(int i=0; i<n; i++){
        color[i] = rand()%2;
    }
    for(int x : color) cout << x << " ";
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    srand(time(0));

    probability_basic();
    probability_complement();
    expected_value_dice();
    binomial_example();
    geometric_example();
    markov_chain();
    quickselect_demo();
    matrix_check();
    graph_coloring();

    return 0;
}