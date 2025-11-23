#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

struct Event{
    int start, end;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<Event> events = {{1,3}, {2,5},{3,9},{6,8}};

    sort(events.begin(), events.end(), [](Event a, Event b){
        return a.end < b.end;
    });

    int cnt= 0;
    int lastEnd = -1;

    for(auto e : events){
        if(e.start > lastEnd){
            cnt++;
            lastEnd = e.end;
        }
    }

    cout << cnt << endl;

    return 0;
}