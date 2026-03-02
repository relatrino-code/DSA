#include <bits/stdc++.h>
using namespace std;

void printName(string s) {
    cout << "My name is " << s << endl;
}

void changeVal(int arr[], int n) {
    arr[0] += 100;
    cout << "Value at index 0 inside function: " << arr[0] << endl;
}

void changeVal(int &n) {
    cout << "Inside function pre op: " << n << endl;
    n += 100;
    cout << "Inside function post op: " << n << endl;
}

int main() {
    cout << "Hello, world!!!" << endl;
    // int x, y;
    // cin >> x >> y;
    // cout << "The value of x is: " << x << " and y is: " << y << endl;

    // string s;
    // getline(cin, s);
    // cout << "S is: " << s << endl;

    // if(x >= 50) {
    //     cout << "You're over 50!" << endl;
    // }
    // else {
    //     cout << "You're below 50!" << endl;
    // }

    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

    string p = "Priyam Verma";
    cout << p[1] << endl;
    int size = p.length();
    cout << size;
    p[size - 1] = ' ';
    cout << p;

    for(int i = 0; i < 10; i++) {
        cout << "My name is " << p << endl;
    }

    string str;
    getline(cin, str);
    printName(str);

    int arr[7];
    for(int i = 0; i < 7; i++) {
        cout << "Enter element at position: " << i << endl;
        cin >> arr[i];
    }

    for(int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int n = sizeof(arr)/sizeof(arr[0]);
    changeVal(arr, n);
    cout << "Value at index 0 inside function: " << arr[0] << endl;

    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Outside function pre op: " << num << endl;
    changeVal(num);
    cout << "Outside function post op: " << num << endl;
    
    return 0;
}