#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

struct Task{
    string name;
    int duration, deadline;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<Task> tasks={
        {"A", 4,2},
        {"B", 3,5},
        {"C",2,7},
        {"D",4,5},
    };

    sort(tasks.begin(), tasks.end(), [](Task a , Task b){
       return a.duration < b.duration;
    });

    int currentTime = 0, totalScore = 0;

    for(auto t : tasks){
        currentTime +=t.duration;
        totalScore +=t.deadline - currentTime;
        cout << t.name << " ";
    }
    cout << totalScore << endl;

    return 0;
}