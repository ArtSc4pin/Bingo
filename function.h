int existe(int matriz[12][5], int limite_i, int limite_j, int valor){           // Verifica se em uma matriz, existe um valor, ate a linha i e a coluna j.
    for (int i = 0; i <= limite_i; i++) {                                       // Inicia o for das linhas em 0 e determina que va ate o limite passado por parametro.
        if(i!=limite_i){                                                        // Se nao for a ultima linha,
            for (int j = 0; j < 5; j++) {                                       //analisa todos os elementos.
                if(matriz[i][j]==valor){                                        // Se encontrar um valor igual, 
                    return 1;                                                   //retorna 1 e encerra a funcao.
                }
            }
        }else{                                                                  // Se for a ultima linha,
            for (int j = 0; j < limite_j; j++) {                                //analiza ate o limite passado por parametro
                if(matriz[i][j]==valor){                                        // Se encorntrar um valor igual,
                    return 1;                                                   //retorna 1 e encerra a funcao.
                }
            }
        }
    }
    return 0;                                                                   // Se nao encontrar nenhum valor igual na matriz, retorna 0;
}

void mostrar(int matriz[3][5], int resultado[12][5], int k, int l){             // Printa a matriz com o formato certo e com os numeros marcados.
    for (int i = 0; i < 3; i++) {                                               // Inicia o for das linhas em 0 e determina que va ate 3.
        printf("| ");
        for (int j = 0; j < 5; j++) {                                           // Inicia a for das colunas em 0 e determina que va ate 5.
            if(existe(resultado, k, l+1, matriz[i][j])==1){                     // Verifica se existe matriz[i][j] em nos resultados que ja foram sorteados.
                if(matriz[i][j]==resultado[k][l]){                              // Se a matriz[i][j] for o ultimo sorteado,
                    if(matriz[i][j]<10)                                         //verifica se matriz[i][j] esta entre 1 e 9,
                        printf("\033[32m0");                                    //printa um 0 verde antes caso esteja,
                    printf("\033[32m%d \033[37m| ", matriz[i][j]);              //e printa o valor da matriz[i][j] em verde, mudando apos para cor branca novamente.
                }else{                                                          // Ja se a matriz[i][j] tiver sido sorteada e nao for o ultimo sorteado,
                    if(matriz[i][j]<10)                                         //verifica se matriz[i][j] esta entre 1 e 9,                                         
                        printf("\033[31m0");                                    //printa um 0 vermelho antes caso esteja,
                    printf("\033[31m%d \033[37m| ", matriz[i][j]);              //e printa o valor da matriz[i][j] em vermelho, mudando apos para cor branca novamente.
                }
            }else{                                                              // Se matriz[i][j] nao existir nos resultados que ja foram sorteados,
                if(matriz[i][j]<10)                                             //verifica se matriz[i][j] esta entre 1 e 9,
                    printf("0");                                                //printa um 0 branco antes caso esteja,
                printf("%d | ", matriz[i][j]);                                  //e printa o valor da matriz[i][j] em branco.
            }
        }
        printf("\n");                                                           //Faz a quebra de linha toda vez que printar toda uma linha.
    }
    printf("\n");                                                               //Insere um espaco abaixo da tabela printada
}