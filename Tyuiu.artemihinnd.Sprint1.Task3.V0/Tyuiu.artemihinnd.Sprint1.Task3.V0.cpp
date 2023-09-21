#include <iostream>
#include "../Tyuiu.artemihinnd.Sprint1.Task3.V0.Lib/Tyuiu.artemihinnd.Sprint1.Task3.V0.Lib.cpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "Введите целое число: ";
    cin >> number;

    if (number >= 1000 && number <= 9999 && number % 2 == 0) {
        // Четырехзначное четное число, не равное 1000 и делится на 4
        number *= 2;
    }
    else {
        // Все остальные случаи
        number /= 5;
    }

    cout << "Результат: " << number << endl;

    return 0;
};