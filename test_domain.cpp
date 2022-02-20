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
    catch(invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
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
    catch(invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
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
        cout << excessao.what() << endl;
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
        cout << excessao.what() << endl;
    };
};

void TUCodigo::testarInvalido3() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO_3);
        estado = FALHA;
    }
    catch(invalid_argument &excessao) {
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
    catch(invalid_argument &excessao) {
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
    catch(invalid_argument &excessao) {
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

void TUEndereco::setUp() {
    endereco = new Endereco();
    estado = SUCESSO;
};

void TUEndereco::tearDown() {
    delete endereco;
};

void TUEndereco::testarValido() {
    try {
        endereco->setEndereco(ENDERECO_VALIDO);
        if (endereco->getEndereco() != ENDERECO_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEndereco::testarInvalido1() {
    try {
        endereco->setEndereco(ENDERECO_INVALIDO_1);
        estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        if (endereco->getEndereco() == ENDERECO_INVALIDO_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEndereco::testarInvalido2() {
    try {
        endereco->setEndereco(ENDERECO_INVALIDO_2);
        estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        if (endereco->getEndereco() == ENDERECO_INVALIDO_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEndereco::testarInvalido3() {
    try {
        endereco->setEndereco(ENDERECO_INVALIDO_3);
        estado = FALHA;
    }
    catch(invalid_argument &excessao) {
        if (endereco->getEndereco() == ENDERECO_INVALIDO_3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUEndereco::run() {
    setUp();
    testarValido();
    testarInvalido1();
    testarInvalido2();
    testarInvalido3();
    tearDown();
    return estado;
}