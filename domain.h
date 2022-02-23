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
        string codigo;
        void validar(string);
    public:
        void setCodigo(string);
        string getCodigo() const;
};

inline string Codigo::getCodigo() const {
    return codigo;
}

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
}

#endif
