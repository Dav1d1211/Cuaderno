#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

void menu(int &opc)
{
    opc=0;
    cout<< "\n\n\t MENU DE SERIES"                          <<endl;
    cout<< "1. Salir"                                       <<endl
        << "2. Secuencia suma +3"                           <<endl
        << "3. Cruz de signos: "                            <<endl
        << "+               +"                              <<endl
        << "    -       -    "                              <<endl
        << "        +        "                              <<endl
        << "    -       -    "                              <<endl
        << "+               +"                              <<endl
        << "4. Presentar frase en mayusculas y sin la J"    <<endl<<endl;
    cout<< "\tIngrese una opcion: ";
    cin>>opc;
    cout<<endl;
}

void removeJ(string &s) 
{
  s.erase(remove(s.begin(), s.end(), 'j'), s.end());
  s.erase(remove(s.begin(), s.end(), 'J'), s.end());
}

void jumboSerie07()
{
    system("cls");
    int i,x,z;
    cout<< "\tSeleccionaste: Secuencia suma +3" <<endl;
    cout<< "Ingrese el numero de terminos: ";
    cin>> z;
    i=0;
    x=1;
    for (int i= 0; i < z; i++)
    {
        cout<< x << ' ';
        x = x + 3;
    }
    
}

void jumboSerie17()
{
    system("cls");
    int nivel=0;
    cout<<"\tSeleccionaste: Cruz de signos "<<endl;
    cout<<"Ingrese el nivel deseado: ";
    cin>>nivel;
        for (int i = 1; i <= nivel; i++)
    {
        for (int j = 1; j <= nivel; j++)
        {
            if (i==j)
            {
                if (i%2==0)
                {
                    cout<<" - ";
                }
                else
                {
                cout<<" + "; 
                }
            }
            else if (i+j==nivel+1)
            {
                if (i%2==0)
                {
                    cout<<" - ";
                }
                else
                {
                    cout<<" + ";
                }
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void jumboSerie27()
{
    system("cls");
    string(frase);
    cout<< "Seleccionaste: Presentar frase en mayusculas y sin la J"        <<endl<<endl;
    cout<< "\tModelo: "
        << "Pedir una frase y presentarla en mayusculas y sin la J"         <<endl
        << "Ejemplo:  frase : mujeres"                                      <<endl
        << "          salida: MUERES"                                       <<endl<<endl;
    cout<< "Ingrese una frase:";
    getline(cin, frase);
    cin>>frase;
     transform(frase.begin(), frase.end(), frase.begin(), ::toupper);
     removeJ(frase);
    cout << frase << endl;
}
void menu2()
{
    cout<< "\n\n\t\t ESTUDIANTE"    <<endl<<endl;
    cout<< "David Jumbo"            <<endl;
    cout<< "C.I: 1725474447"        <<endl;
    system("pause");
    system("cls");
    
    int opc;
        do
        {
            menu(opc);
            switch (opc)
            {
            case 1: exit(0);
                    break;
            case 2: jumboSerie07();
                    break;
            case 3: jumboSerie17();
                    break;
            case 4: jumboSerie27();
                    break;
            default: cout<< "Intentalo de nuevo..."<<endl;
                break;
            }
            cout<<endl<<endl;
            system("pause");
            system("cls");
        } while (true);
        
}

int main()
{
    menu2();
}