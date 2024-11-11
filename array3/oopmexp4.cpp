#include<iostream>
using namespace std;
class student{
    public:
     student(){
        cout<<"Construuctor executed\n";
    }
    ~student(){
        cout<<"Destructor executed";
    }
};
int main(){
    cout<<"Name : Vedansh Wagh\n";
    cout<<"Enrollment no. : 0832CS221219\n\n";
    student s;
} 