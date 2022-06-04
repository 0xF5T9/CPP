/*
 *  Debug Project
 */

#include "point.h"

int main()
{
    system("cls"); // Clear Vscode Terminal
    {
        // Create a pointer that point to an object array ('points' is pointing to an Point Object Array)
        Point* points = new Point[3];   //
        points[0] = Point(1, 1);        // Alternative: Point* points = new Point[3]{ {1,1}, {2,2}, {3,3} };
        points[1] = Point(2, 2);        // OR: Point* points = new Point[3]{ Point(1, 1), Point(2, 2), Point(3, 3) };
        points[2] = Point(3, 3);        //

        for (int i = 0; i < 3; i++)
        {
            points[i].display();
        }
        /*
        * The object array was initialized with 'new' operator, therefore must be deallocated with 'delete[]'
        * use 'delete[]' for an array of objects, and 'delete' for single object
        */
        delete[] points; 
    }   // End of the scope, the pointer 'points'(Point* points) will be destroyed

    {
        // Create an array of pointers, each pointer point to a single object
        Point* points[3];               //
        points[0] = new Point(1, 1);    //
        points[1] = new Point(2, 2);    // Alternative: Point* points[3]{ new Point(1, 1), new Point(2,2), new Point(3,3) };
        points[2] = new Point(3, 3);    //
        
        for (int i = 0; i < 3; i++)
        {
            points[i]->display();
        }
        /*
        * The objects that created by each pointer is initialized with 'new' operator, therefore must be deallocated with 'delete'
        * use 'delete[]' for an array of objects, and 'delete' for single object
        */
        delete points[0]; delete points[1]; delete points[2];
    }   // End of the scope, the array of pointers 'points'(Point* points[3]) will be destroyed

    return 0;
}