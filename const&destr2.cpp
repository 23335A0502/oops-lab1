#include<iostream>
using namespace std;
class Student1{
    private:
        string collegename;
        int collegecode;
        string fullname;
        double sempercentage;
    public:
        Student1(){
            collegename="MVGR";
            collegecode=33;
            cout<<"Constructor called: "<<endl;
            cout<<collegename<<endl;
            cout<<collegecode<<endl;
        }
        Student1(string fullname,double sempercentage){
            cout<<"Constructor called: "<<endl;
            cout<<fullname<<endl;
            cout<<sempercentage<<endl;
        }
};
int main(){
    Student1 obj;
    Student1 obj1=Student1("ravali",70);
    Student1 obj2=Student1(“geetha",70);
}

