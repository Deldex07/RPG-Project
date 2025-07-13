#include "equipamentos.h"

// Equipamentos neutros (usáveis por todos)
struct equipamento neutro_equip[] = {
    {"Espadas duplas largas", 1, 13, 0, 0, 0, 0, 0, 0},
    {"Armadura militar comum", 2, 0, 0, 0, 12, 0, 0, 0},
    {"Arco", 1, 9, 2, 0, 0, 0, 0, 0},
    {"Escudo", 3, 0, 0, 0, 6, 0, 0, 0}};

// Exclusivos da Nação do Fogo
struct equipamento fogo_equip[] = {
    {"Sabre flamejante", 1, 15, 0, 0, 0, 0, 1, 0},
    {"Guan dao", 1, 12, 0, 0, 0, 0, 1, 0},
    {"Dadao", 1, 14, 0, 0, 0, 0, 1, 0},
    {"Martelo", 1, 13, 0, 0, 0, 0, 1, 0},
    {"Jii", 1, 11, 0, 0, 0, 0, 1, 0},
    {"Kanabo", 1, 15, 0, 0, 0, 0, 1, 0},
    {"San gu cha", 1, 12, 0, 0, 0, 0, 1, 0},
    {"Facas de arremesso", 1, 8, 3, 0, 0, 0, 1, 0}};

// Exclusivos do Reino da Terra
struct equipamento terra_equip[] = {
    {"Espadas de gancho", 1, 11, 2, 0, 0, 0, 2, 0},
    {"Guan dao", 1, 12, 0, 0, 0, 0, 2, 0},
    {"Espada Borboleta", 1, 10, 1, 0, 0, 0, 2, 0},
    {"Martelo de guerra gêmeo", 1, 14, 0, 0, 0, 0, 2, 0},
    {"Besta", 1, 13, 0, 0, 0, 0, 2, 0},
    {"Armadura de cota de malha", 2, 0, 0, 0, 10, 0, 2, 0}};

// Exclusivos da Tribo da Água
struct equipamento agua_equip[] = {
    {"Cantíl de água", 4, 0, 0, 0, 0, 2, 3, 1}, // especial
    {"Colar de água", 3, 0, 0, 2, 0, 1, 3, 0},
    {"Machado", 1, 12, 0, 0, 0, 0, 3, 0},
    {"Adaga de mandíbula", 1, 9, 2, 0, 0, 0, 3, 0},
    {"Porrete", 1, 10, 0, 0, 0, 0, 3, 0},
    {"Machete", 1, 11, 1, 0, 0, 0, 3, 0},
    {"Cimitarra dente de baleia", 1, 13, 0, 0, 0, 0, 3, 0},
    {"Armadura de lobo", 2, 0, 1, 0, 8, 0, 3, 0},
    {"Grevas", 2, 0, 2, 0, 4, 0, 3, 0}};

// Exclusivos do Templo do Ar
struct equipamento ar_equip[] = {
    {"Planador", 4, 0, 2, 0, 0, 1, 4, 1},
    {"Manto de ar", 2, 0, 4, 0, 0, 2, 4, 0}};

// Equipamentos espirituais
struct equipamento espiritual[] = {
    {"Amuleto de Raava", 3, 0, 0, 0, 5, 5, 5, 1},
    {"Máscara Tartaruga-leão", 3, 0, 0, 0, 4, 3, 5, 1},
    {"Túnica do Avatar Wan", 2, 0, 0, 0, 5, 5, 5, 1}};