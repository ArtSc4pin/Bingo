#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "function.h"
int main(){
    srand(time(NULL));                                                                              //Inicia a funcao rand com base no tempo do computador para gerar numeros aleatorios em ordens diferentes a cada vez que o programa e executado.
    system("clear");                                                                                //Limpa os warnings gerados pela funcao gets.
    char p1_nome[30], p2_nome[30], p3_nome[30], p1_codinome[15], p2_codinome[15], p3_codinome[15];
    int p1_cartela[3][5], p2_cartela[3][5], p3_cartela[3][5], p1=0, p2=0, p3=0, sorteio[12][5];
    printf("Ola, bem vindo ao BINGO!!!\n\n");
    printf("Entre com o nome do primeiro partcipante:");
    gets(p1_nome);                                                                                  // Recebe o nome do participante 1.
    printf("Entre com o nome do segundo partcipante:");
    gets(p2_nome);                                                                                  // Recebe o nome do participante 2.
    printf("Entre com o nome do terceiro partcipante:");
    gets(p3_nome); 
    if(strcmp(p1_nome, p2_nome)==0 || strcmp(p1_nome, p3_nome)==0 || strcmp(p2_nome, p3_nome)==0){  // Verifica se algum algum dos nomes inseridos sao iguais.
        printf("\nOps! Parece que alguns dos nossos participantes tem nomes iguais...\n");          // Mensagem explicando ao usuario que dois ou mais nomes inseridos sao iguais e,
        printf("Para facilitar a disticao, vamos criar um codinome para voces!! :)\n\n");           //sera solicitado codinomes.
        if(strcmp(p1_nome, p2_nome)==0 && strcmp(p2_nome, p3_nome)==0){                             // Verifica se todos os nomes sao iguais.
            printf("Entre com o codinome para o primeiro partcipante:");
            gets(p1_codinome);                                                                      // Recebe o codinome do partcipante 1.
            strcat(p1_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p1_nome, p1_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p1_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
            do{                                                                                     // Solicita o p2_codinome ate que seja diferente do p1_codinome.
                printf("Entre com o codinome para o segundo partcipante:");
                gets(p2_codinome);                                                                  // Recebe o codinome do partcipante 2.
            }while(strcmp(p1_codinome, p2_codinome)==0);
            strcat(p2_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p2_nome, p2_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p2_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
            do{                                                                                     // Solicita o p3_codinome ate que seja diferente do p1_codinome e do p2_codinome.
                printf("Entre com o codinome para o terceiro partcipante:");
                gets(p3_codinome);                                                                  // Recebe o codinome do partcipante 3.
            }while(strcmp(p1_codinome, p3_codinome)==0 || strcmp(p2_codinome, p3_codinome)==0);
            strcat(p3_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p3_nome, p3_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p3_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
        }else if(strcmp(p1_nome, p2_nome)==0){                                                      // Verifica se p1_nome e igual a p2_nome.
            printf("Entre com o codinome para o primeiro partcipante:");
            gets(p1_codinome);                                                                      // Recebe o codinome do partcipante 1.
            strcat(p1_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p1_nome, p1_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p1_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
            do{                                                                                     // Solicita o p2_codinome ate que seja diferente do p1_codinome.
                printf("Entre com o codinome para o segundo partcipante:");
                gets(p2_codinome);                                                                  // Recebe o codinome do partcipante 2.
            }while(strcmp(p1_codinome, p2_codinome)==0);
            strcat(p2_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p2_nome, p2_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p2_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
        }else if(strcmp(p1_nome, p3_nome)==0){                                                      // Verifica se p1_nome e igual a p3_nome.
            printf("Entre com o codinome para o primeiro partcipante:");
            gets(p1_codinome);                                                                      // Recebe o codinome do partcipante 1.
            strcat(p1_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p1_nome, p1_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p1_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
            do{                                                                                     // Solicita o p3_codinome ate que seja diferente do p1_codinome.
                printf("Entre com o codinome para o terceiro partcipante:");
                gets(p3_codinome);                                                                  // Recebe o codinome do partcipante 3.
            }while(strcmp(p1_codinome, p3_codinome)==0);
            strcat(p3_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p3_nome, p3_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p3_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
        }else{                                                                                      // Verifica se p2_nome e igual a p3_nome.
            printf("Entre com o codinome para o segundo partcipante:");
            gets(p2_codinome);                                                                      // Recebe o codinome do partcipante 2.
            strcat(p2_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p2_nome, p2_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p2_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
            do{                                                                                     // Solicita o p2_codinome ate que seja diferente do p2_codinome.
                printf("Entre com o codinome para o terceiro partcipante:");
                gets(p3_codinome);                                                                  // Recebe o codinome do partcipante 3.
            }while(strcmp(p2_codinome, p3_codinome)==0);
            strcat(p3_nome, "(");                                                                   // Concatena o 'abre parenteses' ao nome.
            strcat(p3_nome, p3_codinome);                                                           // Concatena o codinome ao nome.
            strcat(p3_nome, ")");                                                                   // Concatena o 'fecha parentese' ao nome.
        }
    }
    system("clear");                                                                                // limpa a tela que mostrava a selecao dos nomes dos participantes.
    printf("Muito bem, ja decidimos os nomes dos participantes,\n");                                // Diz ao usuario que esta tudo certo com a escolha dos nomes.
    printf("Agora podemos comecar o nosso bingo!!!\n");                                             // E que esta tudo certo para comecao o jogo.
    printf("Pressione a tecla enter para comecar...");                                              // Mostra ao usuario que para comecar deve apertar a tecla enter.
    getchar();                                                                                      // Aguarda o usuario entrar com a tecla enter.
    system("clear");  
    for (int i = 0; i < 3; i++) {                                                                   // Manipula as linhas do p1_cartela.
        for (int j = 0; j < 5; j++) {                                                               // Manipula as colunas do p1_cartela.
            do{                                                                                     // Se certifica atravez da funcao existe da biblioteca function.h que sejam gerados numero diferentes para preencher a matriz.
                p1_cartela[i][j]=((rand()%60)+1);                                                   // Gera numeros aleatorios de 1 a 60.
            }while(existe(p1_cartela, i, j, p1_cartela[i][j])==1);
        }
    }
    for (int i = 0; i < 3; i++) {                                                                   // Manipula as linhas do p2_cartela.
        for (int j = 0; j < 5; j++) {                                                               // Manipula as colunas do p2_cartela.
            do{                                                                                     // Se certifica atravez da funcao existe da biblioteca function.h que sejam gerados numero diferentes para preencher a matriz.
                p2_cartela[i][j]=((rand()%60)+1);                                                   // Gera numeros aleatorios de 1 a 60.
            }while(existe(p2_cartela, i, j, p2_cartela[i][j])==1);
        }
    }
    for (int i = 0; i < 3; i++) {                                                                   // Manipula as linhas do p3_cartela.
        for (int j = 0; j < 5; j++) {                                                               // Manipula as colunas do p3_cartela.
            do{                                                                                     // Se certifica atravez da funcao existe da biblioteca function.h que sejam gerados numero diferentes para preencher a matriz.
                p3_cartela[i][j]=((rand()%60)+1);                                                   // Gera numeros aleatorios de 1 a 60.
            }while(existe(p3_cartela, i, j, p3_cartela[i][j])==1);
        }
    }
    for (int k = 0; k < 12; k++) {                                                                  // Manipula as linhas do sorteio.
        for (int l = 0; l < 5; l++) {                                                               // Manipula as colunas do sorteio.
            do{                                                                                     // Se certifica atravez da funcao existe da biblioteca function.h que sejam gerados numero diferentes para preencher a matriz.
                sorteio[k][l]=((rand()%60)+1);                                                      // Gera numeros aleatorios de 1 a 60.
            }while(existe(sorteio, k, l, sorteio[k][l])==1);
            p1+=existe(p1_cartela, 2, 5, sorteio[k][l]);                                            // Verifica atravez da funcao existe da biblioteca function.h, se o numero sorteado existe na p1_cartela, caso sim, incrementa 1 em p1;
            p2+=existe(p2_cartela, 2, 5, sorteio[k][l]);                                            // Verifica atravez da funcao existe da biblioteca function.h, se o numero sorteado existe na p2_cartela, caso sim, incrementa 1 em p3;
            p3+=existe(p3_cartela, 2, 5, sorteio[k][l]);                                            // Verifica atravez da funcao existe da biblioteca function.h, se o numero sorteado existe na p2_cartela, caso sim, incrementa 1 em p3;
            if(p1==15){                                                                             // Verifica se p1 e 15, que significa que toda a p1_cartela foi sorteada.
                printf("BINGOO!! -> ");                 
                puts(p1_nome);                                                                      // Mostra quem Bingou.
                mostrar(p1_cartela, sorteio, k, l);                                                 // Mostra a p1_cartela atravez da funcao mostrar da biblioteca function.h.     
                k=13;                                                                               // Encerra o for das linhas pois o partcipante 1 bingou.
                l=6;                                                                                // Encerra o for das colunas pois o partcipante 1 bingou.
            }else{                                                                                  // Caso p1 seja diferente de 15, significa que o participante 1 ainda nao bingou.
                printf("Bingo do(a) ");                 
                puts(p1_nome);                                                                      // Mostra o dono da cartela.
                mostrar(p1_cartela, sorteio, k, l);                                                 // Mostra a p1_cartela atravez da funcao mostrar da biblioteca function.h.
            }
            if(p2==15){                                                                             // verifica se p2 e 15, que significa que toda a p2_cartela foi sorteada.
                printf("BINGOO!! -> ");
                puts(p2_nome);                                                                      // Mostra quem Bingou.
                mostrar(p2_cartela, sorteio, k, l);                                                 // Mostra a p2_cartela atravez da funcao mostrar da biblioteca function.h.
                k=13;                                                                               // Encerra o for das linhas pois o partcipante 2 bingou.
                l=6;                                                                                // Encerra o for das colunas pois o partcipante 2 bingou.
            }else{                                                                                  // Caso p2 seja diferente de 15, significa que o participante 2 ainda nao bingou.
                printf("Bingo do(a) ");
                puts(p2_nome);                                                                      // Mostra o dono da cartela.
                mostrar(p2_cartela, sorteio, k, l);                                                 // Mostra a p2_cartela atravez da funcao mostrar da biblioteca function.h.
            }
            if(p3==15){                                                                             // verifica se p3 e 15, que significa que toda a p3_cartela foi sorteada.
                printf("BINGOO!! -> ");
                puts(p3_nome);                                                                      // Mostra quem Bingou.
                mostrar(p3_cartela, sorteio, k, l);                                                 // Mostra a p3_cartela atravez da funcao mostrar da biblioteca function.h.
                k=13;                                                                               // Encerra o for das linhas pois o partcipante 3 bingou.
                l=6;                                                                                // Encerra o for das colunas pois o partcipante 3 bingou.
            }else{                                                                                  // Caso p3 seja diferente de 15, significa que o participante 3 ainda nao bingou.
                printf("Bingo do(a) ");
                puts(p3_nome);                                                                      // Mostra o dono da cartela.
                mostrar(p3_cartela, sorteio, k, l);                                                 // Mostra a p3_cartela atravez da funcao mostrar da biblioteca function.h.
            }
            if(k!=13){                                                                              // Verifica se k e diferente de 13, pois so sera 13 se alguem bingar.
                printf("Numero sorteado: %d\n\n", sorteio[k][l]);                                   // Se ninguem bingar mostra o numero sorteado
                printf("Pressione enter para sortear mais um numero...");                           //e a instrucao para avancar o jogo.
            }else{                                                                                  // Caso seja 13, significa que alguem bingou
                printf("\n\nPressione enter para mostrar os resultados...");                        //e a instrucao sera para mostrar o resultado.
            }
            getchar();                                                                              // Aguarda o enter do usuario.
            system("clear");                                                                        // Limpa a tela.
        }
    }
    if(p1==15 && p2==15 && p3==15){                                                                 // Verifica se os 3 ganharam juntos.
        printf("Parabens!!!\n\n");                                                                  // Parabeniza.
        printf("Todos Ganharam!!!\n");                                                              // Diz que todos ganharam.
        printf("\n\nFim de Jogo!!!\n\n");                                                           // Determina que e o fim do jogo.
    }else if(p1==15 && p2==15){                                                                     // Verifica se p1 e p2 ganharam juntos.
        printf("Parabens!!!\n\n");                                                                  // Parabeniza.
        printf("Os ganhadores da vez foram:\n");                                                    // Mostra o nome dos dois ganhadores.
        puts(p1_nome);
        puts(p2_nome);
        printf("\n\nFim de Jogo!!!\n\n");                                                           // Determina que e o fim do jogo.
    }else if(p1==15 && p3==15){                                                                     // Verifica se p1 e p3 ganharam juntos.
        printf("Parabens!!!\n\n");                                                                  // Parabeniza.
        printf("Os ganhadores da vez foram:\n");                                                    // Mostra o nome dos dois ganhadores.
        puts(p1_nome);
        puts(p3_nome);
        printf("\n\nFim de Jogo!!!\n\n");                                                           // Determina que e o fim do jogo.
    }else if(p2==15 && p3==15){                                                                     // Verifica se p2 e p3 ganharam juntos.         
        printf("Parabens!!!\n\n");                                                                  // Parabeniza.
        printf("Os ganhadores da vez foram:\n");                                                    // Mostra o nome dos dois ganhadores.
        puts(p2_nome);
        puts(p3_nome);
        printf("\n\nFim de Jogo!!!\n\n");                                                           // Determina que e o fim do jogo.
    }else if(p1==15){                                                                               // Verifica se p1 ganhou.           
        printf("Parabens!!!\n\n");                                                                  // Parabeniza.
        printf("Voce ganhou esta rodada ");                                                         // Mostra o nome do ganhador.
        puts(p1_nome);
        printf("\n\nFim de Jogo!!!\n\n");                                                           // Determina que e o fim do jogo.
    }else if(p2==15){                                                                               // Verifica se p2 ganhou. 
        printf("Parabens!!!\n\n");                                                                  // Parabeniza.
        printf("Voce ganhou esta rodada ");                                                         // Mostra o nome do ganhador.
        puts(p2_nome);
        printf("\n\nFim de Jogo!!!\n\n");                                                           // Determina que e o fim do jogo.
    }else if(p3==15){                                                                               // Verifica se p3 ganhou. 
        printf("Parabens!!!\n\n");                                                                  // Parabeniza.
        printf("Voce ganhou esta rodada ");                                                         // Mostra o nome do ganhador.
        puts(p3_nome);
        printf("\n\nFim de Jogo!!!\n\n");                                                           // Determina que e o fim do jogo.
    }
    return 0;
}