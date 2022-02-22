#ifndef DOMAIN_H_INCLUDED
#define DOMAIN_H_INCLUDED


#include <string>
#include <stdexcept>
#include <iostream>
#include <vector>


using namespace std;

class Descricao {
    private:
        static const int LIMITE = 30;
        string descricao;
        void validar(string);

    public:
        void setDescricao(string);
        string getDescricao() const;
};

inline string Descricao::getDescricao() const { return descricao; };

class Idioma {
    private:
        inline static const vector<string> IDIOMAS = {
            "Inglês", "Ingles", "Chinês", "Chines", "Mandarim", "Hindi", "Espanhol", 
            "Francês", "Frances", "Árabe", "Arabe", "Bengali", "Russo",
            "Português", "Portugues", "Indonésio", "Indonesio"
        };
        string idioma;
        void validar(string);
  
    public:
        void setIdioma(string);
        string getIdioma() const;
};

inline string Idioma::getIdioma() const { return idioma; };

#endif // DOMAIN_H_INCLUDED
