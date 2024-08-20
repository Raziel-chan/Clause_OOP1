// Claude_OOP_learning.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Certainly! I'm glad you found that approach helpful. Let's start with some exercises to practice these OOP concepts in C++. We'll begin with a simple exercise and gradually increase the complexity.

/*Exercise 1: Basic Class Implementation
* 
Modify your Rectangle class to include:

Getter and setter functions for both length and width.
A default constructor that creates a 1x1 rectangle.
A function called isSquare() that returns true if the rectangle is a square, false otherwise.

*/

#include <iostream>
using namespace std;

class Rectangle {

    private:

        double length;
        double width;

    public:

        Rectangle() : length(1), width(1)
		{
		}

        Rectangle(double l,double w) : length(l), width(w)
        {
        }

        bool isSquare() const {
			return length == width;
		}

        void setLength(double l) {
			length = l;
		}

        double getLength() const {
            return length;
        }

        void setWidth(double w) {
        	width = w;
        }

        double getWidth() const {
			return width;
		}

        double area() const {
			return length * width;
		}

        double perimeter() const {
            return (length + width) * 2;
        }

        void display() const {
            cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
            cout << "Area: " << area() << endl;
            cout << "Perimeter: " << perimeter() << endl;
            cout << "Is Square: " << (isSquare() ? "Yes" : "No") << endl << endl;
        }
};

int main()
{
    Rectangle r1{ 5, 5 };
    r1.display();
    Rectangle r2{ 3.5, 6.24 };
    r2.display();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
