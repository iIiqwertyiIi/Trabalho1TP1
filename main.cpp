#include "domain.h"
#include "test_domain.h"

using namespace std;

int main() {
    TUCidade testeA;
    switch(testeA.run()) {
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
            break;
        case TUCidade::FALHA: cout << "FALHA - CIDADE" << endl;
            break;
    };
    
    TUCodigo testeB;
    switch(testeB.run()) {
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCodigo::FALHA: cout << "FALHA - CODIGO" << endl;
            break;
    };
    
    TUDescricao testeDescricao;
    switch(testeDescricao.run()) {
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
            break;
        case TUDescricao::FALHA: cout << "FALHA - DESCRICAO" << endl;
            break;
    };
    
    TUIdioma testeIdioma;
    switch(testeIdioma.run()) {
        case TUIdioma::SUCESSO: cout << "SUCESSO - IDIOMA" << endl;
            break;
        case TUIdioma::FALHA: cout << "FALHA - IDIOMA" << endl;
            break;
    };

    TUData testeData;
    switch(testeData.run()) {
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
            break;
        case TUData::FALHA: cout << "FALHA - DATA" << endl;
            break;
    };

    TUNome testeNome;
    switch(testeNome.run()) {
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
            break;
        case TUNome::FALHA: cout << "FALHA - NOME" << endl;
            break;
    };
};
