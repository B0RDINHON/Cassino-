
#include <iostream>

using namespace std;

void menu();
void menusaldo();

int main()
{
    menu();
}


void menu() 
{
    int opcao;

        do {
            cout << "Cassino - Menu" << endl;
            cout << "1. Black Jack " << endl;
            cout << "2. Roleta" << endl;
            cout << "3. Slot" << endl;
            cout << "4. Saldo" << endl;
            cout << "5. Hack" << endl;
            cout << "6. Sair" << endl;

            cout << "Informe um numero: " << endl;
            cin >> opcao; 

            switch (opcao) 
            {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
                void menusaldo();

                break;
            case 5:

                break;
            case 6:

                break;
            
            
            }

        } while (opcao!=6);
}
void menusaldo() 
{
    int opsaldo;
    int saldo = 1000;
    cout << "1.Mostrar saldo" << endl;
    cout << "2.Depositar" << endl;
    cout << "3.Sacar" << endl;
    cout << "Informe um numero: " << endl;
    cin >> opsaldo;

    switch (opsaldo) 
    {
    case 1:
        std::cout << saldo;
    case 2:
        break;
    }
    

}
