// Patterns
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Pattern 01
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 02
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 03
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++)  {
            cout << j+1 << ' ';
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 04
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++)  {
            cout << i+1 << ' ';
        }
        cout << endl;
    }

    cout << endl << endl;
    
    // Pattern 05
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++)  {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 06
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++)  {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 07
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++)  {
            cout << "  ";
        }
        for (int k = 0; k < 2*i+1; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 08
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++)  {
            cout << "  ";
        }
        for (int k = 0; k < 2*i+1; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 09
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++)  {
            cout << "  ";
        }
        for (int k = 0; k < 2*(5-i-1)+1; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 10
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++)  {
            cout << "  ";
        }
        for (int k = 0; k < 2*i+1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++)  {
            cout << "  ";
        }
        for (int k = 0; k < 2*(5-i-1)+1; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 11
    int stars;
    for (int i = 0; i < 2*5; i++) {
        if (i < 5) stars = i + 1;
        else stars = 2 * 5 - i - 1;
        for (int j = 0; j < stars; j++)  {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 12
    int num;
    for(int i = 0; i < 5; i++) {
        if (i % 2 == 0) num = 1;
        else num = 0;
        for(int j = 0; j < i + 1; j++) {
            cout << num << " ";
            if (num == 0) num = 1;
            else num = 0;
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 13
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << j + 1 << " ";
        }
        for(int j = 0; j < (2 * (4 - i) - 1); j++) {
            cout << "  ";
        }
        for(int j = i + 1; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 14
    int n = 1;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 15
    for(int i = 0; i < 5; i++) {
        char l = 'A';
        for(int j = 0; j < i + 1; j++) {
            cout << l << " ";
            l++;
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 16
    for(int i = 0; i < 5; i++) {
        char l = 'A';
        for(int j = 5; j > i; j--) {
            cout << l << " ";
            l++;
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 17
    char l = 'A';
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << l << " ";
        }
        l++;
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 18
    for(int i = 0; i < 4; i++) {
        char m = ('A' - 1) + i;
        char l = 'A';

        for(int j = 4; j > i + 1; j--) {
            cout << "  ";
        }
        for(int j = 0; j < i + 1; j++) {
            cout << l << " ";
            l++;
        }
        for(int j = 0; j < i; j++) {
            cout << m << " ";
            m--;
        }
        m++;
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 18-02
    for(int i = 0; i < 4; i++) {
        char ch = 'A';
        for(int j = 0; j < 4 - i - 1; j++) {
            cout << "  ";
        }
        for(int j = 0; j < (2 * i + 1); j++){
            cout << ch << " ";
            if(j > ((2*i+1)/2)-1) ch--;
            else ch++;
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 19
    for(int i = 0; i < 5; i++) {
        char ch = 'E';
        ch = ch - i;
        for(int j = 0; j < i + 1; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 20
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            cout << "* ";
        }
        for(int j = 0; j < 2*i; j++){
            cout << "  ";
        }
        for (int j = 0; j < 5 - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        for(int j = 0; j < 2 * (5 - i - 1); j++){
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 20
    int sp1 = 8; int sp2 = 2;
    for(int i = 0; i < (2 * 5 - 1); i++) {
        if (i < 5){
            for(int j = 0; j < i + 1; j++) {
                cout << "* ";
            }
            for(int j = 0; j < sp1; j++) {
                cout << "  ";
            }
            sp1 -= 2;
            for(int j = 0; j < i + 1; j++) {
                cout << "* ";
            }
        }
        else {
            for(int j = (2 * 5 - i - 1); j > 0; j--) {
                cout << "* ";
            }
            for(int j = 0; j < sp2; j++) {
                cout << "  ";
            }
            sp2 += 2;
            for(int j = (2 * 5 - i - 1); j > 0; j--) {
                cout << "* ";
            }
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 21
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if (i == 0 || i == (4 - 1) || j == 0 || j == (4 - 1)) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }

    cout << endl << endl;

    // Pattern 22
    int number = 4;
    for(int i = 0; i < (2*number-1); i++) {
        for(int j = 0; j < (2*number-1); j++) {
            cout << number - min({i, j, ((2*number-1)-1-i), ((2*number-1)-1-j)})<< " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    return 0;
}


