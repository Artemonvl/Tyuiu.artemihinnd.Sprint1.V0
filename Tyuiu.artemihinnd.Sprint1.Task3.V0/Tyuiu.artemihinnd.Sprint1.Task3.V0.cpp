#include <iostream>
#include "../Tyuiu.artemihinnd.Sprint1.Task3.V0.Lib/Tyuiu.artemihinnd.Sprint1.Task3.V0.Lib.cpp"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int number;

    cout << "������� ����� �����: ";
    cin >> number;

    if (number >= 1000 && number <= 9999 && number % 2 == 0) {
        // �������������� ������ �����, �� ������ 1000 � ������� �� 4
        number *= 2;
    }
    else {
        // ��� ��������� ������
        number /= 5;
    }

    cout << "���������: " << number << endl;

    return 0;
};