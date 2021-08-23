#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void print()
        {
            cout<<real<<"+i"<<imaginary;
        }
        Complex(int r,int i)
        {
            real=r;
            imaginary=i;
        }
};

int main()
{
    Complex c1(1,2); //variable c1 of type complex
    c1.print();
}