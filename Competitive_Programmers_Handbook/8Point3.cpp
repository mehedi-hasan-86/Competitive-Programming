#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    vector<int> arr = {2,1,4,5,3,4,1,2};
    int n = arr.size();
    int k = 4;

    deque<int> dq;

    for(int i=0; i<n; i++){
        if(!dq.empty() && dq.front() <= i-k){
            dq.pop_front();
        }

        while(!dq.empty() && arr[dq.back()] >= arr[i]){
          dq.pop_back();
        }
        dq.push_back(i);
   

        if(i>=k-1){
            cout << arr[dq.front()] << " ";
        }
    }

    return 0;
}