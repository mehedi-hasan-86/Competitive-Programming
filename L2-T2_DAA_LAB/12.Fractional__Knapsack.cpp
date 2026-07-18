#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

struct Item{
    int val, wei;
};

bool cmp(Item a, Item b){
    double r1 = (double)a.val/ a.wei;
    double r2 = (double)b.val/b.wei;
    return r1>r2;
}

double fractionalKnapsack(int W, vector<Item> &items){
    sort(items.begin(), items.end(), cmp);

    double mxProfit=0.0;

    for(auto item : items){
        if(W>= item.wei){
            mxProfit += item.val;
            W -= item.wei;
            
        }else{
            mxProfit +=(double)item.val*W/item.wei;
            break;
        }
    }

    return mxProfit;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<Item> items(n);
    for(int i=0; i<n; i++){
        cin >> items[i].val >> items[i].wei;
    }
    int W;
    cin >> W;

    cout << fractionalKnapsack(W, items) << endl;

    return 0;
}