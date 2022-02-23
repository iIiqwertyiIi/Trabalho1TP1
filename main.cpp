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
    
    TUDescricao testeDescricao;
    switch(testeDescricao.run()) {
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
            break;
        case TUDescricao::FALHA: cout << "FALHA - DESCRICAO" << endl;
            break;
    };

    TUDuracao testeDuracao;
    switch (testeDuracao.run()) {
        case TUDuracao::SUCESSO: cout << "SUCESSO - DURACAO" << endl;
            break;
        case TUDuracao::FALHA: cout << "FALHA - DURACAO" << endl;
            break;
    };

    TUEndereco testeEndereco;
    switch(testeEndereco.run()) {
        case TUEndereco::SUCESSO: cout << "SUCESSO - ENDERECO" << endl;
            break;
        case TUEndereco::FALHA: cout << "FALHA - ENDERECO" << endl;
            break;
    };
    
    TUIdioma testeIdioma;
    switch(testeIdioma.run()) {
        case TUIdioma::SUCESSO: cout << "SUCESSO - IDIOMA" << endl;
            break;
        case TUIdioma::FALHA: cout << "FALHA - IDIOMA" << endl;
            break;
    };
};
