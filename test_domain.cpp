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

void TUIdioma::setUp() {
    idioma = new Idioma();
    estado = SUCESSO;
};

void TUIdioma::tearDown() {
    delete idioma;
};

void TUIdioma::testarValido1() {
    try {
        idioma->setIdioma(IDIOMA_VALIDO1);
        if (idioma->getIdioma() != IDIOMA_VALIDO1) estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << "ERRO: " << excessao.what() << endl;
    };
};

void TUIdioma::testarValido2() {
    try {
        idioma->setIdioma(IDIOMA_VALIDO2);
        if (idioma->getIdioma() != IDIOMA_VALIDO2) estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << "ERRO: " << excessao.what() << endl;
    };
};

void TUIdioma::testarValido3() {
    try {
        idioma->setIdioma(IDIOMA_VALIDO3);
        if (idioma->getIdioma() != IDIOMA_VALIDO3) estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << "ERRO: " << excessao.what() << endl;
    };
};

void TUIdioma::testarValido4() {
    try {
        idioma->setIdioma(IDIOMA_VALIDO4);
        if (idioma->getIdioma() != IDIOMA_VALIDO4) estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << "ERRO: " << excessao.what() << endl;
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
        cout << "ERRO: " << excessao.what() << endl;
    };
};

int TUIdioma::run() {
    setUp();
    testarValido1();
    testarValido2();
    testarValido3();
    testarValido4();
    testarInvalido();
    tearDown();
    return estado;
};
