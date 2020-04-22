#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int th = v[k-1];
    cout << count_if(v.begin(), v.end(), [&](int const& val){return val >= th and val > 0;}) << endl;   

}