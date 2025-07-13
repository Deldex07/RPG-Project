#include <stdio.h>
#include "atributos.h"

void init_atributos_por_elemento(struct atributos *a, int elemento, int is_avatar)
{
    // Vida base
    a->vida = is_avatar ? 100 : 80;

    // Atributos base médios
    a->forca = 8;
    a->agilidade = 8;
    a->defesa = 8;
    a->inteligencia = 8;

    // Ajuste para dominadores
    if (is_avatar)
    {
        switch (elemento)
        {
        case 1: // Água
            a->inteligencia += 3;
            a->defesa += 2;
            break;
        case 2: // Terra
            a->forca += 2;
            a->defesa += 3;
            break;
        case 3: // Fogo
            a->forca += 3;
            a->agilidade += 2;
            break;
        case 4: // Ar
            a->agilidade += 2;
            a->inteligencia += 3;
            break;
        default:
            // não dominador já está na média
            break;
        }
    }

    a->elemento = elemento;
    a->dominio = 1;
}