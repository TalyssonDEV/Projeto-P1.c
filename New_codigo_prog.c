#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>
#include<windows.h>
//----------------
#define QE 672.22
//----------------
#define PL 550
#define TI 1350
#define FH 1900
#define BM 2250
//----------------
#define QPPL 1.221
#define QPTI 2.008
#define QPFH 2.827
#define QPBM 3.348
//----------------
#define MPL 550
#define MTI 450
#define MFH 633.3
#define MBM 562.5
//----------------
#define MPL2 550
#define MTI2 450
#define MFH2 475
#define MBM2 562.5

  main(void){system("color D7");
  setlocale(LC_ALL,"Portuguese");

  char op,busca[30], resp;
  char candidato[13][40],confirma[13][40],partido[13][40];
  int achou;

  int opi, votos[5];
  int totaldevotos[5];
  int resp2;


do{
        printf("\n\n\n\n\n\t\t\t\t\t0 - Candidatos de 2020");
        printf("\n\t\t\t\t\t1 - Calcular o Quociente Eleitoral");
        printf("\n\t\t\t\t\t2 - Calcular O Quociente Partid�rio");
        printf("\n\t\t\t\t\t3 - Calcular a M�dia");
        printf("\n\t\t\t\t\t4 - Resultado da Elei��o");
        printf("\n\t\t\t\t\t5 - Pesquisar Eleitor");
        printf("\n\t\t\t\t\t6 - Simula��o de Votos");
        printf("\n\t\t\t\t\t8 - Encerrar as Consulta");

        printf("\n\n\t*DIGITE UMA OP��O: ");scanf("%s",&op);
        system("cls");

switch(op){
   system("color1F"); case '0':

        printf("\n\n\t\t\t\t\tCandidatos a Vereador ");
        printf("\n\n\n\t\t\t\t\t| Nome  |Partido|N�mero |");
        printf("\n\t\t\t\t\t|-----------------------| ");
        printf("\n\t\t\t\t\t| Jo�o  |   PL  | 99099 |");
        printf("\n\t\t\t\t\t| S�nia |   TI  | 44044 |");
        printf("\n\t\t\t\t\t| Joane |   BM  | 55055 |");
        printf("\n\t\t\t\t\t| M�rci |   BM  | 22022 |");
        printf("\n\t\t\t\t\t| josu� |   FH  | 15577 |");
        printf("\n\t\t\t\t\t| Pedro |   TI  | 29950 |");
        printf("\n\t\t\t\t\t| Carol |   TI  | 29950 |");
        printf("\n\t\t\t\t\t| Paulo |   BM  | 29950 |");
        printf("\n\t\t\t\t\t| junho |   FH  | 29950 |");
        printf("\n\t\t\t\t\t| Tiago |   FH  | 29950 |");
        printf("\n\t\t\t\t\t| Carla |   PL  | 29950 |");
        printf("\n\t\t\t\t\t|-----------------------| ");

        printf("\n\n\t\t\t\t\tCandidatos a Prefeito ");
        printf("\n\n\t\t\t\t\t|Nome  |Partido|N�mero|");
        printf("\n\t\t\t\t\t|---------------------|");
        printf("\n\t\t\t\t\t|Maria |   TI  |  44  |");
        printf("\n\t\t\t\t\t|T�nia |   BM  |  22  |");
        printf("\n\t\t\t\t\t|---------------------| ");

     break;

     case '1':

         printf("\n Vagas a serem preenchidas: 9");

         printf("\n\t\t\t\t |Votos Nominais |Partido|Quaciente|");
         printf("\n\t\t\t\t | + legenda     |       |Eleitoral|");
         printf("\n\t\t\t\t |---------------------------------|");
         printf("\n\t\t\t\t |      %d      |   PL  |         |",PL);
         printf("\n\t\t\t\t |     %d      |   TI  |  %.0f    |",TI,QE);
         printf("\n\t\t\t\t |     %d      |   FH  |         |",FH);
         printf("\n\t\t\t\t |     %d      |   BM  |         |",BM);
         printf("\n\t\t\t\t |---------------------------------|");
         printf("\n\t\t\t\t |  QE: PL+TI+FH+BM / 9 = %.3f  |",QE);
         printf("\n\t\t\t\t |---------------------------------|");

     break;

     case '2':

         printf("\n\t\t\t\t |Partido| Quantidade |/|    Quociente   |=|    Resultado    |   Quociente  |");
         printf("\n\t\t\t\t |       |  de votos  |/|    Eleitoral   |=|                 |   Partid�rio |");
         printf("\n\t\t\t\t |--------------------------------------------------------------------------|");
         printf("\n\t\t\t\t |   TI  |    %d     |/|  %f   |=|     %f    |      %.0f       |",TI,QE,QPTI,QPTI);
         printf("\n\t\t\t\t |   FH  |    %d     |/|  %f   |=|     %f    |      %.0f       |",FH,QE,QPFH,QPFH);
         printf("\n\t\t\t\t |   BM  |    %d     |/|  %f   |=|     %f    |      %.0f       |",BM,QE,QPBM,QPBM);
         printf("\n\t\t\t\t-----------------------------------------------------------------------------");

      break;


     case '3':

         printf("\n\t\t\t\t | Partido|Quantidade |/| Calculo  |=|  M�dia |M2|");
         printf("\n\t\t\t\t |        | de votos  |/|  + QP    |=|        |  |");
         printf("\n\t\t\t\t |--------------------------------------------|  |");
         printf("\n\t\t\t\t |   TI  |    %d    |/|  (%.0f+0+1) |=|    %d |+0|",TI,QPTI,MTI);
         printf("\n\t\t\t\t |   FH  |    %d    |/|  (%.0f+0+1) |=| %.2f |+0|",FH,QPFH,MFH);
         printf("\n\t\t\t\t |   BM  |    %d    |/|  (%.0f+0+1) |=| %.2f |+1|",BM,QPBM,MBM);
         printf("\n\t\t\t\t |-----------------------------------------------|");
         printf("\n\t\t\t\t |   M�dia 1  Partido que atingiu a maior = FH   |");
         printf("\n\t\t\t\t |-----------------------------------------------|");
         printf("\n\t\t\t\t |----------------------------------|");
         printf("\n\t\t\t\t | Partido|  Quociente   | 2-M�dia  |");
         printf("\n\t\t\t\t |        | Partid�rio   |          |");
         printf("\n\t\t\t\t |----------------------------------|");
         printf("\n\t\t\t\t |   TI  | %d|/|(%.0f+0+1) |    %.0f  |",TI,QPTI,MTI2);
         printf("\n\t\t\t\t |   FH  | %d|/|(%.0f+1+1) |    %.0f  |",FH,QPFH,MFH2);
         printf("\n\t\t\t\t |   BM  | %d|/|(%.0f+0+1) |    %.0f  |",BM,QPBM,MBM2);
         printf("\n\t\t\t\t |   PL  | 550|/|( 0+0+1 ) |   550  |"),MPL;
         printf("\n\t\t\t\t |-------------------------------------------|");
         printf("\n\t\t\t\t | M�dia 2  Partido que atingiu a maior = BM |");
         printf("\n\t\t\t\t |-------------------------------------------|");
     break;

     case '4':

         printf("\n\n\t\t\t\t |Partido |Quociente| M�dia |Total|");
         printf("\n\t\t\t\t |        |Partid�rio|      |     |");
         printf("\n\t\t\t\t |--------------------------------|");
         printf("\n\t\t\t\t |   PL   |     0    |   0  |  0  |",QPPL,MPL);
         printf("\n\t\t\t\t |   TI   |     2    |   0  |  2  |",QPTI,MTI);
         printf("\n\t\t\t\t |   FH   |     2    |1 = M1|  3  |",QPFH,MFH);
         printf("\n\t\t\t\t |   BM   |     3    |1 = M2|  4  |",QPBM,MBM);
         printf("\n\t\t\t\t |--------------------------------|");
         printf("\n\t\t\t\t |        |     7    |   2  |  9  |");
         printf("\n\t\t\t\t |--------------------------------|");
     break;

     case '5':
       for(int x=0;x<12;x++){
        strcpy(candidato[0],"Joao");
        strcpy(candidato[1],"Sonia");
        strcpy(candidato[2],"Joane");
        strcpy(candidato[3],"Merci");
        strcpy(candidato[4],"Josue");
        strcpy(candidato[5],"Pedro");
        strcpy(candidato[6],"Carol");
        strcpy(candidato[7],"Tania");
        strcpy(candidato[8],"Tiago");
        strcpy(candidato[9],"Junho");
        strcpy(candidato[10],"Paulo");
        strcpy(candidato[11],"Carla");
        strcpy(candidato[12],"Maria");}

        for(int x=0;x<12;x++){
        strcpy(partido[0]," PL |");
        strcpy(partido[1]," TI |");
        strcpy(partido[2]," BM |");
        strcpy(partido[3]," BM |");
        strcpy(partido[4]," PH |");
        strcpy(partido[5]," TI |");
        strcpy(partido[6]," BM |");
        strcpy(partido[7]," BM |");
        strcpy(partido[8]," PL |");
        strcpy(partido[9]," PL |");
        strcpy(partido[10]," BM |");
        strcpy(partido[11]," PL |");
        strcpy(partido[12]," TI |");}

        for(int x=0;x<12;x++){
        strcpy(confirma[0],"N�o");
        strcpy(confirma[1],"Sim | Vereador");
        strcpy(confirma[2],"Sim | Vereador");
        strcpy(confirma[3],"Sim | Vereador");
        strcpy(confirma[4],"Sim | Vereador");
        strcpy(confirma[5],"N�o");
        strcpy(confirma[6],"N�o");
        strcpy(confirma[7],"Sim | Prefeito");
        strcpy(confirma[8],"Sim | Vereador");
        strcpy(confirma[9],"Sim | Vereador");
        strcpy(confirma[10],"Sim | Vereador");
        strcpy(confirma[11],"N�o");
        strcpy(confirma[12],"N�o");}



        do{
                    printf("\n\n\t\t\t\t\tCandidatos a Vereador ");
            printf("\n\n\n\t\t\t\t\t| Nome  |Partido|N�mero |");
            printf("\n\t\t\t\t\t|-----------------------| ");
            printf("\n\t\t\t\t\t| Joao  |   PL  | 99099 |");
            printf("\n\t\t\t\t\t| Sonia |   TI  | 44044 |");
            printf("\n\t\t\t\t\t| Joane |   BM  | 55055 |");
            printf("\n\t\t\t\t\t| Merci |   BM  | 22022 |");
            printf("\n\t\t\t\t\t| josue |   FH  | 15577 |");
            printf("\n\t\t\t\t\t| Pedro |   TI  | 29950 |");
            printf("\n\t\t\t\t\t| Carol |   TI  | 29950 |");
            printf("\n\t\t\t\t\t| Paulo |   BM  | 29950 |");
            printf("\n\t\t\t\t\t| junho |   FH  | 29950 |");
            printf("\n\t\t\t\t\t| Tiago |   FH  | 29950 |");
            printf("\n\t\t\t\t\t| Carla |   PL  | 29950 |");
            printf("\n\t\t\t\t\t| Maria |   TI  |   44  |");
            printf("\n\t\t\t\t\t| Tania |   BM  |   22  |");
            printf("\n\t\t\t\t\t|-----------------------| ");
            printf("\n\n\t\tDigite o nome do Candidato que deseja procurar: ");
            fflush(stdin);
            achou = 0;
            gets(busca);
            system("cls");
        for(int x = 0; x < 4; x++){
            if(strcmp( busca,candidato[x])==0){

                printf("\nCandidato: %s| Partido %s  Eleito: %s ",candidato[x],partido[x],confirma[x]);
                achou = 1;}}

            if(achou == 0)
                printf("\nCandidato n�o encontrado!! verifique se esta escrito corretamente");

                printf("\n\n\tDeseja procurar outro candidato: <s> ou <n>:");
                scanf("%c",&resp); }
                while(resp == 's');
     break;

     case '6':

            do{

        printf("\n\n\n\n\n\t\t\t\t\t      >Simula��o de Votos< ");
        printf("\n\n\t\t\t\t\t1 - Lista de Candidatos : ");
        printf("\n\t\t\t\t\t2 - Calculo da elei�ao ");
        printf("\n\t\t\t\t\t3 - Simula��o da Urna Eletr�nica:");
        printf("\n\t\t\t\t\t4 - Encerrar Simula��o");
        printf("\n\n\t => DIGITE UMA OP��O: ");
        scanf("%d",&opi);
        system("cls");


        switch(opi){
        case 1:
            printf("\n\n\t\t\t\t\t       Candidatos a Prefeito     ");
            printf("\n\t\t\t\t\t|---------------------------------| ");
            printf("\n\t\t\t\t\t|      Nome       |Partido|N�mero |");
            printf("\n\t\t\t\t\t|---------------------------------|");
            printf("\n\t\t\t\t\t| Camila Fontes   |  S.I  |  22   |");
            printf("\n\t\t\t\t\t| Talysson Felipe |  S.I  |  33   |");
            printf("\n\t\t\t\t\t| Guilherme Lima  |  S.I  |  44   |");
            printf("\n\t\t\t\t\t| Renne Bispo     |  S.I  |  55   |");
            printf("\n\t\t\t\t\t|---------------------------------|");


         break;

         case 2:
            printf("\n\n\t\t\t\t\t");
            printf("\n\n\n\t\t\t\t\t                    Calculo da Elei��o                      ");
            printf("\n\t\t\t\t\t|------------------------------------------------------------|");
            printf("\n\t\t\t\t\t| 1� Lugar     | Total de Votos |        500      | Aprovado |");
            printf("\n\t\t\t\t\t| 2� Lugar     | Total de Votos |        250      | Aprovado |");
            printf("\n\t\t\t\t\t| 3� Lugar     | Total de Votos |   MENOR QUE 250 | Eliminado|");
            printf("\n\t\t\t\t\t| 4� Lugar     | Total de Votos |   MENOR QUE 250 | Eliminado|");
            printf("\n\t\t\t\t\t|------------------------------------------------------------|");

        break;

            case 3:
            printf("\n\n\t\t\t\t\t ");

            printf("\n\t\t\t\t\t        Tabela de Candidatos       ");
            printf("\n\t\t\t\t\t|---------------------------------|");
            printf("\n\t\t\t\t\t|       Nome      |Partido|N�mero |");
            printf("\n\t\t\t\t\t|---------------------------------|");
            printf("\n\t\t\t\t\t| Camila Fontes   |  S.I  |   22  |");
            printf("\n\t\t\t\t\t| Talysson Felipe |  S.I  |   33  |");
            printf("\n\t\t\t\t\t| Guilherme Lima  |  S.I  |   44  |");
            printf("\n\t\t\t\t\t| Renne Bispo     |  S.I  |   55  |");
            printf("\n\t\t\t\t\t|---------------------------------|");

            printf("\n\nDigite < 0 > para Finalizar a Simula��o \nInforme N�mero do Candidato: ");
            scanf("%d",&resp2);
            do{
                switch(resp2){
                case 22:
                      printf("\n� Digite a quantidade de votos na urna |Camila Fontes| Recebeu: ");
                      scanf("%d",&votos[0]);
                      if (votos[0] > 0){
                            totaldevotos[0] += votos[0]*5;
                          }else
                            printf("\nVoto Inv�lido tente novamente!");
                      printf("\n Digite Zero para Encerrar a Vota��o: < 0 >" );
                      printf("\n Digite numero do Candidato que deseja Votar:\n< CAMILA 22 > < TALYSSON 33 > < GUILHERME 44 > < RENNE 55 > ");
                      scanf("%d",&resp2);
                break;
                case 33:
                      printf("\n� Digite a quantidade de votos na urna |Talysson Felipe| Recebeu: ");
                      scanf("%d",&votos[1]);
                      if (votos[1] > 0){
                            totaldevotos[1] += votos[1]*5;
                          }else
                            printf("\nVoto Inv�lido tente novamente!");
                      printf("\n Digite Zero para Encerrar a Vota��o: < 0 >" );
                      printf("\n Digite numero do Candidato que deseja Votar:\n< CAMILA 22 > < TALYSSON 33 > < GUILHERME 44 > < RENNE 55 > ");
                      scanf("%d",&resp2);
                break;
                case 44:
                      printf("\n� Digite a quantidade de votos na urna |Guilherme Lima| Recebeu: ");
                      scanf("%d",&votos[2]);
                      if (votos[2] > 0){
                            totaldevotos[2] += votos[2]*5;
                          }else
                            printf("\nVoto Inv�lido tente novamente!");
                      printf("\n Digite Zero para Encerrar a Vota��o: < 0 >" );
                      printf("\n Digite numero do Candidato que deseja Votar:\n< CAMILA 22 > < TALYSSON 33 > < GUILHERME 44 > < RENNE 55 > ");
                      scanf("%d",&resp2);
                break;
                case 55:
                       printf("\n� Digite a quantidade de votos na urna |Renne Bispo| Recebeu: ");
                       scanf("%d",&votos[3]);
                       if (votos[3] > 0){
                            totaldevotos[3] += votos[3]*5;
                          }else
                            printf("\nVoto Inv�lido tente novamente!");
                      printf("\n Digite Zero para Encerrar a Vota��o: < 0 >" );
                      printf("\n Digite numero do Candidato que deseja Votar:\n< CAMILA 22 > < TALYSSON 33 > < GUILHERME 44 > < RENNE 55 > ");
                      scanf("%d",&resp2);
                break;

                if(resp2!= 22 && resp!=33 && resp!=44 && resp!=55 && resp!=0){
                printf("\nCandidato N�o Cadastrado!!!");}



                }
            }while( resp2 != 0);

             printf("\n\t\t\t\t\t       >Tabela de Candidatos<      ");
            printf("\n\t\t\t\t\t|-----------------------------------------------|");
            printf("\n\t\t\t\t\t|   Candidatos    |partido| votos |  Calculo |");
            printf("\n\t\t\t\t\t|-----------------------------------------   |");
            printf("\n\t\t\t\t\t| Camila Fontes   | S.I   |  %d      |  250  |",votos[0]);
            printf("\n\t\t\t\t\t| Talysson Felipe | S.I   |  %d      |  250  |",votos[1]);
            printf("\n\t\t\t\t\t| Guilherme Lima  | S.I   |  %d      |  250  |",votos[2]);
            printf("\n\t\t\t\t\t| Renne Bispo     | S.I   |  %d      |  250  |",votos[3]);
            printf("\n\t\t\t\t\t|-----------------------------------------------|");

            if(votos[0]>=250){printf("\n\t\t\t\t\t| Camila Fontes  |Votos = %d|  Aprovado |",votos[0]);}
            if(votos[1]>=250){printf("\n\t\t\t\t\t| Talysson Felipe|Votos = %d|  Aprovado |",votos[1]);}
            if(votos[2]>=250){printf("\n\t\t\t\t\t| Guilherme Lima |Votos = %d|  Aprovado |",votos[2]);}
            if(votos[3]>=250){printf("\n\t\t\t\t\t| Renne Bispo    |Votos = %d |  Aprovado |",votos[3]);}


        }

        }while(opi != 4 );


}

   }while(op!=8);
}


