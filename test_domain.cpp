#include "test_domain.h"
#include <iostream>

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
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUCidade::testarInvalido() {
    try {
        cidade->setCidade(CIDADE_INVALIDA);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (cidade->getCidade() == CIDADE_INVALIDA)
            estado = FALHA;
        cout << excessao.what() << endl;
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
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUCodigo::testarInvalido1() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO_1);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (codigo->getCodigo() == CODIGO_INVALIDO_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUCodigo::testarInvalido2() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO_2);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (codigo->getCodigo() == CODIGO_INVALIDO_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUCodigo::testarInvalido3() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO_3);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (codigo->getCodigo() == CODIGO_INVALIDO_3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUCodigo::testarInvalido4() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO_4);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (codigo->getCodigo() == CODIGO_INVALIDO_4)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUCodigo::testarInvalido5() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO_5);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (codigo->getCodigo() == CODIGO_INVALIDO_5)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUCodigo::run() {
    setUp();
    testarValido();
    testarInvalido1();
    testarInvalido2();
    testarInvalido3();
    testarInvalido4();
    testarInvalido5();
    tearDown();
    return estado;
};

void TUDuracao::setUp() {
    duracao = new Duracao();
    estado = SUCESSO;
};

void TUDuracao::tearDown() {
    delete duracao;
};

void TUDuracao::testarValido() {
    try {
        duracao->setDuracao(DURACAO_VALIDA);
        if (duracao->getDuracao() != DURACAO_VALIDA)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUDuracao::testarInvalido() {
    try {
        duracao->setDuracao(DURACAO_INVALIDA);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (duracao->getDuracao() == DURACAO_INVALIDA)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUDuracao::run() {
    setUp();
    testarValido();
    testarInvalido();
    tearDown();
    return estado;
};
