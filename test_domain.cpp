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

void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
};

void TUCodigo::tearDown() {
    delete codigo;
};

void TUCodigo::testarValido() {
    try {
        codigo->setCodigo(CODIGO_VALIDO);
        if (codigo->getCodigo() != CODIGO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        estado = FALHA;
    };
};

void TUCodigo::testarInvalido1() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO_1);
        estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        if (codigo->getCodigo() == CODIGO_INVALIDO_1)
            estado = FALHA;
    };
};

void TUCodigo::testarInvalido2() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO_2);
        estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        if (codigo->getCodigo() == CODIGO_INVALIDO_2)
            estado = FALHA;
    };
};

int TUCodigo::run() {
    setUp();
    testarValido();
    testarInvalido1();
    testarInvalido2();
    tearDown();
    return estado;
};