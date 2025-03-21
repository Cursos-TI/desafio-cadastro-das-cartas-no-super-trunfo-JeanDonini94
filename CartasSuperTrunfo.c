#include <stdio.h>

int main(){
    //Funções e variaveis da cartas.
    int populacao1,populacao2,pontoturistico1,pontoturistico2;
    float superpoder2,superpoder1,area1,area2,pib1,pib2,densidadepopulacional1,pibpercapita1,densidadepopulacional2,pibpercapita2;
    char estado1[50]="Rio de janeiro",estado2[50]="Sao paulo",codigo1[4]="a01",codigo2[4]="b02",cidade1[20],cidade2[20];
    int resultadoArea,resultadopib,resultadopopulacao,resultadopontoturitico,resultadodensidade,resultadopercapita;
 
    //Dados para usuario colocar da carta 1.
    printf("***PRIMEIRA CARTA***\n");

    printf("Digite os dados da primeira carta:\n");

    printf("Qual cidade:\n");
    scanf("%s", &cidade1);
    
    printf("Qual a área:\n");
    scanf("%f", &area1);

    printf("Qual o PIB:\n");
    scanf("%f", &pib1);

    printf("Qual a população:\n");
    scanf("%d", &populacao1);

    printf("Quantos pontos turisticos:\n");
    scanf("%d", &pontoturistico1);

     //Dados para usuario colocar da carta 2.
     printf("***SEGUNDA CARTA***\n");

     printf("Digite os dados da segunda carta:\n");
     
     printf("Qual cidade:\n");
     scanf("%s", &cidade2);
 
     printf("Qual a área:\n");
     scanf("%f", &area2);
 
     printf("Qual o PIB:\n");
     scanf("%f", &pib2);
 
     printf("Qual a população:\n");
     scanf("%d", &populacao2);
 
     printf("Quantos pontos turisticos:\n");
     scanf("%d", &pontoturistico2);


    // calculo carta 1
     pibpercapita1=(populacao1/pib1);

     densidadepopulacional1=(area1/populacao1);
    //calculo super poder primeira carta
    superpoder1=(populacao1+pib2+area1+pontoturistico1);  

     //calculo carta 2

     pibpercapita2=(populacao2/pib2);

     densidadepopulacional2=(area2/populacao2);
     //calculo super poder da segunda carta
     superpoder2=(populacao2+pib2+area2+pontoturistico2);   

     //impressao para o usuario da primeira carta digitada.
    printf("Carta:01\nEstado:%s \n Cidade:%s \n Codigo da carta:%s \n",estado1, cidade1,codigo1);

    printf("Area:%f \n PIB:%f \n",area1,pib1);

    printf("População:%d \n Pontos turisticos:%d \n",populacao1,pontoturistico1);

    printf("Densidade populacional:%f\n",densidadepopulacional1);

    printf("PIB per capita:%f\n",pibpercapita1);

    printf("Super poder:%.1f\n",superpoder1);
 
   //impressao para o usuario da segunda carta carta digitada.
    printf("Carta:02\nEstado:%s \n Cidade:%s \n Codigo da carta:%s \n",estado2, cidade2,codigo2);

    printf("Area:%f \n PIB:%f \n",area2,pib2);
 
    printf("População:%d \n Pontos turisticos:%d \n",populacao2,pontoturistico2);

    printf("Densidade populacional:%f\n",densidadepopulacional2);

    printf("PIB per capita:%f\n",pibpercapita2);

    printf("Super poder:%.1f\n",superpoder2);

    //comparações dos atributos das cartas.
    resultadoArea=(area1>area2);
    resultadodensidade=(densidadepopulacional1>densidadepopulacional2);
    resultadopercapita=(pibpercapita1>pibpercapita2);
    resultadopib=(pib1>pib2);
    resultadopontoturitico=(pontoturistico1>pontoturistico2);
    resultadopopulacao=(populacao1>populacao2);

    //impressao do resultado da comparação das cartas.

    printf("Comparação das cartas\n");
    printf("Area:%d\n",resultadoArea);
    printf("Densidade populacional:%d\n",resultadodensidade);
    printf("Pib percapita:%d\n",resultadopercapita);
    printf("PIB:%d\n",resultadopib);
    printf("Ponto turistico:%d\n",resultadopontoturitico);
    printf("População:%d\n",resultadopopulacao);


    
    


    

    return 0;
    
}