#include <iostream>
#include "domain.h"
#include "test_domain.h"


using namespace std;

int main() {
    TUDescricao teste1;
    switch(teste1.run()) {
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
            break;
        case TUDescricao::FALHA: cout << "FALHA - DESCRICAO" << endl;
            break;
    };
};