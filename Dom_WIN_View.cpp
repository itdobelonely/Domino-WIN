//ProjetoDOMINO - Projeto  Domino (view.h)
//Carlos Gabriel Gouveia
//Diogo Casari del Pino
//Gustavo Nascimento Zanatta
//Juan Fernando Coucolis Isano

#include "DOM-WIN_View.h"
#include <stdio.h>
#include <stdlib.h>


int menuGeral()//Função para exibir o menu do jogo.
{
	int opm;
	
    printf ("\n\n1.Organizar pecas");
    printf ("\n2.Embaralhar pecas");
    printf ("\n9.Sair");
    printf ("\nOpcao:");
	scanf ("%d",&opm);
	return opm;
}

void apresentaPecas()
{
    int i;
	for (i=0;i<28;i++)
    {
        printf("(%d|%d)",peca[i].lado1,peca[i].lado2);//Mostra as peças de forma aleatória
    }
}
