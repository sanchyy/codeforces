#include<iostream>
using namespace std;

void f(const string &s) {
    int len = s.length();
    if (len > 10) cout << s[0] << len - 2 << s[len-1] << endl;
    else cout << s << endl;
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string str; cin >> str;
        f(str);
    }
}
