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

void TUIdioma::setUp() {
    idioma = new Idioma();
    estado = SUCESSO;
};

void TUIdioma::tearDown() {
    delete idioma;
};

void TUIdioma::testarValido() {
    try {
        idioma->setIdioma(IDIOMA_VALIDO);
        if (idioma->getIdioma() != IDIOMA_VALIDO) estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        estado = FALHA;
    };
};

void TUIdioma::testarInvalido() {
    try {
        idioma->setIdioma(IDIOMA_INVALIDO);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (idioma->getIdioma() == IDIOMA_INVALIDO) estado = FALHA;
    };
};

int TUIdioma::run() {
    setUp();
    testarValido();
    testarInvalido();
    tearDown();
    return estado;
};
