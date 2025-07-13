#ifndef EQUIPAMENTOS_H
#define EQUIPAMENTOS_H

struct equipamento
{
    char nome[50];
    int tipo;          // 1: arma, 2: armadura, 3: acessório, 4: especial
    int forcab;        // bonus de força
    int agilidadeb;    // bonus de agilidade
    int inteligenciab; // bonus de inteligência
    int defesab;       // bonus de defesa
    int espiritob;     // bônus de espírito
    int origem;        // 1: Fogo, 2: Terra, 3: Água, 4: Ar, 0: Neutro, 5: Espiritual
    int exclusivo;     // 1: exclusivo (planador/cantil), 0: comum
};

// Equipamentos por nação
extern struct equipamento fogo_equip[];
extern struct equipamento terra_equip[];
extern struct equipamento agua_equip[];
extern struct equipamento ar_equip[];

// Equip neutros (usáveis por todos)
extern struct equipamento neutro_equip[];

// Equipamentos espirituais
extern struct equipamento espiritual[];

#endif