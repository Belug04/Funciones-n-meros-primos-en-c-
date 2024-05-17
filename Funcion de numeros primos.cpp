#include <iostream>

using namespace std;

bool numerosprimos(int num)
{
    bool numerosprimos=true;
    if(num<=1)
    {
        numerosprimos=false;
    }
    else
    {
        for(int i=2; i*i <= num; i++)
        {
            if(num % i == 0)
            {
                numerosprimos=true;
                break;
            }

        }

    }
    if(numerosprimos)
    {
        cout<< num << "Es un numero primo" <<endl;

    }else{
        cout<< num << "No es un numero primo"<<endl;
    }
}
int main()
{
    int numero;
    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    numerosprimos(numero);

     return 0;


}
