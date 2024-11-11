#include<iostream>
using namespace std;
class car{
    public:
    virtual void no(){
        cout<<"Virtual function 1";
    }
};
class scar:public car{
    public:
    void no(){
        cout<<"Virtual function 2";
    }
};
int main(){
    car *p,c1;
    scar sc;
    p=&sc;
    cout<<"Name : Sujal nage\n";
    cout<<"Enrollment no. : 0832CS221207\n\n";
    p->no();
}