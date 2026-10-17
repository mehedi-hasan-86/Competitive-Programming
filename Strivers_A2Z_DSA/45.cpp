#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'

int jump(vector<int> &a){


    int farthest = 0;
    int currentEnd = 0;
    int jump = 0;
    for(int i=0; i<a.size()-1; i++){
        farthest = max(farthest, i+a[i]);

        if(i==currentEnd){
            jump++;
            currentEnd = farthest;
        }
    }
    return jump;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << jump(a) << endl;
    return 0;
}