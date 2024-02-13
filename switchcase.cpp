#include<iostream>
using namespace std;
int main()
{
    cout<<"1.Addition 2.subtraction 3.multiplication 4.Division "<<endl;
    int choice;
    cout<<"enter choice";
    cin>>choice;
    cout<<"enter two numbers";
    float number1,number2;
    cin>>number1>>number2;
    switch(choice)
    {
        case 1:
        {
        cout<<"addition of two numbers "<<number1+number2<<endl;
        break;
        }
        case 2:
        {
        cout<<"subtraction of two numbers "<<number1-number2<<endl;
        break;
        }
        case 3:
        {
        cout<<"multiplication of two numbers "<<number1*number2<<endl;
        break;
        }
        case 4:
        {
        cout<<"division of two numbers "<<number1/number2<<endl;
        break;
        }
        default:
        {
            cout<<"invalid operator"<<endl;
            break;
        }
    }

}
