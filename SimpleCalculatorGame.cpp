#include<iostream>
using namespace std;
int main()
{
    float no1,no2;
    char oper;
    cout<<"Enter the operation to be performed(+,-,*,/)"<<endl;
    cin>>oper;
    cout<<"Enter the first number"<<endl;
    cin>>no1;
    cout<<"Enter the second number"<<endl;
    cin>>no2;
    switch(oper)
    {
        case '+':
        cout<<"no1 + no2 = "<<no1+no2;
        break;
        case '-':
        cout<<"no1 - no2 = "<<no1-no2;
        break;
        case '*':
        cout<<"no1 * no2 = "<<no1*no2;
        break; 
        case '/':
        cout<<"no1 / no2 = "<<no1/no2;
        break;
        default:
        cout<<"invalid operation";
    }
    return 0;
}
