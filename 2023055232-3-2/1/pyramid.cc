#include <iostream>
#include <string>

using namespace std;

int type1(int a) {
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int type2(int a) {
    for (int i = 1; i <= a; i++) {
        for (int j = a+1-i; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int type3(int a) {
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= a - 1; i++) {
        for (int j = a-i; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    int type;
    int height;

    cout << "Input: ";
    cin >> type;
    cout << "Height: ";
    cin >> height;

    if (type == 1) {
        type1(height);
    } else if (type == 2) {
        type2(height);
    } else if (type == 3) {
        type3(height);
    }

    return 0;
}
