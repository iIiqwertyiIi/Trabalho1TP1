#ifndef TEST_DOMAIN_H_INCLUDED
#define TEST_DOMAIN_H_INCLUDED


#include "domain.h"

using namespace std;

class TUDescricao {
    private:
        inline static const string DESCRICAO_VALIDA = "Descricão válida";
        inline static const string DESCRICAO_INVALIDA = "Aqui tem um exemplo de descricão inválida";
        Descricao *descricao;
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

#endif