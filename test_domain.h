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
        Codigo *codigo;
        int estado;
        void setUp();
        void tearDown();
        void testarValido();
        void testarInvalido1();
        void testarInvalido2();
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

#endif