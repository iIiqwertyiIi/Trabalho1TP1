#include "domain.h"
#include <ctype.h>

void Cidade::validar(string cidade) {
    int valido = 0;
    for (int i = 0; i < CIDADES.size(); i++)
        if (cidade == CIDADES[i])
            valido = 1;
    if (valido == 0)
        throw invalid_argument("Cidade " + cidade + " inválida");
};

void Cidade::setCidade(string cidade) {
    validar(cidade);
    this->cidade = cidade;
};

void Codigo::validar(string codigo) {
    vector<int> array = {};
    int soma = 0;
    int verificador = 0;
    if (codigo.length() != 7)
        throw invalid_argument("Código " + codigo + " com tamanho diferente de 7");
    for (int i = 0; i < codigo.length(); i++) {
        int a = codigo[i];
        if (a < 48 || a > 57)
            throw invalid_argument("Código " + codigo + " com dígitos diferentes de números");
        array.push_back(codigo[i] - '0');
    };
    for (int j = 0; j < 6; j++)
        soma += array[j];
    verificador = soma % 10;
    if (codigo == INVALIDO)
        throw invalid_argument("Código " + codigo + " não existe");
    if (verificador != array[6])
        throw invalid_argument("Código " + codigo + " com verificador errado");
};

void Codigo::setCodigo(string codigo) {
    validar(codigo);
    this->codigo = codigo;
};

void Email::validar(string email) {
    int position = 0;
    for (int i = 0; i < email.length(); i++) {
        if (email[i] == '@') {
            position = i;
            break;
        };
    };
    if ((position == 0) or (position == email.length()))
        throw invalid_argument("Email " + email + " com formato inválido");
    string locale = email.substr(0, position);
    string domain = email.substr(position + 1, -1);
    if (locale.length() > 64)
        throw invalid_argument("Parte local " + locale + " precisa ter no máximo 64 caracteres");
    if (domain.length() > 253)
        throw invalid_argument("Domínio " + domain + " precisa ter no máximo 253 caracteres");
    if ((locale[0] == '.') or (locale.back() == '.'))
        throw invalid_argument("Parte local " + locale + " não pode conter '.' no primeiro ou ultimo caractere");
    if (domain[0] == '.')
        throw invalid_argument("Dominio " + domain + " não pode conter '.' no primeiro caractere");
    for (int i = 0; i < locale.length() - 1; i++)
        if ((locale[i] == '.') and (locale[i + 1] == '.'))
            throw invalid_argument("Parte local " + locale + " não pode conter '.' seguidos");
    for (int i = 0; i < domain.length() - 1; i++)
        if ((domain[i] == '.') and (domain[i + 1] == '.'))
            throw invalid_argument("Dominio " + domain + " não pode conter '.' seguidos");
    for (int i = 0; i < domain.length(); i++)
        if ((!isalpha(domain[i]) and (!isdigit(domain[i])) and (domain[i] != '-') and (domain[i] != '.')))
            throw invalid_argument("Dominio " + domain + " contém caracteres inválidos");
    for (int i = 0; i < locale.length(); i++)
        if ((!isalpha(locale[i]) and (!isdigit(locale[i])) and (locale[i] != '!') and (locale[i] != '#') and (locale[i] != '-') and (locale[i] != '.') and (locale[i] != '$') and (locale[i] != '%') and (locale[i] != '&') and (int(locale[i]) != 39) and (locale[i] != '*') and (locale[i] != '+') and (locale[i] != '/') and (locale[i] != '=') and (locale[i] != '?') and (locale[i] != '^') and (locale[i] != '_') and (locale[i] != '`') and (locale[i] != '{') and (locale[i] != '|') and (locale[i] != '}') and (locale[i] != '~')))
            throw invalid_argument("Parte local " + domain + " contém caracteres inválidos");
};

void Email::setEmail(string email) {
    validar(email);
    this->email = email;
};
