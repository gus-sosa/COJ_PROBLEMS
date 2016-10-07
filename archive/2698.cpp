//
// Created by Gus on 10/6/2016.
//
#include <iostream>
#include <cstring>

using namespace std;

#define LEN_WORD 26

int main() {
    char word[LEN_WORD];
    memset(word, '\0', sizeof(char) * LEN_WORD);

    cin >> word;
    int sum = 0;
    for (int i = 0; word[i] != '\0'; i++) {
        sum += word[i] - 'A';
    }

    cout << sum;

    return 0;
}