#include <iostream>

using namespace std;

int main()
{
    // ���� - ����� ������������ ����� ���������
    // 1. ���� ���-�� ���������
    // 2. ���� ��������� �������
    setlocale(LC_ALL, "ru");
    int arr[150];
    cout << "Enter the number of items\n";
    int num; // ���-�� ���������
    cin >> num;
    int check_sum = 0; // ����� ��� ���������
    int true_sum; // ������ �����

    // ���������� �������
    cout << "Input items"
    for(int i = 0; i < num; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 0; i < num; i++){
        check_sum += arr[i];
        if(check_sum > max){ // ����� ������������ �����
            max = check_sum;
            true_sum = check_sum;
        }
    }

    cout << "Answer = " << true_sum;
    return 0;
}
