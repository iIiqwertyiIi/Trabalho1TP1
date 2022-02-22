#ifndef DOMAIN_H_INCLUDED
#define DOMAIN_H_INCLUDED

#include <stdexcept>
#include <string>
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

#endif