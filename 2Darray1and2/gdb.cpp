#include<iostream>
using namespace std;
class employee{
    char name[20],ID[10];
    float basic,da,netsal,it,gsal;
    public:
    void get_details();
    void find_netsalary();
    void show_details();
};
void employee ::get_details(){
        cout<<"Enter employee name : ";
        cin>>name;
        cout<<"Enter employee id : ";
        cin>>ID;
        cout<<"Enter employee basic salary : ";
        cin>>basic;
}
void employee :: find_netsalary(){
       da=0.52*basic;
       gsal=da+basic;
       it=0.3*gsal;
       netsal=gsal-it;
      
}
void employee :: show_details(){
       cout<<"Employee name : "<<name<<endl;
       cout<<"Employee id : "<<ID<<endl;
       cout<<"Employee basic salary : "<<basic<<endl;
       cout<<"Employee da : "<<da<<endl;
       cout<<"Employee gsal : "<<gsal<<endl;
       cout<<"Employee income tax is : "<<it<<endl;
       cout<<"Employee net salary : "<<netsal<<endl;
}
int main(){
    employee emp;
    cout<<"Name : Sujal nage"<<endl;
    cout<<"Enrollment no. : 0832CS221207"<<endl<<endl;
    emp.get_details();
    emp.find_netsalary();
    cout<<"Employee details is -> "<<endl;
    emp.show_details();
}