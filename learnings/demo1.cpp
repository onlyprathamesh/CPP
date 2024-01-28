#include <iostream>
using namespace std;

class complex
{
    float real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex operator+(complex b);
    friend complex operator*(complex a, complex b);
    friend istream &operator>>(istream &, complex &o);
    friend ostream &operator<<(ostream &, complex &o);
};

complex complex::operator+(complex b)
{
    complex temp;
    temp.real = real + b.real;
    temp.imag = imag + b.imag;
    return (temp);
}

complex operator*(complex a, complex b)
{
    complex temp1;
    temp1.real = ((a.real) * (b.real) - (a.imag) * (b.imag));
    temp1.imag = ((a.real) * (b.imag) + (a.imag) * (b.real));
    return (temp1);
}
istream &operator>>(istream &in, complex &o)
{
    cout << "ENTER REAL PART :";
    in >> o.real;
    cout << "ENTER IMAGINARY PART :";
    in >> o.imag;
    return in;
}

ostream &operator<<(ostream &out, complex &o)
{

    out << "\n"
        << "SOLUTION IS : " << o.real << "+" << o.imag << "i";
    return out;
}

int main()
{
    complex a, b, c;

    cout << "ENTER THE  FIRST NUMBER : \n";
    cin >> a;
    cout << "ENTER THE SECOND NUMBER : \n";
    cin >> b;

    int userchoice, exit1 = 1;

    do
    {
        cout << "MENU \n"
             << "1.TO ADD \n"
             << "2.TO MULTIPLY \n"
             << "3.EXIT \n";
        cout << "ENTER YOUR CHOICE \n";
        cin >> userchoice;
        switch (userchoice)
        {
        case 1:
            c = b + a;
            cout << c << "\n";
            break;
        case 2:
            c = b * a;
            cout << c << "\n";
            break;
        case 3:
            exit1 = 0;
            break;
        }
    } while (exit1);
    cout << "\n";
    return 0;
}
