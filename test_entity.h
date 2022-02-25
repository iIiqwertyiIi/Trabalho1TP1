#ifndef TEST_ENTITY_H_INCLUDED
#define TEST_ENTITY_H_INCLUDED

/**
 * @file test_entity.h
 * @author Nícolas Paulin Benatto
 * @author Gabriel Xavier Cardoso
 * @author Vanessa Paixão Costa
 * @brief Testes de Unidade para as Entidades
 * @version 0.1
 * @date 2022-02-24
 * 
 * @copyright Copyright (c) Nícolas, Gabriel e Vanessa 2022
 * 
 */

#include "entity.h"

using namespace std;

/**
 * @brief Teste de Unidade da classe Avaliacao
 * @class TUAvaliacao
 * @author Vanessa 200028286
 * 
 * Teste de Unidade para a entidade Avaliacao, com domínios Codigo, Nota e Descricao válidos
 */

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

/**
 * @brief Teste de Unidade da classe Excursao
 * @class TUExcursao
 * @author Gabriel 200046390
 * 
 * Teste de Unidade para a entidade Excursao, com domínios Codigo, Titulo, Nota, Cidade, Duracao, Descricao e Endereco válidos
 */

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

/**
 * @brief Teste de Unidade da classe Sessao
 * @class TUSessao
 * @author Nícolas 200025627
 * 
 * Teste de Unidade para a entidade Sessao, com domínios Codigo, Data, Horario e Idioma válidos
 */

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

/**
 * @brief Teste de Unidade da classe Usuario
 * @class TUUsuario
 * @author Nícolas 200025627
 * 
 * Teste de Unidade para a entidade Usuario contém domínios Nome, Email e Senha válidos
 */

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