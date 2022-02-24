#ifndef DOMAIN_H_INCLUDED
#define DOMAIN_H_INCLUDED

#include <string>
#include <stdexcept>
#include <iostream>
#include <vector>

using namespace std;

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

#endif
