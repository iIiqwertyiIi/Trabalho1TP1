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
            "Shenzhen", "Phuket"};
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
        string codigo;
        void validar(string);
    public:
        void setCodigo(string);
        string getCodigo() const;
};

inline string Codigo::getCodigo() const {
    return codigo;
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

class Idioma {
    private:
        inline static const vector<string> IDIOMAS = {
            "Inglês", "Ingles", "Chinês", "Chines", "Mandarim", "Hindi", "Espanhol",
            "Francês", "Frances", "Árabe", "Arabe", "Bengali", "Russo",
            "Português", "Portugues", "Indonésio", "Indonesio"};
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

#endif
