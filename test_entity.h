#ifndef TEST_ENTITY_H_INCLUDED
#define TEST_ENTITY_H_INCLUDED

#include "entity.h"

using namespace std;

class TUAvaliacao {
    private:
        inline static const string CODIGO_VALIDO = "2586719";
        inline static const int NOTA_VALIDA = 2;
        inline static const string DESCRICAO_VALIDA = "Descricão válida";
        Avaliacao *avaliacao;
        int estado;
        void setUp();
        void tearDown();
        void testarSucesso();
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

class TUExcursao {
    private:
        inline static const string CODIGO_VALIDO = "2586719";
        inline static const string TITULO_VALIDO = "este e um teste valido.";
        inline static const int NOTA_VALIDA = 2;
        inline static const string CIDADE_VALIDA = "Istambul";
        inline static const int DURACAO_VALIDA = 30;
        inline static const string DESCRICAO_VALIDA = "Descricão válida";
        inline static const string ENDERECO_VALIDO = "Rua Que eu Quiser";
        Excursao *excursao;
        int estado;
        void setUp();
        void tearDown();
        void testarSucesso();
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

class TUSessao {
    private:
        inline static const string CODIGO_VALIDO = "2586719";
        inline static const string DATA_VALIDA = "22-Fev-2022";
        inline static const string HORARIO_VALIDO = "18:37";
        inline static const string IDIOMA_VALIDO = "Português";
        Sessao *sessao;
        int estado;
        void setUp();
        void tearDown();
        void testarSucesso();
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

class TUUsuario {
    private:
        inline static const string NOME_VALIDO = "Neymar Junior.";
        inline static const string EMAIL_VALIDO = "Locale@dominio.com";
        inline static const string SENHA_VALIDA = "JIst87";
        Usuario *usuario;
        int estado;
        void setUp();
        void tearDown();
        void testarSucesso();
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

#endif