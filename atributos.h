#ifndef ATRIBUTOS_H
#define ATRIBUTOS_H

struct atributos
{
    int vida;
    int forca;
    int agilidade;
    int defesa;
    int inteligencia;
    int elemento;
    int dominio; // mostra o nível de domínio do elemento
};

struct avatar
{
    struct atributos atributos;
    int espirito; // proximidade com o mundo espiritual
};

struct dominador_ar
{
    struct atributos atributos;
    int espirito;
};

struct nao_dominador
{
    int vida;
    int forca;
    int agilidade;
    int defesa;
    int inteligencia;
    int tecnica;
    int dominio; // mostra o nível de domínio da técnica
};

void init_atributos_por_elemento(struct atributos *a, int elemento, int is_avatar);

#endif