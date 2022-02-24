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
        if (descricao->getDescricao() != DESCRICAO_VALIDA)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUDescricao::testarInvalido1() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA_1);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUDescricao::testarInvalido2() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA_2);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUDescricao::testarInvalido3() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA_3);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA_3)
            estado = FALHA;
        cout << excessao.what() << endl;
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
        if (idioma->getIdioma() != IDIOMA_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUIdioma::testarInvalido() {
    try {
        idioma->setIdioma(IDIOMA_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (idioma->getIdioma() == IDIOMA_INVALIDO)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUIdioma::run() {
    setUp();
    testarValido();
    testarInvalido();
    tearDown();
    return estado;
};

void TUTitulo::setUp() {
    titulo = new Titulo();
    estado = SUCESSO;
};

void TUTitulo::tearDown() {
    delete titulo;
};

void TUTitulo::testarValido() {
    try {
        titulo->setTitulo(TITULO_VALIDO);
        if (titulo->getTitulo() != TITULO_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUTitulo::testarInvalido1() {
    try {
        titulo->setTitulo(TITULO_INVALIDO_1);
        if (titulo->getTitulo() != TITULO_INVALIDO_1)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (titulo->getTitulo() == TITULO_INVALIDO_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUTitulo::testarInvalido2() {
    try {
        titulo->setTitulo(TITULO_INVALIDO_2);
        if (titulo->getTitulo() != TITULO_INVALIDO_2)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (titulo->getTitulo() == TITULO_INVALIDO_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUTitulo::testarInvalido3() {
    try {
        titulo->setTitulo(TITULO_INVALIDO_3);
        if (titulo->getTitulo() != TITULO_INVALIDO_3)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (titulo->getTitulo() == TITULO_INVALIDO_3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUTitulo::testarInvalido4() {
    try {
        titulo->setTitulo(TITULO_INVALIDO_4);
        if (titulo->getTitulo() != TITULO_INVALIDO_4)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (titulo->getTitulo() == TITULO_INVALIDO_4)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUTitulo::testarInvalido5() {
    try {
        titulo->setTitulo(TITULO_INVALIDO_5);
        if (titulo->getTitulo() != TITULO_INVALIDO_5)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (titulo->getTitulo() == TITULO_INVALIDO_5)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUTitulo::run() {
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
