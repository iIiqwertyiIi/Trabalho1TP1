#include <iostream>
#include "domain.h"
#include "test_domain.h"


using namespace std;

int main() {
    TUDescricao testeDescricao;
    switch(testeDescricao.run()) {
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
            break;
        case TUDescricao::FALHA: cout << "FALHA - DESCRICAO" << endl;
            break;
    };
};