#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    if(p1.first > p2.first) return true;
    return false;
}

int main() {

    vector<int> v = {1, 5, 3, 2};
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Sort in ascending
    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Sort in descending
    sort(v.begin(), v.end(), greater<int>());
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    vector<pair<int, int>> a = {{1, 2}, {1, 3}, {2, 4}, {2,2}};
    // Sort in ascending according to second element and if same then descending order of first element --> custom comparator
    // greatest<int>() is a comparator, we can write custom comparator as well --> check comp fxn above
    sort(a.begin(), a.end(), comp);

    for (auto i : a) {
        cout << i.first << " " << i.second << endl;
    }

    int n = 9;
    long long nl = 174564839387473;
    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountll(nl) << endl;

    string s = "471";
    sort(s.begin(), s.end());

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    vector<int> p = {4, 8, 5, 0, 1};
    cout << *max_element(p.begin(), p.end()) <<  endl;

    return 0;
}