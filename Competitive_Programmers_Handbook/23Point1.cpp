#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define lli long long int
#define endl "\n"
#define sz(x) (int)(x).size()
using vl = vector<lli>;
using vi = vector<int>;
const int MAX = 1e6 + 5;
using vvl = vector<vector<lli>>;
using vvd = vector<vector<double>>;

//-------------------------------
// 1.Print Matrix
//------------------------------

void printMatrix(const vvl &A){
    for(auto &row : A){
        for(auto &x : row) cout << x << " ";
        cout << endl;
    }
    
}

void printMatrix(const vvd &A){
    for(auto &row : A){
        for(auto &x : row) cout << fixed << setprecision(6) << x << " ";
        cout << endl;
    }
}


//------------------------------------
// 2. Matrix addition
//-----------------------------------

vvl addMatrix(const vvl &A, const vvl &B){
    int n = A.size(), m = A[0].size();
    vvl C(n, vector<lli> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

//-------------------------------------
// 3. Matrix Multiplication 
//-------------------------------------

vvl multiplyMatrix(const vvl &A, const vvl &B){
    int n = A.size(), m = A[0].size(), p = B[0].size();

    vvl C(n, vector<lli>(p,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            for(int k=0; k<m; k++){
                C[i][j] +=A[i][k] * B[k][j];
            }
        }
    }
    return C;
}
//-------------------------------------------
// 4. Scalar Multiplication
//-------------------------------------------

vvl scalarMultiply(const vvl &A, lli x){
    int n = A.size(), m = A[0].size();
    vvl C = A;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            C[i][j] *=x;
        }
    }
    return C;
}

//-------------------------------------------
// 5. Identity Matrix
//------------------------------------------

vvl identity(int n){
    vvl I(n, vector<lli>(n,0));
    for(int i=0; i<n; i++) I[i][i] = 1;
    return I;
}

//---------------------------------------------
// 6. Matrix Power
//--------------------------------------------

vvl matrixPower(vvl A, lli k){
    int n = A.size();
    vvl res = identity(n);

    while(k){
        if(k%2) res = multiplyMatrix(res, A);
        A = multiplyMatrix(A,A);
        k/=2;
    }
    return res;
}

//----------------------------------------------
// 7. Determinant (recursive)
//----------------------------------------------
lli determinant(vvl A){
    int n = A.size();
    if(n==1) return A[0][0];
    lli det = 0;
    for(int j=0; j<n; j++){
        vvl M(n-1, vector<lli> (n-1));
        for(int i=1; i<n; i++){
            int col = 0;
            for(int k=0; k<n; k++){
                if(k==j) continue;
                M[i-1][col++] = A[i][k];
            }
        }
        det +=(j%2==0?1 : -1) * A[0][j] * determinant(M);
    }
    return det;
}

//----------------------------------------------
// 8. Cofactor Matrix
//---------------------------------------------
vvl cofactorMatrix(vvl A){
    int n = A.size();
    vvl C(n,vector<lli> (n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            vvl M(n-1, vector<lli> (n-1));
            int rowInd = 0;
            for(int r = 0; r<n; r++){
                if(r==i) continue;
                int colInd = 0;
                for(int c = 0; c<n; c++){
                    if(c==j) continue;
                    M[rowInd][colInd++] = A[r][c];
                }
                rowInd++;
            }
            C[i][j] = ((i+j)%2 == 0 ? 1 : -1) * determinant(M);
        }
    }
    return C;

}
//-----------------------------------------------
// 9. Transpose
//----------------------------------------------

vvl transpose(const vvl &A){
    int n = A.size(), m = A[0].size();
    vvl T(m, vector<lli> (n));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            T[j][i] = A[i][j];
        }
    }
    return T;
}
//-----------------------------------------------
// 10. InverseMatrix
//-----------------------------------------------

vvd inverseMatrix(vvl A){
    lli det = determinant(A);
    if(det == 0){
        cout << "Inverse doesn't exist (det = 0)";
        return {};
    }
    vvl C = cofactorMatrix(A);
    vvl adj = transpose(C);
    int n = A.size();
    vvd inv(n, vector<double>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            inv[i][j] = adj[i][j]/det;
        }
    }
    return inv;

}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vvl A = {{2,5},{1,4}};
    vvl B = {{1,2},{3,1}};

    cout << "A + B = \n";
    printMatrix(addMatrix(A,B));

    cout << "A * B = \n";
    printMatrix(multiplyMatrix(A,B));

    cout << "2 * A = \n";
    printMatrix(scalarMultiply(A,2));

    cout << "A^3 = \n";
    printMatrix(matrixPower(A,3));

    cout << "det(A) = " << determinant(A) << "\n";

    cout << "Inverse of A = \n";
    printMatrix(inverseMatrix(A));

    return 0;
}