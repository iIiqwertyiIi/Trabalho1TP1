#include "domain.h"
#include <ctype.h>

void Cidade::validar(string cidade) {
    bool valido = false;
    for (int i = 0; i < CIDADES.size(); i++)
        if (cidade == CIDADES[i])
            valido = true;
    if (valido == false)
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
    if (codigo.length() != TAMANHO)
        throw invalid_argument("Código " + codigo + " com tamanho inválido");
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

void Data::validar(string data) {
    int dia, ano;
    string mes;
    bool verifica_dia = false;
    bool verifica_mes = false;
    if (data.length() != TAMANHO)
        throw invalid_argument("Data " + data + " inválida");
    for (int i = 0; i < data.length(); i++) {
        int a = data[i];
        if (i < 2 && (a < 48 || a > 57))
            throw invalid_argument("Data " + data + " tem dia não numérico");
        if ((i == 2 || i == 6) && a != 45)
            throw invalid_argument("Data " + data + " tem formato inválido");
        if ((i > 2 && i < 6) && (a < 65 || a > 90) && (a < 97 || a > 122))
            throw invalid_argument("Data " + data + " tem mês não alfabético");
        if (i > 6  && (a < 48 || a > 57))
            throw invalid_argument("Data " + data + " tem ano não numérico");
    };
    dia = stoi(data.substr(0, 2));
    mes = data.substr(3, 3);
    ano = stoi(data.substr(7, 4));
    for (int j = 0; j < MESES.size(); j++)
        if (mes == MESES[j])
            verifica_mes = true;
    if (verifica_mes == false)
        throw invalid_argument("Data " + data + " tem mês inválido");
    if (ano < 2000 && ano > 9999)
        throw invalid_argument("Data " + data + " tem ano inválido");
    if (ano >= 2000 && ano <= 9999) {
        if ((dia >= 1 && dia <= 31) && (mes == "Jan" || mes == "Mar" || mes == "Mai" || mes == "Jul" || mes == "Ago" || mes == "Out" || mes == "Dez"))
            verifica_dia = true;
        else if ((dia >= 1 && dia <= 30) && (mes == "Abr" || mes == "Jun" || mes == "Set" || mes == "Nov"))
            verifica_dia = true;
        else if ((dia >= 1 && dia <= 28) && (mes == "Fev"))
            verifica_dia = true;
        else if ((dia == 29 && mes == "Fev") && (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)))
            verifica_dia = true;
    };
    if (verifica_dia == false)
        throw invalid_argument("Data " + data + " com dia inválido");
};

void Data::setData(string data) {
    validar(data);
    this->data = data;
};

void Descricao::validar(string descricao) {
    if (descricao.length() > TAMANHO)
        throw invalid_argument("Descrição " + descricao + " com tamanho inválido");
    if (descricao.find("  ") != std::string::npos)
        throw invalid_argument("Descrição " + descricao + " contém dois espaços consecutivos");
    if (descricao.find("..") != std::string::npos)
        throw invalid_argument("Descrição " + descricao + " contém dois pontos consecutivos");
};

void Descricao::setDescricao(string descricao) {
    validar(descricao);
    this->descricao = descricao;
};

void Duracao::validar(int duracao) {
    int valido = 0;
    for (int i = 0; i < DURACOES.size(); i++)
        if (duracao == DURACOES[i])
            valido = 1;
    if (valido == 0)
        throw invalid_argument("Duração " + duracao + " inválida - necessário que seja um dos valores: (30, 60, 90, 120, 180)");
};

