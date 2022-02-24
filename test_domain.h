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

class TUData {
    private:
        inline static const string DATA_VALIDA = "22-Fev-2022";
        inline static const string DATA_INVALIDA_1 = "22-";
        inline static const string DATA_INVALIDA_2 = "AT-Fev-2022";
        inline static const string DATA_INVALIDA_3 = "22/Fev/2022";
        inline static const string DATA_INVALIDA_4 = "22-132-2022";
        inline static const string DATA_INVALIDA_5 = "22-Fev-ADBA";
        inline static const string DATA_INVALIDA_6 = "22-Aba-2022";
        inline static const string DATA_INVALIDA_7 = "22-Fev-1900";
        inline static const string DATA_INVALIDA_8 = "35-Jan-2022";
        Data *data;
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
        void testarInvalido8();
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


class TUDuracao {
    private:
        inline static const int DURACAO_VALIDA = 30;
        inline static const int DURACAO_INVALIDA = 45;
        Duracao *duracao;
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

class TUEmail {
    private:
        inline static const string EMAIL_VALIDO = "Locale@dominio.com";
        inline static const string EMAIL_INVALIDO_1 = "local_dominio2.org.br";
        inline static const string EMAIL_INVALIDO_2 = "email-invalido.por!excesso_de_caracteres+precisamos&de=outro#Exemplo@dominio3.org.br";
        inline static const string EMAIL_INVALIDO_3 = ".local@dominio4.com";
        inline static const string EMAIL_INVALIDO_4 = "local.@dominio5.com";
        inline static const string EMAIL_INVALIDO_5 = "lo..cal@dominio6.com";
        inline static const string EMAIL_INVALIDO_6 = "local@email-invalido.por1excesso.deCaracteres-precisamos2de3outro.Exemplo4nesses5caso6oErroEsta7no6Dominio-NaMinhaTerraTemPalmeirasOndeCantaOSabiaAsAvesQueAqui-Gorjeiam.NaoGorgeiam-comoLa-NossoCeuTemMaisEstrelas.NossasVarzeasTemMaisFloresNossosBosquesTemMaisVida7.org.br";
        inline static const string EMAIL_INVALIDO_7 = "local@dominio8..com";
        inline static const string EMAIL_INVALIDO_8 = "local@dominio*9.com";
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
        void testarInvalido6();
        void testarInvalido7();
        void testarInvalido8();
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

class TUNota {
    private:
        inline static const int NOTA_VALIDA = 2;
        inline static const int NOTA_INVALIDA = 7;
        Nota *nota;
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

class TUTitulo {
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
        void testarInvalido5();
    public:
        static const int SUCESSO = 1;
        static const int FALHA = 0;
        int run();
};

#endif
