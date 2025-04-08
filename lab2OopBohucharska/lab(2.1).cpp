#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    
    // Запитуємо користувача ввести значення a, b, c і d
    cout << "Введіть a, b, c і d: ";
    cin >> a >> b >> c >> d;
    
    // Обчислюємо результат за формулою
    int result = ((a << 3) + (a << 2)) + ((((d << 4) - d) + ((b << 3) + (b << 2))) >> 10) - ((c << 3) + (c << 2)) + ((d << 4) - d);
    
    // Виводимо результат
    cout << "Результат: " << result << endl;
    
    return 0;
}