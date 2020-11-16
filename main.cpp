#include <iostream>

using namespace std;

void swap(int &num1, int &num2)
{
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
}

int main()
{
    int num1, num2;

    cout << "Введите первое и второе число" << endl;
    cin >> num1 >> num2;

    cout << endl;

    cout << "Первое число = " << num1 << ", второе число = " << num2 << endl;
    cout << "Меняем их местами..." << endl;

    swap(num1, num2);

    cout << "Первое число = " << num1 << ", второе число = " << num2 << endl;

    cout << endl;

    return 0;
}
