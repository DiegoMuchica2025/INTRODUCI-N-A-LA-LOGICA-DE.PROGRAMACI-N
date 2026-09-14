#include <iostream>
using namespace std;

int main()
{
    int entero;
    cout<<"ESCRIBA UN NUMERO \n";
    cin>>entero;
    entero=entero%2;
    if (entero==0)
    {
        cout<<"par";
    }
    else
        {cout<<"impar";}
}