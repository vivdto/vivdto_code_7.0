#include<iostream>
#include<string>

using namespace std;

// Class to demonstrate function overloading
class Print {
    public:
    // Overloaded function to print an integer
    void show(int x) {
        cout << "int: " << x << endl;
    }

    // Overloaded function to print a string
    void show(string str) {
        cout << "string: " << str << endl;
    }
};

// Class to demonstrate operator overloading
class Complex {
    int real;
    int img;

    public:
    // Constructor to initialize real and imaginary parts
    Complex(int r, int i) : real(r), img(i) {}

    // Function to display the complex number
    void showNum() {
        cout << real << " + " << img << "i\n";
    }

    // Operator overloading for addition of complex numbers
    Complex operator +(Complex &c2) {
        int resReal = this->real + c2.real;
        int resImg = this->img + c2.img;
        Complex c3(resReal, resImg);
        return c3;
    }

    // Operator overloading for subtraction of complex numbers
    Complex operator -(Complex &c2) {
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;
        Complex c4(resReal, resImg);
        return c4;
    }
};

int main() {
    // Creating and displaying complex numbers
    Complex c1(1, 2);
    Complex c2(3, 4);
    c1.showNum();
    c2.showNum();

    // Demonstrating addition of complex numbers
    Complex c3 = c1 + c2;
    c3.showNum();

    // Demonstrating subtraction of complex numbers
    Complex c4 = c2 - c1;
    c4.showNum();

    // Demonstrating function overloading
    Print obj1;
    obj1.show(25);
    obj1.show("Vivashwat");

    return 0;
}