#include "test_domain.h"


void TUDescricao::setUp() {
    descricao = new Descricao();
    estado = SUCESSO;
};

void TUDescricao::tearDown() {
    delete descricao;
};

void TUDescricao::testarValido() {
    try {
        descricao->setDescricao(DESCRICAO_VALIDA);
        if (descricao->getDescricao() != DESCRICAO_VALIDA) estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        estado = FALHA;
    };
};

void TUDescricao::testarInvalido() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA) estado = FALHA;
    };
};

int TUDescricao::run() {
    setUp();
    testarValido();
    testarInvalido();
    tearDown();
    return estado;
};