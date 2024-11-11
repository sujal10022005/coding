#include<iostream>
using namespace std;
class bike{
    public:
    virtual void sound()=0;
};
class cycle:public bike{
    public:
    void sound(){
        cout<<"Sound of bike ";
    }
};
int main(){
    cycle c;
    cout<<"Name : Sujal nage\n";
    cout<<"Enrollment no. : 0832CS221207\n\n";
    c.sound();
}