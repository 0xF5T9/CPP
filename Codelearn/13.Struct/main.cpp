/*
 *  13.Struct
 */

#include <iostream>
#include <string>
#include "func.h"

int main()
{
    /*  Create object array from struct | Create 5 students    */
    Students *students = new Students[5];

    /*  Set info for each student object | Create 5 student profiles */
    for (int i = 0; i < 5; i++)
    {
        students[i].SetInfo();
    } 

    /*  Execute ShowInfo() function for each student object */
    for (int i = 0; i < 5; i++) 
    {
        students[i].ShowInfo();
    }


    FreeMemory(students);
    return 0;
}