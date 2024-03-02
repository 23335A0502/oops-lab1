#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        string name;
        int rollnum;
        double sempercentage;
        string collegename;
        int collegecode;
    public:
        Student(string name,int rollnum,double sempercentage,string collegename,int collegecode){
            cout<<"constructor invoked: "<<endl;
            cout<<"Name of the student: "<<name<<endl<<"pin num: "<<rollnum<<endl<<"Sem percentage: "<<sempercentage<<endl<<"College Name :"<<collegename<<endl<<"College code :"<<collegecode<<endl;
        }
        ~Student(){
            cout<<"Destructor called student details has been deleted"<<endl;
        }
};
int main(){
    Student obj=Student("ravali",502,70,"MVGR",33);
    Student obj2("geetha",505,70,"MVGR",33);
}

