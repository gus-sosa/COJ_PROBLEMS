//
// Created by Gus on 10/6/2016.
//

#include <iostream>
#include <cstring>

using namespace std;

#define LEN 101

int main() {
    int N;
    cin >> N;

    char cad[LEN];
    for (int i = 0; i < N; ++i) {
        int b = 0, r = 0, o = 0, k = 0, e = 0, n = 0;
        memset(cad, '\0', sizeof(char) * LEN);
        cin >> cad;

        for (int j = 0; cad[j] != '\0'; ++j) {
            switch (cad[j]) {
                case 'B':
                    b++;
                    break;
                case 'R':
                    r++;
                    break;
                case 'O':
                    o++;
                    break;
                case 'K':
                    k++;
                    break;
                case 'E':
                    e++;
                    break;
                case 'N':
                    n++;
                    break;
            }
        }

        cout << (b == r && r == o && o == k && k == e && e == n ? "No Secure" : "Secure") << endl;
    }


    return 0;
}