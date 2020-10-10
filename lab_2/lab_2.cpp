#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int num = rand() % 100;
    int a = 0;
    int num2 = 0;
    while (num2 != num)
    {
        ++a;
        cout << "Введите число: ";
        cin >> num2;
        if (num < num2)
            cout << "Слишком большое число!" << endl;
        else if (num > num2)
            cout << "Слишком маленькое число!" << endl;
    }
    cout << endl << "Вы угадали число!" << endl;
    return 0;
}