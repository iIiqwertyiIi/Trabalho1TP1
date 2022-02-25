#ifndef DOMAIN_H_INCLUDED
#define DOMAIN_H_INCLUDED

/**
 * @file domain.h
 * @author Nícolas Paulin Benatto
 * @author Gabriel Xavier Cardoso
 * @author Vanessa Paixão Costa
 * @brief Domínios pedidos no trabalho
 * @version 0.1
 * @date 2022-02-24
 * 
 * @copyright Copyright (c) Nícolas, Gabriel e Vanessa 2022
 * 
 */

#include <string>
#include <stdexcept>
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Classe Cidade
 * @class Cidade
 * @author Nícolas 200025627
 * 
 * Classe para o domínio Cidade
 */

class Cidade {
    private:
        inline static const vector<string> CIDADES = {
            "Hong Kong", "Bangkok", "Macau", "Singapura",
            "Londres", "Paris", "Dubai", "Delhi", "Istambul",
            "Kuala Lumpur", "Nova Iorque", "Antalya", "Mumbai",
            "Shenzhen", "Phuket"
        };
        string cidade;
        void validar(string);
    public:
        void setCidade(string);
        string getCidade() const;
};

inline string Cidade::getCidade() const {
    return cidade;
};

/**
 * @brief Classe Codigo
 * @class Codigo
 * @author Nícolas 200025627
 * 
 * Classe para o domínio Codigo
 */

class Codigo {
    private:
        inline static const string INVALIDO = "0000000";
        inline static const int TAMANHO = 7;
        string codigo;
        void validar(string);
    public:
        void setCodigo(string);
        string getCodigo() const;
};

inline string Codigo::getCodigo() const {
    return codigo;
};

/**
 * @brief Classe Data
 * @class Data
 * @author Gabriel 200046390
 * 
 * Classe para o domínio Data
 */

class Data {
    private:
        inline static const int TAMANHO = 11;
        inline static const vector<string> MESES = {
            "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul",
            "Ago", "Set", "Out", "Nov", "Dez"
        };
        string data;
        void validar(string);
    public:
        void setData(string);
        string getData() const;
};

inline string Data::getData() const {
    return data;
};

/**
 * @brief Classe Descricao
 * @class Descricao
 * @author Gabriel 200046390
 * 
 * Classe para o domínio Descrição
 */

class Descricao {
    private:
        static const int TAMANHO = 30;
        string descricao;
        void validar(string);
    public:
        void setDescricao(string);
        string getDescricao() const;
};

inline string Descricao::getDescricao() const {
    return descricao;
};

/**
 * @brief Classe Duracao
 * @class Duracao
 * @author Vanessa 200028286
 * 
 * Classe para o domínio Duracao
 */

class Duracao {
    private:
        inline static const vector<int> DURACOES = {
            30, 60, 90, 120, 180};
        int duracao;
        void validar(int);
    public:
        void setDuracao(int);
        int getDuracao() const;
};

inline int Duracao::getDuracao() const {
    return duracao;
};

/**
 * @brief Classe Email
 * @class Email
 * @author Vanessa 200028286
 * 
 * Classe para o domínio Email
 */

class Email {
    private:
        string email;
        void validar(string);
    public:
        void setEmail(string);
        string getEmail() const;
};

inline string Email::getEmail() const {
    return email;
};

/**
 * @brief Classe Endereco
 * @class Endereco
 * @author Nícolas 200025627
 * 
 * Classe para o domínio Endereco
 */

class Endereco {
    private:
        inline static const int TAMANHO_MAX = 20;
        string endereco;
        void validar(string);
    public:
        void setEndereco(string);
        string getEndereco() const;
};

inline string Endereco::getEndereco() const {
    return endereco;
};

/**
 * @brief Classe Horario
 * @class Horario
 * @author Nícolas 200025627
 * 
 * Classe para o domínio Horario
 */

class Horario {
    private:
        inline static const int LIMITE_HORA = 23;
        inline static const int LIMITE_MINUTO = 59;
        inline static const string DOIS_PONTOS = ":";
        inline static const int TAMANHO = 5;
        string horario;
        void validar(string);
    public:
        void setHorario(string);
        string getHorario() const;
};

inline string Horario::getHorario() const {
    return horario;
};

/**
 * @brief Classe Idioma
 * @class Idioma
 * @author Gabriel 200046390
 * 
 * Classe para o domínio Idioma
 */

class Idioma {
    private:
        inline static const vector<string> IDIOMAS = {
            "Inglês", "Ingles", "Chinês", "Chines", "Mandarim",
            "Hindi", "Espanhol", "Francês", "Frances", "Árabe",
            "Arabe", "Bengali", "Russo", "Português", "Portugues",
            "Indonésio", "Indonesio"
        };
        string idioma;
        void validar(string);
    public:
        void setIdioma(string);
        string getIdioma() const;
};

inline string Idioma::getIdioma() const {
    return idioma;
};

/**
 * @brief Classe Nome
 * @class Nome
 * @author Gabriel 200046390
 * 
 * Classe para o domínio Nome
 */

class Nome {
    private:
        static const int MIN = 5;
        static const int MAX = 20;
        string nome;
        void validar(string);
    public:
        void setNome(string);
        string getNome() const;
};

inline string Nome::getNome() const {
    return nome;
};

/**
 * @brief Classe Nota
 * @class Nota
 * @author Vanessa 200028286
 * 
 * Classe para o domínio Nota
 */

class Nota {
    private:
        inline static const vector<int> NOTAS = {0, 1, 2, 3, 4, 5};
        int nota;
        void validar(int);
    public:
        void setNota(int);
        int getNota() const;
};

inline int Nota::getNota() const {
    return nota;
};

/**
 * @brief Classe Senha
 * @class Senha
 * @author Nícolas 200025627
 * 
 * Classe para o domínio Senha
 */

class Senha {
    private:
        inline static const int TAMANHO = 6;
        string senha;
        void validar(string);
    public:
        void setSenha(string);
        string getSenha() const;
};

inline string Senha::getSenha() const {
    return senha;
};

/**
 * @brief Classe Titulo
 * @class Titulo
 * @author Vanessa 200028286
 * 
 * Classe para o domínio Titulo
 */

class Titulo {
    private:
        string titulo;
        void validar(string);
    public:
        void setTitulo(string);
        string getTitulo() const;
};

inline string Titulo::getTitulo() const {
    return titulo;
};

#endif
