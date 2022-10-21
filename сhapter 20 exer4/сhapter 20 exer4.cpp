// сhapter 20 exer4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that prompts the user to enter the lengths of three
sides of a triangle, and then determines whether or not the given
numbers can be lengths of the three sides of a triangle. If the lengths are
not valid, a corresponding message must be displayed; otherwise the
program must further determine whether the triangle is
a.equilateral
Hint: In an equilateral triangle, all sides are equal.
b.right (or right-angled)
Hint: Use the Pythagorean Theorem.
c.not special
Hint: In any triangle, the length of each side is less than the sum of the
lengths of the other two sides.*/

#include <iostream>
using namespace std;

int main()
{
    double x, y, z;

    cout << "enter the length of the triangles:" << endl;
    cin >> x >> y >> z;

    if (x == y && y == z) {
        cout << "it's an equilateral triangle";
    }
    else if (pow(x, 2) == pow(y, 2) + pow(z, 2) || (pow(y, 2) == pow(x, 2) + pow(z, 2) || pow(z, 2) == pow(x, 2) + pow(y, 2))) {
        cout << "its a right_angle triangle";
    }
    else if (x > y + z || y > x + z || z > x + y) {
        cout << "its not a special triangle";
    }
    else {
        cout << "invalid input" << endl;
    }
    return 0;
}

