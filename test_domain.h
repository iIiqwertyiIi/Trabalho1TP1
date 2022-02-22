#ifndef TEST_DOMAIN_H_INCLUDED
#define TEST_DOMAIN_H_INCLUDED


#include "domain.h"

using namespace std;

class TUDescricao {
    private:
        inline static const string DESCRICAO_VALIDA = "Descricão válida";
        inline static const string DESCRICAO_INVALIDA1 = "Descricao  inválida";
        inline static const string DESCRICAO_INVALIDA2 = "Descricao inválida..";
        inline static const string DESCRICAO_INVALIDA3 = "Essa descrição aqui será absurdamente inválida";
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
        inline static const string IDIOMA_VALIDO1 = "Português";
        inline static const string IDIOMA_VALIDO2 = "Portugues";
        inline static const string IDIOMA_VALIDO3 = "português";
        inline static const string IDIOMA_VALIDO4 = "portugues";
        inline static const string IDIOMA_INVALIDO = "Everson Zoio";
        Idioma *idioma;
        int estado;
        void setUp();
        void tearDown();
        void testarValido1();
        void testarValido2();
        void testarValido3();
        void testarValido4();
        void testarInvalido();

    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

#endif