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

struct Task{
    int duration;
    int deadline;
    char name;
};

bool cmp(const Task &a, const Task &b){
    return a.duration < b.duration;
}

int scheduleTasks(vector<Task> &tasks){
    sort(tasks.begin(), tasks.end(), cmp);

    int time = 0;
    int totalScore = 0;
    for(const Task &t : tasks){
        time += t.duration;
        int score = t.deadline - time;
        totalScore +=  score;
    }

    return totalScore;
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<Task> tasks = {
        {4,2,'A'},
        {3,5,'B'},
        {2,7,'C'},
        {4,5,'D'}
    };

    cout << scheduleTasks(tasks) << endl;

    return 0;
}