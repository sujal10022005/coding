#include<iostream>
using namespace std;
class shape{
    public:
    void display(){
        cout<<"This is shape\n";
    }
};
class color{
    public:
    void fill(){
        cout<<"Fill the color\n";
    }
};
class rectangle:public shape,public color{
    public:
    void draw(){
        cout<<"Drawing a rectangle\n";
    }
};
int main(){
    rectangle r;
    cout<<"Name : sujal nage\n";
    cout<<"Enrollment no. : 0832CS221207\n\n";
    r.display();
    r.fill();
    r.draw();
} 