#include<iostream>
using namespace std;
class employee {
    char name[20],id[10];
    float basic ,da,netsal,it,gsal;
    public:
    void get_details();
    void find_netsalary();
    void show_details();
};
void employee::get_details(){
    cout<<"Enter employee name : ";
    cin>>name;
    cout<<"Enter employee ID : ";
    cin>>id;
    cout<<"Enter employee basic salary : ";
    cin>>basic;
}
void employee::find_netsalary(){
    da=0.52*basic;
    gsal=da+basic;
    it=0.3*gsal;
    netsal=gsal-it;
}
void employee::show_details(){
    cout<<"Employee name : "<<name<<"\n";
    cout<<"Employee id : "<<id<<"\n";
    cout<<"Employee basic salary : "<<basic<<"\n";
    cout<<"Employee da : "<<da<<"\n";
    cout<<"Employee gsal : "<<gsal<<"\n";
    cout<<"Employee income tax is : "<<it<<"\n";
    cout<<"Employee net salary : "<<netsal<<"\n";
}
int main(){
    employee emp;
    cout<<"Name : Shaswat Sharma"<<endl;
    cout<<"Enrollment no. : 0832CS221185 \n\n";
    emp.get_details();
    emp.find_netsalary();
    cout<<"\nEmployee details is -> \n";
    emp.show_details();
}