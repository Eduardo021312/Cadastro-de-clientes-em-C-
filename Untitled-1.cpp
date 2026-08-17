#include "cliente.h"
#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

int main(){

    int opcao; 

    	vector<cliente> loja; 

    do{          // inicia o laço até a condição do while 

        cout << "1 - Cadastrar Clientes"<< "\n";
        cout << "2 - Listar Clientes"<< "\n";
        cout << "3 - Sair"<< "\n";
        cin >> opcao;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch(opcao){ // opcoes...

            case 1:{
                cliente NovoCliente;

                cout << "Digite o nome do Cliente: " << "\n";
                getline (cin, NovoCliente.nome);

                cout << "Digite o CPF do Cliente: " << "\n";
                cin >> NovoCliente.cpf;

                cout << "Digite o numero de telefone do Cliente: " << "\n";
                cin >> NovoCliente.numero;

                cout << "Digite o Email do Cliente: " << "\n";
                cin >> NovoCliente.email;

                loja.push_back(NovoCliente);

                break;
            }
            case 2:{

                for( cliente c : loja){

                    cout << "\n";
                    cout << c.nome << endl;
                    cout << c.cpf << endl;
                    cout << c.numero << endl;
                    cout << c.email << endl;
                    cout << "\n";

                }
                break;
            }
            case 3:
                cout << "Encerrando Programa..."
                <<"\n";
                break;



        }

    }while (opcao!= 3); // so para de executar quando a opcao 3 for selecionada.

    return 0;



}