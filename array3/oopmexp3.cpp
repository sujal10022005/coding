#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a is : "<<a<<"  & b is : "<<b<<"\n";
    }
    friend void fun(complex);
};
void fun(complex c){
    cout<<"Sum is : "<<c.a+c.b;
}
int main(){
    cout<<"Name : Vedansh wagh\n";
    cout<<"Enrollment no. : 0832CS221219 \n\n";
    complex c;
    c.set(10,20);
    c.show();
    fun(c);
} 