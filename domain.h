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

#endif // DOMAIN_H_INCLUDED
