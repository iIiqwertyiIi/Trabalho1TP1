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

class TUEmail
{
private:
    inline static const string EMAIL_VALIDO = "local@dominio.com";
    inline static const string EMAIL_INVALIDO_1 = "local_dominio.org.br";
    inline static const string EMAIL_INVALIDO_2 = "email-invalido.por!excesso_de_caracteres+precisamos&de=outro#Exemplo@dominio.org.br";
    inline static const string EMAIL_INVALIDO_3 = ".local@dominio.com";
    inline static const string EMAIL_INVALIDO_4 = "local.@dominio.com";
    inline static const string EMAIL_INVALIDO_5 = "lo..cal@dominio.com";
    inline static const string EMAIL_INVALIDO_6 = "local@email-invalido.por1excesso.deCaracteres-precisamos2de3outro.Exemplo4nesses5caso6oErroEsta7no6Dominio-NaMinhaTerraTemPalmeirasOndeCantaOSabiaAsAvesQueAqui-Gorjeiam.NaoGorgeiam-comoLa-NossoCeuTemMaisEstrelas.NossasVarzeasTemMaisFloresNossosBosquesTemMaisVida.org.br";
    inline static const string EMAIL_INVALIDO_7 = "local@dominio..com";
    Email *email;
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

#endif