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

    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    //Linear Search ---> O(n)
     int x;
    cin >> x;
    /*
    for(int i=0; i<n; i++){
        if(a[i] == x){
           cout << "Found at index " << i << " : the element is  " << a[i] << endl;
           return 0;
        }
    }
    cout <<"Not found" << endl;
    */


    //Binary Search ---> O(long n)
    // int low = 0, high =  n-1;
    // while(low<=high){
    //     int mid = low + (high-low)/2;
    //     if(a[mid]==x){
    //        cout << "Found at index " << mid << " : the element is  " << a[mid] << endl;
    //        return 0;  
    //     }else if(a[mid]> x){
    //         high = mid-1;
    //     }else{
    //         low = mid+1;
    //     }
    // }
    // cout <<"Not found" << endl;

    auto k  = lower_bound(a.begin(), a.end(),x)- a.begin();
    if(k<n && a[k] == x){
        cout << "Found at index " << k << " : the element is  " << a[k] << endl;
    }
    cout <<"Not found" << endl;


    auto s = lower_bound(a.begin(), a.end(), x);
    auto r = upper_bound(a.begin(), a.end(), x);
    cout << r-s << endl;



    return 0;
}