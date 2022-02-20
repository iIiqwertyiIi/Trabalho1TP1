#include <iostream>
#include "domain.h"
#include "test_domain.h"

using namespace std;

int main() {
    TUCidade testeCidade;
    switch(testeCidade.run()) {
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
            break;
        case TUCidade::FALHA: cout << "FALHA - CIDADE" << endl;
            break;
    };

    TUCodigo testeCodigo;
    switch(testeCodigo.run()) {
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCodigo::FALHA: cout << "FALHA - CODIGO" << endl;
            break;
    };

    TUEndereco testeEndereco;
    switch(testeEndereco.run()) {
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
            break;
        case TUEndereco::FALHA: cout << "FALHA - ENDERECO" << endl;
            break;
    };
};
