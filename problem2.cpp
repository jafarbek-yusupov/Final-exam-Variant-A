#include <iostream>
#include <vector>
using namespace std;

void transposeMatrix(const vector<vector<int>>& a, int s, int d){
    for(int j=0; j<d; j++){
        for(int i=0; i<s; i++){ cout << a[i][j] << " ";}    cout << endl;
    }
}

int sumDiagonalElements(const vector<vector<int>>& a, int s){
    int sm=0;    for(int i=0; i<s; i++){ sm += a[i][i];}
    return sm;
}

int main(){
    int r, c;   cin >> r >> c;
    vector<vector<int>> v(r, vector<int>(c));
    for(int i=0; i<r; i++){    for(int j=0; j<c; j++){    cin >> v[i][j];}}
    transposeMatrix(v, r, c);
    cout << sumDiagonalElements(v, r);
    return 0;
}
