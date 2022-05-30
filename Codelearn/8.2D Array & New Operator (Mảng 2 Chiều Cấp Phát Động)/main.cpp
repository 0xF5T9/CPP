/*
 * 8.2D Array & New Operator (Mảng 2 Chiều Cấp Phát Động)
 */

#include <iostream>

int main()
{
    int n = 3;                 //  Hàng
    int m = 3;                 //  Cột
    int *arr = new int[n * m]; //  Simulate 2D Array with new operator, arr[3][3] have 9 elements and (n * m) have 9 elements too

    for (int i = 0; i < n * m; i++)
    {
        arr[i] = i + 1;
    }

    /* Calucalte sum of rows in the array */
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int i = 0; i < m; i++, index++)
        {
            sum += arr[index];
        }
        std::cout << sum << std::endl;
    }

    system("pause");
    return 0;
}