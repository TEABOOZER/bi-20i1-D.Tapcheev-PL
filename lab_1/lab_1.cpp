#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int number;
    int a = 0;
    cout << "Введите число: " << endl;
    cin >> number;
    while (int b = number % 10)
    {
        if (!(b & 1))
        {
            ++a;
        }
        number /= 10;
    }
   cout << "Количество чётных чисел = " << a << endl;
    return 0;
}
