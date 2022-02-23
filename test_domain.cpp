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
        data->setData(DATA_INVALIDA_1);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido2() {
    try {
        data->setData(DATA_INVALIDA_2);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido3() {
    try {
        data->setData(DATA_INVALIDA_3);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA_3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido4() {
    try {
        data->setData(DATA_INVALIDA_4);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA_4)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido5() {
    try {
        data->setData(DATA_INVALIDA_5);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA_5)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido6() {
    try {
        data->setData(DATA_INVALIDA_6);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA_6)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido7() {
    try {
        data->setData(DATA_INVALIDA_7);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA_7)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUData::testarInvalido8() {
    try {
        data->setData(DATA_INVALIDA_8);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (data->getData() == DATA_INVALIDA_8)
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
    testarInvalido4();
    testarInvalido5();
    testarInvalido6();
    testarInvalido7();
    testarInvalido8();
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

void TUEmail::setUp() {
    email = new Email();
    estado = SUCESSO;
};

void TUEmail::tearDown() {
    delete email;
};

void TUEmail::testarValido() {
    try {
        email->setEmail(EMAIL_VALIDO);
        if (email->getEmail() != EMAIL_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEmail::testarInvalido1() {
    try {
        email->setEmail(EMAIL_INVALIDO_1);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (email->getEmail() == EMAIL_INVALIDO_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEmail::testarInvalido2() {
    try {
        email->setEmail(EMAIL_INVALIDO_2);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (email->getEmail() == EMAIL_INVALIDO_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEmail::testarInvalido3() {
    try {
        email->setEmail(EMAIL_INVALIDO_3);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (email->getEmail() == EMAIL_INVALIDO_3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEmail::testarInvalido4() {
    try {
        email->setEmail(EMAIL_INVALIDO_4);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (email->getEmail() == EMAIL_INVALIDO_4)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEmail::testarInvalido5() {
    try {
        email->setEmail(EMAIL_INVALIDO_5);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (email->getEmail() == EMAIL_INVALIDO_5)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEmail::testarInvalido6() {
    try {
        email->setEmail(EMAIL_INVALIDO_6);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (email->getEmail() == EMAIL_INVALIDO_6)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEmail::testarInvalido7() {
    try {
        email->setEmail(EMAIL_INVALIDO_7);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (email->getEmail() == EMAIL_INVALIDO_7)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEmail::testarInvalido8() {
    try {
        email->setEmail(EMAIL_INVALIDO_8);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (email->getEmail() == EMAIL_INVALIDO_8)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUEmail::run() {
    setUp();
    testarValido();
    testarInvalido1();
    testarInvalido2();
    testarInvalido3();
    testarInvalido4();
    testarInvalido5();
    testarInvalido6();
    testarInvalido7();
    testarInvalido8();
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
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUEndereco::testarInvalido1() {
    try {
        endereco->setEndereco(ENDERECO_INVALIDO_1);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
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
    catch (invalid_argument &excessao) {
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
    catch (invalid_argument &excessao) {
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
};

void TUHorario::setUp() {
    horario = new Horario();
    estado = SUCESSO;
};

void TUHorario::tearDown() {
    delete horario;
};

void TUHorario::testarValido() {
    try {
        horario->setHorario(HORARIO_VALIDO);
        if (horario->getHorario() != HORARIO_VALIDO)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUHorario::testarInvalido1() {
    try {
        horario->setHorario(HORARIO_INVALIDO_1);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (horario->getHorario() == HORARIO_INVALIDO_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUHorario::testarInvalido2() {
    try {
        horario->setHorario(HORARIO_INVALIDO_2);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (horario->getHorario() == HORARIO_INVALIDO_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUHorario::testarInvalido3() {
    try {
        horario->setHorario(HORARIO_INVALIDO_3);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (horario->getHorario() == HORARIO_INVALIDO_3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUHorario::testarInvalido4() {
    try {
        horario->setHorario(HORARIO_INVALIDO_4);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (horario->getHorario() == HORARIO_INVALIDO_4)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUHorario::testarInvalido5() {
    try {
        horario->setHorario(HORARIO_INVALIDO_5);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (horario->getHorario() == HORARIO_INVALIDO_5)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUHorario::run() {
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

void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
};

void TUSenha::tearDown() {
    delete senha;
};

void TUSenha::testarValido() {
    try {
        senha->setSenha(SENHA_VALIDA);
        if (senha->getSenha() != SENHA_VALIDA)
            estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUSenha::testarInvalido1() {
    try {
        senha->setSenha(SENHA_INVALIDA_1);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (senha->getSenha() == SENHA_INVALIDA_1)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUSenha::testarInvalido2() {
    try {
        senha->setSenha(SENHA_INVALIDA_2);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (senha->getSenha() == SENHA_INVALIDA_2)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUSenha::testarInvalido3() {
    try {
        senha->setSenha(SENHA_INVALIDA_3);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (senha->getSenha() == SENHA_INVALIDA_3)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUSenha::testarInvalido4() {
    try {
        senha->setSenha(SENHA_INVALIDA_4);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (senha->getSenha() == SENHA_INVALIDA_4)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUSenha::testarInvalido5() {
    try {
        senha->setSenha(SENHA_INVALIDA_5);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (senha->getSenha() == SENHA_INVALIDA_5)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

void TUSenha::testarInvalido6() {
    try {
        senha->setSenha(SENHA_INVALIDA_6);
        estado = FALHA;
    }
    catch (invalid_argument &excessao) {
        if (senha->getSenha() == SENHA_INVALIDA_6)
            estado = FALHA;
        cout << excessao.what() << endl;
    };
};

int TUSenha::run() {
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
