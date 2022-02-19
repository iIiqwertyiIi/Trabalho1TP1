#include "test_domain.h"

void TUCidade::setUp() {
    cidade = new Cidade();
    estado = SUCESSO;
};

void TUCidade::tearDown() {
    delete cidade;
};

void TUCidade::testarValido() {
    try {
        cidade->setCidade(CIDADE_VALIDA);
        if (cidade->getCidade() != CIDADE_VALIDA)
            estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        estado = FALHA;
    };
};

void TUCidade::testarInvalido() {
    try {
        cidade->setCidade(CIDADE_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        if (cidade->getCidade() == CIDADE_INVALIDA)
            estado = FALHA;
    };
};

int TUCidade::run() {
    setUp();
    testarValido();
    testarInvalido();
    tearDown();
    return estado;
};