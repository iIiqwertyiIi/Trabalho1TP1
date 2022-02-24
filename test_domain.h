#ifndef TEST_DOMAIN_H_INCLUDED
#define TEST_DOMAIN_H_INCLUDED

#include "domain.h"

using namespace std;

class TUCidade {
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

class TUCodigo {
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

class TUDescricao {
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

class TUIdioma {
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

class TUData {
    private:
        inline static const string DATA_VALIDA = "22-Fev-2022";
        inline static const string DATA_INVALIDA1 = "29-02-2022";
        inline static const string DATA_INVALIDA2 = "22-02-1999";
        inline static const string DATA_INVALIDA3 = "22-02-10000";
        Data *data;
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

class TUNome {
    private:
        inline static const string NOME_VALIDO = "Neymar Junior.";
        inline static const string NOME_INVALIDO_1 = "Esse Nome E Muito Grande Para Ser Um Nome";
        inline static const string NOME_INVALIDO_2 = "gabigol";
        inline static const string NOME_INVALIDO_3 = "Pele deveria";
        inline static const string NOME_INVALIDO_4 = "Pele Nao  Vai";
        inline static const string NOME_INVALIDO_5 = "Pele Nao .";
        inline static const string NOME_INVALIDO_6 = "Pele Nao Vai..";
        inline static const string NOME_INVALIDO_7 = "Neym4r Jun1or.";
        Nome *nome;
        int estado;
        void setUp();
        void tearDown();
        void testarValido();
        void testarInvalido1();
        void testarInvalido2();
        void testarInvalido3();
        void testarInvalido4();
        void testarInvalido5();
        void testarInvalido6();
        void testarInvalido7();
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

#endif
