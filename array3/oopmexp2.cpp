#include<iostream>
using namespace std;
class note{
    static int num;
    public:
    static int fun(){
        return num;
    }
};
int note::num=5;
int main(){
    cout<<"Name : Sujal nage"<<endl;
    cout<<"Enrollment no. : 0832CS221207 \n\n";
    cout<<"The value of num is : "<<note::fun();
}
