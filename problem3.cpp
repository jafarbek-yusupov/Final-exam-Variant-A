
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int* allocateArray(int n){
    int* p = new int[n];
    for(int i=0; i<n; i++){ cin >> *(p+i);}
    return p;
}

int findMinimum(int* a, int s){
    int mn = INT_MAX;
    for(int i=0; i<s; i++){ mn = min(mn, a[i]);}
    return mn;
}

void freeMemory(int* a){
    delete[] a;     a = nullptr;    cout << "Memory successfully freed." << endl;
}

int main(){
    int n; cin >> n;
    int* p = allocateArray(n);
    cout << "Minimum value: " << findMinimum(p, n) << endl;
    freeMemory(p);
    return 0;
}
