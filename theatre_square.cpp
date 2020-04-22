#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n, m; cin >> n >> m;
    double a; cin >> a;
    cout << (long long) ceil(n/a) * (long long) ceil(m/a) << endl;
}
