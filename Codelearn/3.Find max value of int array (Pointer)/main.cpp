/*
 *  3.Find max value of int array (Pointer)
 */

#include <iostream>

int getMaxValue(int *p, int n)
{
    int NEW_MAX = p[0];
    for (int i = 0; i < n; i++)
    {
        if (NEW_MAX < p[i])
            NEW_MAX = p[i];
    }
    return NEW_MAX;
}

int main()
{
    int n = 5;
    int arr[100] = {14, 74, 56, 95 ,40};
    // std::cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     std::cin >> arr[i];
    // }
    std::cout << "Max value = " << getMaxValue(arr, n);
    return 0;
}
