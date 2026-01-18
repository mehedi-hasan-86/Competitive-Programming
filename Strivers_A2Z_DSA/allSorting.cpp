#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;

// void bubbleSort(vector<int> &a){
//     int n = a.size();

//     for(int i=0; i<n-1;i++){
//         for(int j=0; j<n-1-i; j++){
//             if(a[j]>a[j+1]){
//                 swap(a[j], a[j+1]);
//             }
          
//         }
//     }
// }


// void insertionSort(vector<int>&a){
//        int n =  a.size();
//        for(int i=1; i<n; i++){
//         int key = a[i];
//         int j = i-1;
        
//         while(j>=0 && a[j]>key){
//              a[j+1] = a[j];
//              j--;
//         }
//         a[j+1] = key;
//        }
// }

void selectionSort(vector<int> &a){
    int n = a.size();

    for(int i=0; i<n-1; i++){   
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(a[j]< a[minIdx]){
                minIdx = j;
            }
        }
        swap(a[i], a[minIdx]);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v ={5,4,3,2,1};
    // bubbleSort(v);
    // for(int m : v){
    //     cout << m << " ";
    // }
    // cout << endl;
    // insertionSort(v);

    // for(int m : v){
    //     cout << m << " ";
    // }
    // cout << endl;

    selectionSort(v);

    for(int m : v){
        cout << m << " ";
    }
    cout << endl;


    return 0;
}