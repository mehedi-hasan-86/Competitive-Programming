#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using vi = vector<int>;
using vl = vector<lli>;
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.length();
    int ax = -1, ay = -1;
    for(int i=0; i<n-1; i++){
        if(s[i]=='A' && s[i+1]=='B'){
            ax = i; ay = i+1;
            break;
        }
    }
    if(ax != -1){
        for(int i=ax+2; i<n-1; i++){
            if(s[i] == 'B' && s[i+1]=='A'){
                cout <<"YES" << endl;
                return 0;
            }
        }
    }
    //cout << ax << " " << ay << endl;
    int cx = -1 ,cy = -1;
    for(int i=0; i<n-1;i++){
        if(s[i]=='B' && s[i+1]=='A'){
            cx = i;
            cy = i+1;
            break;
        }
    }

    if(cx !=-1){
        for(int i= cx+2; i<n-1; i++){
            if(s[i]=='A' && s[i+1]=='B'){
                cout <<"YES" << endl;
                return 0;
            }
        }
    }
    cout <<"NO" << endl;

    // if(ax != -1 && cx != -1 && (ay <cx || cy<ax)){
    //     cout <<"YES" << endl;
    // }else{
    //     cout << "NO" << endl;
    // }

    //cout << cx << " " << cy << endl;

    return 0;
}