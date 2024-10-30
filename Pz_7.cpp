// Pz_7.cpp : Створити чергу символів. Визначити чи є у черзі слово ‘студент’.
//

#include <iostream>
#include<windows.h>
#include <queue>
#include <string>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    queue<char> Symbols;
    string word = "студент";
    int queueSize;

    cout << "Введіть розмір черги: ";
    cin >> queueSize;

    cout << "Введіть символи для черги (по одному символу):\n";
    for (int i = 0; i < queueSize; ++i) {
        char ch;
        cin >> ch;
        Symbols.push(ch);
    }

    // Перевірка чи є слово "студент" у черзі
    int matchIndex = 0;
    bool found = false;

    while (!Symbols.empty()) {
        if (Symbols.front() == word[matchIndex]) {
            matchIndex++;
            if (matchIndex == word.size()) {
                found = true;
                break;
            }
        }
        else {
            matchIndex = 0;
        }
        Symbols.pop();
    }

    if (found) {
        cout << "Слово студент є в черзі." << endl;
    }
    else {
        cout << "Слова студент немає в черзі." << endl;
    }
}

