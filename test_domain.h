#ifndef TEST_DOMAIN_H_INCLUDED
#define TEST_DOMAIN_H_INCLUDED

/**
 * @file test_domain.h
 * @author Nícolas Paulin Benatto
 * @author Gabriel Xavier Cardoso
 * @author Vanessa Paixão Costa
 * @brief Testes de Unidade para os Domínios
 * @version 0.1
 * @date 2022-02-24
 * 
 * @copyright Copyright (c) Nícolas, Gabriel e Vanessa 2022
 * 
 */

#include "domain.h"

using namespace std;

/**
 * @brief Teste de Unidade da classe Cidade
 * @class TUCidade
 * @author Nícolas 200025627
 * 
 * Teste de Unidade para o domínio Cidade com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Codigo
 * @class TUCodigo
 * @author Nícolas 200025627
 * 
 * Teste de Unidade para o domínio Codigo com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Data
 * @class TUData
 * @author Gabriel 200046390
 * 
 * Teste de Unidade para o domínio Data com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Descricao
 * @class TUDescricao
 * @author Gabriel 200046390
 * 
 * Teste de Unidade para o domínio Descrição com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Duracao
 * @class TUDuracao
 * @author Vanessa 200028286
 * 
 * Teste de Unidade para o domínio Duracao com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Email
 * @class TUEmail
 * @author Vanessa 200028286
 * 
 * Teste de Unidade para o domínio Email com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Endereco
 * @class TUEndereco
 * @author Nícolas 200025627
 * 
 * Teste de Unidade para o domínio Endereco com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Horario
 * @class TUHorario
 * @author Nícolas 200025627
 * 
 * Teste de Unidade para o domínio Horario com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Idioma
 * @class TUIdioma
 * @author Gabriel 200046390
 * 
 * Teste de Unidade para o domínio Idioma com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Nome
 * @class TUNome
 * @author Gabriel 200046390
 * 
 * Teste de Unidade para o domínio Nome com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Nota
 * @class TUNota
 * @author Vanessa 200028286
 * 
 * Teste de Unidade para o domínio Nota com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Senha
 * @class TUSenha
 * @author Nícolas 200025627
 * 
 * Teste de Unidade para o domínio Senha com tentativas válidas e inválidas
 */

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

/**
 * @brief Teste de Unidade da classe Titulo
 * @class TUTitulo
 * @author Vanessa 200028286
 * 
 * Teste de Unidade para o domínio Titulo com tentativas válidas e inválidas
 */

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
