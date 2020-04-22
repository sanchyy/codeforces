#include<iostream>
#include <string>
#include<sstream>
using namespace std;

const int dif = ('Z' - 'A');

bool isVowel(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y';
}

void f(const string &s) {
    string sol;
    for (auto c : s) {
        char cl = tolower(c);
        if (not isVowel(cl))
        {
            ostringstream ss;
            ss << '.' << cl;
            sol += ss.str();
        }
    }

    cout << sol << endl;
}

int main() {
    string str; cin >> str;
    f(str);
}