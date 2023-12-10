/*
SIMPLE CALCULATOR:
Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
*/

//Solution:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(true)
    {
        int opr,close;
        cout<<"Enter the two Numbers: "<<endl;
        cin>>a>>b;
        cout<<"Enter the Action to be Performed : "<<endl<<"Addition = 1 "<<endl<<"Subraction = 2 "<<endl
            <<"Multiplication = 3 "<<endl<<"Division = 4 "<<endl;
        cin>>opr;
        if(opr==1)
        {
            cout<<"Addition of the given elements "<<a<<" and "<<b<<" is : "<<(a+b)<<endl;
        }
        else if(opr==2)
        {
            cout<<"Subraction of the given elements "<<a<<" and "<<b<<" is : "<<(a-b)<<endl;
        }
        else if(opr==3)
        {
            cout<<"Multiplicaton of the given elements "<<a<<" and "<<b<<" is : "<<(a*b)<<endl;
        }
        else if(opr==4)
        {
            cout<<"Division of the given elements "<<a<<" and "<<b<<" is : "<<(float)(a/b)<<endl;
        }
        cout<<"Do you want to end the session ?"<<endl<<"Yes = 1"<<endl<<"No = 0"<<endl;
        cin>>close;
        if(close==1)
        {
            break;
        }
    }
    return 0;
}
