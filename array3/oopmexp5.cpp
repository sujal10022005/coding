#include<iostream>
using namespace std;
class shape{
    public:
    void display(){
        cout<<"This is shape\n";
    }
};
class circle:public shape{
    public:
    void draw(){
        cout<<"Drawing a circle";
    }
};
int main(){
    circle c;
    cout<<"Name : Vedansh Wagh\n";
    cout<<"Enrollment no. : 0832CS221219\n\n";
    c.display();
    c.draw();
}