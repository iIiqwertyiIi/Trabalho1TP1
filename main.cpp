#include <iostream>
#include "domain.h"
#include "test_domain.h"

using namespace std;

int main() {
    TUCidade testeA;
    switch (testeA.run()) {
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
            break;
        case TUCidade::FALHA: cout << "FALHA - CIDADE" << endl;
            break;
    };

    TUCodigo testeB;
    switch (testeB.run()) {
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCodigo::FALHA: cout << "FALHA - CODIGO" << endl;
            break;
    };

    TUDuracao testeDuracao;
    switch (testeDuracao.run()) {
        case TUDuracao::SUCESSO: cout << "SUCESSO - DURACAO" << endl;
            break;
        case TUDuracao::FALHA: cout << "FALHA - DURACAO" << endl;
            break;
    };
};
