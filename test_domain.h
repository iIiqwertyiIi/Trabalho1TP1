#ifndef TEST_DOMAIN_H_INCLUDED
#define TEST_DOMAIN_H_INCLUDED

#include "domain.h"

using namespace std;

class TUCidade
{
private:
    inline static const string CIDADE_VALIDA = "Istambul";
    inline static const string CIDADE_INVALIDA = "São Paulo";
    Cidade *cidade;
    int estado;
    void setUp();
    void tearDown();
    void testarValido();
    void testarInvalido();

public:
    static const int SUCESSO = 1;
    static const int FALHA = 0;
    int run();
};

class TUCodigo
{
private:
    inline static const string CODIGO_VALIDO = "2586719";
    inline static const string CODIGO_INVALIDO_1 = "0000000";
    inline static const string CODIGO_INVALIDO_2 = "2586712";
    inline static const string CODIGO_INVALIDO_3 = "ASCII34";
    inline static const string CODIGO_INVALIDO_4 = "258671";
    inline static const string CODIGO_INVALIDO_5 = "258671938";
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarValido();
    void testarInvalido1();
    void testarInvalido2();
    void testarInvalido3();
    void testarInvalido4();
    void testarInvalido5();

public:
    static const int SUCESSO = 1;
    static const int FALHA = 0;
    int run();
};

class TUDescricao
{
private:
    inline static const string DESCRICAO_VALIDA = "Descricão válida";
    inline static const string DESCRICAO_INVALIDA_1 = "Descricao  inválida";
    inline static const string DESCRICAO_INVALIDA_2 = "Descricao inválida..";
    inline static const string DESCRICAO_INVALIDA_3 = "Essa descrição aqui será absurdamente inválida";
    Descricao *descricao;
    int estado;
    void setUp();
    void tearDown();
    void testarValido();
    void testarInvalido1();
    void testarInvalido2();
    void testarInvalido3();

public:
    static const int SUCESSO = 1;
    static const int FALHA = 0;
    int run();
};

class TUIdioma
{
private:
    inline static const string IDIOMA_VALIDO = "Português";
    inline static const string IDIOMA_INVALIDO = "Everson Zoio";
    Idioma *idioma;
    int estado;
    void setUp();
    void tearDown();
    void testarValido();
    void testarInvalido();

public:
    static const int SUCESSO = 1;
    static const int FALHA = 0;
    int run();
};

class TUTitulo
{
private:
    inline static const string TITULO_VALIDO = "este e um teste valido.";
    inline static const string TITULO_INVALIDO_1 = "Via  gem com amigos.";
    inline static const string TITULO_INVALIDO_2 = "eraumacasamuitoengracada";
    inline static const string TITULO_INVALIDO_3 = "vamosverse da..";
    inline static const string TITULO_INVALIDO_4 = "foi";
    inline static const string TITULO_INVALIDO_5 = "Viagem tranquila+";

    Titulo *titulo;
    int estado;
    void setUp();
    void tearDown();
    void testarValido();
    void testarInvalido1();
    void testarInvalido2();
    void testarInvalido3();
    void testarInvalido4();

public:
    static const int SUCESSO = 1;
    static const int FALHA = 0;
    int run();
};

#endif