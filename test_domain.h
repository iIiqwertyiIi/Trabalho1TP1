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

class TUEndereco {
    private:
        inline static const string ENDERECO_VALIDO = "Rua Que eu Quiser";
        inline static const string ENDERECO_INVALIDO_1 = "Rua  Com 2 Espaços";
        inline static const string ENDERECO_INVALIDO_2 = "Rua .. Com 2 Pontos";
        inline static const string ENDERECO_INVALIDO_3 = "Rua Com Mais de 20 Caracteres";
        Endereco *endereco;
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

class TUHorario {
    private:
        inline static const string HORARIO_VALIDO = "18:37";
        inline static const string HORARIO_INVALIDO_1 = "61";
        inline static const string HORARIO_INVALIDO_2 = "18378";
        inline static const string HORARIO_INVALIDO_3 = "SDA48";
        inline static const string HORARIO_INVALIDO_4 = "25:37";
        inline static const string HORARIO_INVALIDO_5 = "18:62";
        Horario *horario;
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

class TUSenha {
    private:
        inline static const string SENHA_VALIDA = "JIst87";
        inline static const string SENHA_INVALIDA_1 = "1aA";
        inline static const string SENHA_INVALIDA_2 = "16bT!y";
        inline static const string SENHA_INVALIDA_3 = "15aAtA";
        inline static const string SENHA_INVALIDA_4 = "ATsioE";
        inline static const string SENHA_INVALIDA_5 = "168ato";
        inline static const string SENHA_INVALIDA_6 = "168ATO";
        Senha *senha;
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
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

#endif