void Duracao::setDuracao(int duracao) {
    validar(duracao);
    this->duracao = duracao;
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

void Endereco::validar(string endereco) {
    if (endereco.length() > TAMANHO_MAX)
        throw invalid_argument("Endereço " + endereco + " maior que o limite de caracteres");
    if (endereco.find("  ") != std::string::npos)
        throw invalid_argument("Endereço " + endereco + " contém dois espaços consecutivos");
    if (endereco.find("..") != std::string::npos)
        throw invalid_argument("Endereço " + endereco + " contém dois pontos consecutivos");
};

void Endereco::setEndereco(string endereco) {
    validar(endereco);
    this->endereco = endereco;
};

void Horario::validar(string horario) {
    if (horario.length() != TAMANHO)
        throw invalid_argument("Horário " + horario + " tem tamanho inválido");
    for (int i = 0; i < horario.length(); i++) {
        int a = horario[i];
        if (i == 2 && horario[i] != DOIS_PONTOS[0])
            throw invalid_argument("Horário " + horario + " não tem dois pontos separando hora e minuto");
        if (i != 2 && (a < 48 || a > 57))
            throw invalid_argument("Horário " + horario + " possui caracteres não numéricos na hora ou minuto");
    };
    if (stoi(horario.substr(0, 2)) > LIMITE_HORA)
        throw invalid_argument("Horário " + horario + " tem hora inválida");
    if (stoi(horario.substr(3, 2)) > LIMITE_MINUTO)
        throw invalid_argument("Horário " + horario + " tem minuto inválido");
};

void Horario::setHorario(string horario) {
    validar(horario);
    this->horario = horario;
};

void Idioma::validar(string idioma) {
    bool verifica = false;
    for (int i = 0; i < IDIOMAS.size(); i++)
        if (idioma == IDIOMAS[i])
            verifica = true;
    if (verifica == false)
        throw invalid_argument("Idioma " + idioma + " inválido");
};

void Idioma::setIdioma(string idioma) {
    validar(idioma);
    this->idioma = idioma;
};

void Nota::validar(int nota) {
    bool valido = false;
    for (int i = 0; i < NOTAS.size(); i++)
        if (nota == NOTAS[i])
            valido = true;
    if (valido == false)
        throw invalid_argument("Nota " + nota + " inválida - necessário que seja um dos valores: [0, 1, 2, 3, 4, 5]");
};

void Nota::setNota(int nota) {
    validar(nota);
    this->nota = nota;
};

void Senha::validar(string senha) {
    vector<char> array {};
    bool maiuscula = false;
    bool minuscula = false;
    bool digito = false;
    if (senha.length() != TAMANHO)
        throw invalid_argument("Senha " + senha + " tem tamanho inválido");
    for (int i = 0; i < senha.length(); i++) {
        int a = senha[i];
        if (a > 47 && a < 58 && digito == false)
            digito = true;
        if (a > 64 && a < 91 && maiuscula == false)
            maiuscula = true;
        if (a > 96 && a < 123 && minuscula == false)
            minuscula = true;
        if ((a < 48 || a > 57) && (a < 65 || a > 90) && (a < 97 || a > 122))
            throw invalid_argument("Senha " + senha + " tem caractere inválido");
        for (int j = 0; j < array.size(); j++) {
            if (senha[i] == array[j])
                throw invalid_argument("Senha " + senha + " não pode ter caracteres repetidos");
        };
        array.push_back(senha[i]);
    };
    if (digito == false)
        throw invalid_argument("Senha " + senha + " precisa ter um dígito");
    if (maiuscula == false)
        throw invalid_argument("Senha " + senha + " precisa ter uma letra maiúscula");
    if (minuscula == false)
        throw invalid_argument("Senha " + senha + " precisa ter uma letra minúscula");
};

void Senha::setSenha(string senha) {
    validar(senha);
    this->senha = senha;
};

void Titulo::validar(string titulo) {
    int qtdLetras = 0;
    for (int i = 0; i < titulo.length(); i++)
        if (isalpha(titulo[i]))
            qtdLetras++;
    if (qtdLetras > 20)
        throw invalid_argument("Titulo " + titulo + " precisa ter menos de 20 letras");
    if (qtdLetras < 5)
        throw invalid_argument("Titulo " + titulo + " precisa ter mais de 5 letras");
    for (int i = 0; i < titulo.length(); i++)
        if ((!isalpha(titulo[i])) and (titulo[i] != '.') and (titulo[i] != ' '))
            throw invalid_argument("Título " + titulo + " contém caracteres inválidos");
    if (titulo.find("  ") != std::string::npos)
        throw invalid_argument("Título " + titulo + " não pode conter espaços em branco em sequência");
    if (titulo.find("..") != std::string::npos)
        throw invalid_argument("Título " + titulo + " não pode conter '.' em sequencia");
};

void Titulo::setTitulo(string titulo) {
    validar(titulo);
    this->titulo = titulo;
};
