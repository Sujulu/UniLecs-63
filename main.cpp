#include <iostream>

using namespace std;

int main()
{
    // Цель - найти максимальную сумму элементов
    // 1. Ввод кол-ва элементов
    // 2. Ввод элементов массива
    setlocale(LC_ALL, "ru");
    int arr[150];
    cout << "Enter the number of items\n";
    int num; // Кол-во элементов
    cin >> num;
    int check_sum = 0; // Сумма для сравнения
    int true_sum; // Нужная сумма

    // Считывание массива
    cout << "Input items"
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 0; i < num; i++){
        check_sum += arr[i];
        if(check_sum > max){ // Поиск максимальной суммы
            max = check_sum;
            true_sum = check_sum;
        }
    }

    cout << "Answer = " << true_sum;
    return 0;
}
