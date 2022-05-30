/*
 *  4.Arrays Memory
 */

#include <iostream>

void ShowArrayAddress(int *INT, bool ShowAsInt = true);
void ShowArrayAddress(long long *LLINT, bool ShowAsInt = true);
void ShowArrayAddress(std::string *STRING, bool ShowAsInt = true);
void ShowArrayAddress(char *CHAR, bool ShowAsInt = true);

int main()
{

    std::cout << "Size of 'int': " << sizeof(int) << std::endl;
    std::cout << "Size of 'long long': " << sizeof(long long) << std::endl;
    std::cout << "Size of 'string': " << sizeof(std::string) << std::endl;
    std::cout << "Size of 'char': " << sizeof(char) << std::endl;
    std::cout << std::endl;

    int sInt[5] = {1, 2, 3, 4, 5};
    long long sLLong[5] = {1, 2, 3, 4, 5};
    std::string sString[5] = {"Apple", "Banana", "Orange", "Tomato", "Mango"};
    char sChar[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    std::cout << "Addresses of 'sInt': ";
    ShowArrayAddress(sInt);
    std::cout << std::endl;
    std::cout << "Addresses of 'sLLong': ";
    ShowArrayAddress(sLLong);
    std::cout << std::endl;
    std::cout << "Addresses of 'sString': ";
    ShowArrayAddress(sString);
    std::cout << std::endl;
    std::cout << "Addresses of 'sChar': ";
    ShowArrayAddress(sChar);
    std::cout << std::endl;

    return 0;
}

void ShowArrayAddress(int *INT, bool ShowAsInt)
{
    if (ShowAsInt == false)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << &INT[i];
            if (i != 5 - 1)
                std::cout << " ";
        }
    }
    else if (ShowAsInt == true)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << (uintptr_t)&INT[i]; //* Using 'uintptr_t' instead of 'int' because 'int' isn't guarenteed to (and typically can't) represent the full range of valid pointers
            if (i != 5 - 1)
                std::cout << " ";
        }
    }
}

void ShowArrayAddress(long long *LLINT, bool ShowAsInt)
{
    if (ShowAsInt == false)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << &LLINT[i];
            if (i != 5 - 1)
                std::cout << " ";
        }
    }
    else if (ShowAsInt == true)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << (uintptr_t)&LLINT[i];
            if (i != 5 - 1)
                std::cout << " ";
        }
    }
}

void ShowArrayAddress(std::string *STRING, bool ShowAsInt)
{
    if (ShowAsInt == false)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << &STRING[i];
            if (i != 5 - 1)
                std::cout << " ";
        }
    }
    else if (ShowAsInt == true)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << (uintptr_t)&STRING[i];
            if (i != 5 - 1)
                std::cout << " ";
        }
    }
}

void ShowArrayAddress(char *CHAR, bool ShowAsInt)
{
    if (ShowAsInt == false)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << &CHAR[i];
            if (i != 5 - 1)
                std::cout << " ";
        }
    }
    else if (ShowAsInt == true)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << (uintptr_t)&CHAR[i];
            if (i != 5 - 1)
                std::cout << " ";
        }
    }
}