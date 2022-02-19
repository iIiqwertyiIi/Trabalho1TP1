#include <iostream>
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
};