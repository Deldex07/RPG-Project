#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "atributos.h"
#include "equipamentos.h"

// funções auxiliares
void mostrar_ficha_avatar(struct avatar a);
void mostrar_ficha_avatar(struct avatar a)
{
    printf("\n=== SUA FICHA DE PERSONAGEM ===\n");
    printf("Voce e o AVATAR!\n");
    printf("Vida: %d\n", a.atributos.vida);
    printf("Força: %d\n", a.atributos.forca);
    printf("Agilidade: %d\n", a.atributos.agilidade);
    printf("Defesa: %d\n", a.atributos.defesa);
    printf("Inteligencia: %d\n", a.atributos.inteligencia);
    printf("Elemento: %d\n", a.atributos.elemento);
    printf("Dominio: %d\n", a.atributos.dominio);
    printf("Espirito: %d\n", a.espirito);
}

void mostrar_ficha_geral(struct atributos p, int is_avatar);
void mostrar_ficha_geral(struct atributos p, int is_avatar)
{
    printf("\n=== SUA FICHA DE PERSONAGEM ===\n");
    if (!is_avatar)
        printf("Voce NAO e o Avatar.\n");
    printf("Vida: %d\n", p.vida);
    printf("Forca: %d\n", p.forca);
    printf("Agilidade: %d\n", p.agilidade);
    printf("Defesa: %d\n", p.defesa);
    printf("Inteligencia: %d\n", p.inteligencia);
    printf("Elemento: %d\n", p.elemento);
    printf("Dominio: %d\n", p.dominio);
}

int main()
{
    srand(time(NULL)); // gerador de aleatoriedade
    int elemento, genero, i, local;
    int is_avatar = (rand() % 100 < 10); // 10% de chance

    // arrays de locais
    const char *locais_agua[] = {"Tribo da Agua do Norte", "Tribo da Agua do Sul", "Cidade Republica"};
    const char *locais_terra[] = {"Reino da Terra", "Cidade Republica"};
    const char *locais_fogo[] = {"Nação do Fogo", "Cidade Republica"};
    const char *locais_ar_masc[] = {"Templo do Ar do Norte", "Templo do Ar do Sul", "Cidade Republica"};
    const char *locais_ar_fem[] = {"Templo do Ar do Leste", "Templo do Ar do Oeste", "Cidade Republica"};
    const char *locais_ndom[] = {"Tribo da Agua do Sul", "Tribo da Agua do Norte", "Nacao do Fogo", "Reino da Terra", "Cidade Republica"};

    printf("Bem-vindo ao RPG Avatar!\n");
    printf("Escolha o genero:\n");
    printf("1 - Masculino\n");
    printf("2 - Feminino\n");
    printf("opcao: ");
    scanf("%d", &genero);

    printf("Escolha o elemento:\n");
    printf("1 - Agua\n");
    printf("2 - Terra\n");
    printf("3 - Fogo\n");
    printf("4 - Ar\n");
    printf("5 - Nao dominador\n");
    printf("opcao: ");
    scanf("%d", &elemento);

    printf("Escolha o local de origem:\n");
    if (elemento == 1)
    {
        for (i = 0; i < 3; i++)
        {
            printf("%d - %s\n", i + 1, locais_agua[i]);
        }
    }

    else if (elemento == 2)
    {
        for (i = 0; i < 2; i++)
        {
            printf("%d - %s\n", i + 1, locais_terra[i]);
        }
    }

    else if (elemento == 3)
    {
        for (i = 0; i < 2; i++)
        {
            printf("%d - %s\n", i + 1, locais_fogo[i]);
        }
    }

    else if (elemento == 4)
    {
        if (genero == 1)
        {
            for (i = 0; i < 3; i++)
            {
                printf("%d - %s\n", i + 1, locais_ar_masc[i]);
            }
        }
        else if (genero == 2)
        {
            for (i = 0; i < 3; i++)
            {
                printf("%d - %s\n", i + 1, locais_ar_fem[i]);
            }
        }
    }

    else if (elemento == 5)
    {
        for (i = 0; i < 5; i++)
        {
            printf("%d - %s\n", i + 1, locais_ndom[i]);
        }
    }
    scanf("%d", &local);

    // Criação da ficha
    if (is_avatar)
    {
        struct avatar jogador = {0};
        jogador.atributos.vida = 100;
        jogador.atributos.forca = 10;
        jogador.atributos.agilidade = 10;
        jogador.atributos.defesa = 10;
        jogador.atributos.inteligencia = 10;
        jogador.atributos.elemento = elemento;
        jogador.atributos.dominio = 1; // nível inicial de domínio
        jogador.espirito = 10;

        switch (elemento)
        {
        case 1: // Água
            jogador.atributos.inteligencia += 5;
            jogador.atributos.agilidade += 4;
            break;
        case 2: // Terra
            jogador.atributos.forca += 4;
            jogador.atributos.defesa += 4;
            break;
        case 3: // Fogo
            jogador.atributos.forca += 5;
            jogador.atributos.inteligencia += 3;
            break;
        case 4: // Ar
            jogador.atributos.agilidade += 5;
            jogador.atributos.inteligencia += 3;
            break;
        default:
            break;
        }
        mostrar_ficha_avatar(jogador);
    }

    else
    {
        struct atributos jogador = {0};
        int base_vida = 80;
        int base_forca = 8;
        int base_agi = 8;
        int base_def = 8;
        int base_int = 8;

        jogador.vida = base_vida;
        jogador.forca = base_forca;
        jogador.agilidade = base_agi;
        jogador.defesa = base_def;
        jogador.inteligencia = base_int;

        switch (elemento)
        {
        case 1: // Água
            jogador.inteligencia += 3;
            jogador.defesa += 2;
            break;
        case 2: // Terra
            jogador.forca += 2;
            jogador.defesa += 3;
            break;
        case 3: // Fogo
            jogador.forca += 3;
            jogador.agilidade += 2;
            break;
        case 4: // Ar
            jogador.agilidade += 3;
            jogador.inteligencia += 2;
            break;
        case 5: // Não dominador
        default:
            // médias: +1 em tudo
            jogador.forca += 1;
            jogador.agilidade += 1;
            jogador.defesa += 1;
            jogador.inteligencia += 1;
            break;
        }
        mostrar_ficha_geral(jogador, is_avatar);
    }
    // Menu inicial (placeholder)
    int opcao;
    do
    {
        printf("\n=== MENU INICIAL ===\n");
        printf("1 - Explorar\n");
        printf("2 - Ver equipamentos\n");
        printf("3 - Treinar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Voce começa a explorar o mundo...\n");
            break;
        case 2:
            printf("Sistema de equipamentos ainda nao implementado.\n");
            break;
        case 3:
            printf("Voce inicia um treinamento.\n");
            break;
        case 4:
            printf("Saindo do jogo. Ate logo!\n");
            break;
        default:
            printf("Opçao invalida.\n");
        }

    } while (opcao != 4);

    return 0;
}