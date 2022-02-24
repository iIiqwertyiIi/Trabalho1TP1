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
        if (idioma->getIdioma() != IDIOMA_VALIDO) estado = FALHA;
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

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
};

void TUData::tearDown() {
    delete data;
};

void TUData::testarValido() {
    try {
        data->setData(DATA_VALIDA);
        if (data->getData() != DATA_VALIDA) estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido1() {
    try {
        data->setData(DATA_INVALIDA1);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido2() {
    try {
        data->setData(DATA_INVALIDA2);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido3() {
    try {
        data->setData(DATA_INVALIDA3);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUData::run() {
    setUp();
    testarValido();
    testarInvalido1();
    testarInvalido2();
    testarInvalido3();
    tearDown();
    return estado;
};

void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
};

void TUNome::tearDown() {
    delete nome;
};

void TUNome::testarValido() {
    try {
        nome->setNome(NOME_VALIDO);
        if (nome->getNome() != NOME_VALIDO)
            estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUNome::testarInvalido1() {
    try {
        nome->setNome(NOME_INVALIDO_1);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (nome->getNome() == NOME_INVALIDO_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUNome::testarInvalido2() {
    try {
        nome->setNome(NOME_INVALIDO_2);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (nome->getNome() == NOME_INVALIDO_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUNome::testarInvalido3() {
    try {
        nome->setNome(NOME_INVALIDO_3);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (nome->getNome() == NOME_INVALIDO_3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUNome::testarInvalido4() {
    try {
        nome->setNome(NOME_INVALIDO_4);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (nome->getNome() == NOME_INVALIDO_4)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUNome::testarInvalido5() {
    try {
        nome->setNome(NOME_INVALIDO_5);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (nome->getNome() == NOME_INVALIDO_5)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUNome::testarInvalido6() {
    try {
        nome->setNome(NOME_INVALIDO_6);
        estado = FALHA;
    }

    catch (invalid_argument &excessao) {
        if (nome->getNome() == NOME_INVALIDO_6)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUNome::run() {
    setUp();
    testarValido();
    testarInvalido1();
    testarInvalido2();
    testarInvalido3();
    testarInvalido4();
    testarInvalido5();
    testarInvalido6();
    tearDown();
    return estado;
};
