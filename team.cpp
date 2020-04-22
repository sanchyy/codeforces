#include<iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int sol = 0;
    for (int i = 0; i < n; ++i) {
        int p,q,r; cin >> p >> q >> r;
        sol += (p + q + r) > 1;
    }
    cout << sol << endl;
    
}