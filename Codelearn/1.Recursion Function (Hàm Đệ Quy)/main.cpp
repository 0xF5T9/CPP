/*
 *   1.Recursion Function (Hàm Đệ Quy)
 *
 *  - Hàm mà gọi tới chính nó thì được gọi là hàm đệ quy.
 *  - https://youtu.be/eQ3VpTtc9lE
 */

#include <iostream>
#include <string>
#include <Windows.h>

/*  Sử dụng hàm đệ quy để tính giai thừa  */

int factorial(int _n)
{
    if (_n == 1)
        return 1;
    return _n * factorial(_n - 1); //  Giai thừa của 'n' = n * (n - 1) * (n - 2) * ... * 1;
    /*
     * Giả sử tham số '_n' là '10', hàm sẽ chạy công thức: 1*2*3*4*5*6*7*8*9*10 (Kết quả: 3628800)
     */
}

int SumOfOddNumber(int _n)
{
    if (_n == 1)
        return 1;
    if (_n % 2 == 0)
    {
        return SumOfOddNumber(_n - 1);
    }
    else
    {
        std::cout << _n << " ";
        return _n + SumOfOddNumber(_n - 1);
    }
}

int SumOfArray(int a[1000], int _n) {
    if (_n == 1) return a[0];
    return a[_n - 1] + SumOfArray(a, _n - 1);
}

int main()
{
    SetConsoleOutputCP(65001);
    int iOption;
    while (true)
    {
        system("cls");
        std::cout << "1. Tính giai thừa" << std::endl;
        std::cout << "2. Tính tổng các số lẻ từ 1 -> n" << std::endl;
        std::cout << "3. Tính tổng các phần tử trong mảng array" << std::endl;
        std::cout << "Nhập lựa chọn: ";
        std::cin >> iOption;
        if (iOption > 0 && iOption < 4)
        {
            switch (iOption)
            {
            case 1:
            {
                int n;
                std::cout << "Nhập số cần tính giai thừa: ";
                std::cin >> n;
                system("cls");
                std::cout << n << "! = " << factorial(n) << std::endl;
                system("pause");
                break;
            }
            case 2:
            {
                int n;
                std::cout << "Nhập số liệu cho 'n': ";
                std::cin >> n;
                system("cls");
                int result = SumOfOddNumber(n);
                std::cout << std::endl;
                std::cout << "Tổng của các số lẻ từ 1 đến " << n << " là: " << result << std::endl;
                system("pause");
                break;
            }
            case 3:
            {
                int n = 6;
                int arr[1000] = {2, 5, 6, 7, 9, 3};
                system("cls");
                int result = SumOfArray(arr, n);
                std::cout << "Tổng của các phần tử trong mảng 'arr' là: " << result << std::endl;
                system("pause");
                break;
            }
            }
        }
        else
        {
            std::cout << "Lựa chọn không hợp lệ." << std::endl;
            system("pause");
        }
    }
    return 0;
}