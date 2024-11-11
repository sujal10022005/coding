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
  
    Complex operator+(Complex const& obj) 
    { 
        Complex res; 
        res.real = real + obj.real; 
        res.imag = imag + obj.imag; 
        return res; 
    } 
    void print() { cout << real << " + i" << imag << '\n'; } 
}; 
  
int main() 
{ 
    Complex c1(10, 5), c2(2, 4); 
    Complex c3 = c1 + c2; 
    cout<<"Name : sujal nage\n";
    cout<<"Enrollment no. : 0832CS221207\n\n";
    c3.print(); 
}