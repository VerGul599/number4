#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int count = 0;

    for (int number = 100; number <= 999; number++) 
    {
        int digit1 = number / 100;
        int digit2 = (number / 10) % 10;
        int digit3 = number % 10;

        if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) 
        {
            count++;
        }
    }

    cout << "Количество целых чисел в диапазоне от 100 до 999 с двумя одинаковыми цифрами: " << count;

    return 0;
}




#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int count = 0;

    for (int number = 100; number <= 999; number++) 
    {
        int digit1 = number / 100;
        int digit2 = (number / 10) % 10;
        int digit3 = number % 10;

        if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3) 
        {
            count++;
        }
    }

    cout << "Количество целых чисел в диапазоне от 100 до 999 с разными цифрами: " << count;

    return 0;
}



#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); 

    int inputNumber;
    cout << "Введите любое целое число: ";
    cin >> inputNumber;

    
    string numberString = to_string(inputNumber);
    string resultString = "";

    for (char digit : numberString)
    {
        if (digit != '3' && digit != '6')
        {
            resultString += digit; 
        }
    }

    if (resultString.empty()) 
    {
        cout << "После удаления цифр 3 и 6 результат пуст";
    }
    else 
    {
        cout << "Результат после удаления цифр 3 и 6: " << resultString;
    }

    return 0;
}




#include <iostream>
#include <Windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numberA;
    cout << "Введите целое число A: ";
    cin >> numberA;

    cout << "Целые числа B, для которых " << numberA << " делится на B*B и не делится на B*B*B: ";
    for (int numberB = 1; numberB <= numberA; numberB++) 
    {
        if (numberA % (numberB * numberB) == 0 && numberA % (numberB * numberB * numberB) != 0) 
        {
            cout << numberB << " ";
        }
    }

    return 0;
}



#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int sumOfDigitsCubed(int number)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int sum = 0;
    while (number > 0) 
    {
        int digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }
    return sum;
}

int main()
{
    int numberA;
    cout << "Введите целое число A: ";
    cin >> numberA;

    int sumOfDigits = sumOfDigitsCubed(numberA);
    int squareOfA = numberA * numberA;

    if (sumOfDigits == squareOfA) 
    {
        cout << "Куб суммы цифр числа равен квадрату числа A";
    }
    else
    {
        cout << "Куб суммы цифр числа не равен квадрату числа A";
    }

    return 0;
}




#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int numberA;
    cout << "Введите целое число A: ";
    cin >> numberA;

    cout << "Целые числа, на которые " << numberA << " делится без остатка: ";
    for (int numberB = 1; numberB <= numberA; numberB++) 
    {
        if (numberA % numberB == 0)
        {
            cout << numberB << " ";
        }
    }

    return 0;
}



#include <iostream>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2;
    std::cin >> num1 >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            std::cout << i << " ";
        }
    }

    return 0;
}


