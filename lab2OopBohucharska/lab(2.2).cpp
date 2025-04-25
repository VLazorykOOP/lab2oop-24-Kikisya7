#include <iostream>
#include <string>
using namespace std;

// Функція шифрування: кожен символ зсувається на 3 позиції вперед
void Shifruvannya(string S[4], string Rez[4]) {
    for (int row = 0; row < 4; row++) {
        Rez[row] = ""; // Ініціалізуємо порожній зашифрований рядок
        for (int col = 0; col < 32; col++) {
            char c = S[row][col];
            c = c + 3; // Зсуваємо символ на 3 позиції (шифр Цезаря)
            Rez[row] += c; 
        }
    }
}

int main() {
    string S[4];       // Масив з 4 вхідних рядків
    string Rez[4];     // Масив з 4 зашифрованих рядків

    cout << "Введіть 4 рядки по 32 символи:\n";
    for (int i = 0; i < 4; i++) {
        getline(cin, S[i]); 
        // Якщо рядок коротший за 32 символи — доповнюємо пробілами
        while (S[i].length() < 32)
            S[i] += ' ';
    }

  
    Shifruvannya(S, Rez);

  
    cout << "\nЗашифровані рядки:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Рядок " << i + 1 << ": " << Rez[i] << endl;
    }

    return 0;
}

