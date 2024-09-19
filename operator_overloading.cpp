#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    friend Complex operator+(Complex const& c1, Complex const& c2)
{
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    Complex c1(18, 5), c2(2, 20);
    Complex c3 = c1 + c2;
    c3.print();
}
