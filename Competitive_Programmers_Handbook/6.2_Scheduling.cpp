#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define all(x) (x).begin(), (x).end()
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
const int INF = 1e9;
const int MOD = 1e9 + 7;

struct Event{
    int start;
    int end;
    string name;
};

bool cmp(const Event &a, const Event &b){
    return a.end < b.end;
}

vector<string> activitySelection(vector<Event> &events){
    sort(events.begin(), events.end(), cmp);

    vector<string> selected;
    int lastEnd = -1;

    for(Event e : events){
        if(e.start >= lastEnd){
            selected.push_back(e.name);
            lastEnd = e.end;
        }
    }
    return selected;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<Event> events = {
        {1,3,"A"},
        {2,5,"B"},
        {3,9,"C"},
        {6,8,"D"}
    };

    vector<string> selected = activitySelection(events);
    cout << selected.size() << endl;

    cout << "Selected: ";
    for(string s : selected){
        cout << s << " ";
    }
    cout << endl;
    return 0;
}