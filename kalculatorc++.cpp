#include <iostream>
#include <cmath>

using namespace std;

namespace kirieshki {

    class Program {
    public:
        static void Main() {
            double number1, number2;
            int vibordeystviya;

            do {
                cout << "Выберите действие\n";
                cout << "1 - Сложение 2-ух чисел\n";
                cout << "2 - Вычитание первого числа из второго\n";
                cout << "3 - Умножение 2-ух чисел\n";
                cout << "4 - Деление первого числа на второе\n";
                cout << "5 - Возвести в степень N первое число\n";
                cout << "6 - Найти квадратный корень из числа\n";
                cout << "7 - Найти 1 процент от числа\n";
                cout << "8 - Найти факториал из числа\n";
                cout << "9 - Выйти из программы\n";
                cin >> vibordeystviya;

                switch (vibordeystviya) {
                    case 1:
                        cout << "Введите number1\n";
                        cin >> number1;
                        cout << "Введите number2\n";
                        cin >> number2;
                        cout << "Результат сложения двух чисел = " << (number1 + number2) << endl;
                        break;
                    case 2:
                        cout << "Введите number1\n";
                        cin >> number1;
                        cout << "Введите number2\n";
                        cin >> number2;
                        cout << "Результат вычитания первого числа из второго = " << (number2 - number1) << endl;
                        break;
                    case 3:
                        cout << "Введите number1\n";
                        cin >> number1;
                        cout << "Введите number2\n";
                        cin >> number2;
                        cout << "Результат умножения двух чисел двух чисел = " << (number1 * number2) << endl;
                        break;
                    case 4:
                        cout << "Введите number1\n";
                        cin >> number1;
                        cout << "Введите number2\n";
                        cin >> number2;
                        cout << "Результат деления первого числа на второе = " << (number1 / number2) << endl;
                        break;
                    case 5:
                        cout << "Введите number1\n";
                        cin >> number1;
                        cout << "Введите степень в которую возвести первое число\n";
                        int stepen;
                        cin >> stepen;
                        cout << "Результат возведения первого числа в степень = " << pow(number1, stepen) << endl;
                        break;
                    case 6:
                        cout << "Введите number1\n";
                        cin >> number1; 
                        cout << "Квадратный корень из первого числа = " << sqrt(number1) << endl;
                        break;
                    case 7:
                        cout << "Введите number1\n";
                        cin >> number1;
                        cout << " 1% от первого числа = " << (number1 / 100) << endl;
                        break;
                    case 8:
                        cout << "Введите number1\n";
                        cin >> number1;
                        cout << "Факториал первого числа = " << Factorial(number1) << endl;
                        break;
                    case 9:
                        cout << "КОНЕЦ\n";
                        break;
                    default:
                        cout << "неверно\n";
                        break;
                }
                cout << endl;
            } while (vibordeystviya != 9);
        }

    private:
        static double Factorial(double num) {
            double result = 1;
            for (int i = 1; i <= num; i++) {
                result *= i;
            }
            return result;
        }
    };
}

int main() {
    kirieshki::Program::Main();
    return 0;
}