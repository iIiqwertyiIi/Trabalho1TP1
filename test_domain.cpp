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
        cout << "ERRO: " << excessao.what() << endl;
    };
};

void TUDescricao::testarInvalido1() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA1);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA1)
            estado = FALHA;
        cout << "ERRO: " << excessao.what() << endl;
    };
};

void TUDescricao::testarInvalido2() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA2);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA2)
            estado = FALHA;
        cout << "ERRO: " << excessao.what() << endl;
    };
};

void TUDescricao::testarInvalido3() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA3);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA3)
            estado = FALHA;
        cout << "ERRO: " << excessao.what() << endl;
    };
};

int TUDescricao::run() {
    setUp();
    testarValido();
    testarInvalido1();
    testarInvalido2();
    testarInvalido3();
    tearDown();
    return estado;
};