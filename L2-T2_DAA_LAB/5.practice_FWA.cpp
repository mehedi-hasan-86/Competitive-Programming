#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;
const lli INF = 1e18;

void floydWarshall(vector<vector<lli>> &dist, int n){

    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            if(dist[i][k] == INF) continue;
            for(int j=0; j<n; j++){

                if(dist[k][j]==INF) continue;
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for(int i=0; i<n; i++){
            if(dist[i][i]<0){
            cout <<"Negative Cycle Detected\n";
            return;

        }

    }


    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(dist[i][j] == INF) cout << "INF ";
            else cout << dist[i][j] << " ";   
         }
        cout << endl;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<lli>> dist(n, vector<lli>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            lli x;
            cin >> x;

            if(i==j){
                dist[i][j] = 0;
            }else if(x==-1){
                dist[i][j] = INF;
            }else{
                dist[i][j] = x;
            }
        }
    }

    floydWarshall(dist, n);


    return 0;
}