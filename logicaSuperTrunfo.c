#include <stdio.h>

int main(){

char estadoaA01[60],estadoaB01[60];

// Definindo o estado, para definir as cidade. Char para identificar caracteres. Usar no futuro.//

char cidadeA01[60],cidadeB01[60];

//Definindo a cidade. //

char codigocartaA01[60] = "Carta A01",codigocartaB01[60] = "Carta B01";

//Código da carta. //

unsigned long long int populacaoA01,populacaoB01;

// Definindo populações das cidades. Int para utilizar números inteiros. //

float areaA01,areaB01;

// Definindo a área das cartas. Utilizando float para poder colocar números não inteiros. //

float PIBA01,PIBB01;

// Definindo PIB, mesma lógica na linha de cima. //

int pturisticoA01,pturisticoB01;

// pturistico para definir ponto turísticos. Int para números inteiros. //




// Aqui começaremos a pegar informações para as cartas. Utilizarei scanf para pegar informações e printf para mostrar essas informações. //




    printf("Começaremos pegando a informações da %s. \nDigite o Estado: \n", codigocartaA01);
    // \n para quebrar a linha //
    
    scanf ("%s", &estadoaA01);
    // Utilizando o identificador para identificar o tipo de variável, e utilizando o & para reconhecer a variável digitada. //
    
    printf ("O Estado de %s é, %s, agora digite a cidade a %s: \n", estadoaA01, codigocartaA01, codigocartaA01);
    scanf ("%s", &cidadeA01);
    printf ("A cidade escolhida foi %s, agora iremos colocar os status das cartas! \nColoque a população da cidade: \n", cidadeA01);
    
    scanf ("%li", &populacaoA01);
    //Utilizando o identificador %i, pra identificar inteiros. //
    printf ("A população de %s, é de %li habitantes. \nVamos definir a área da %s (Coloque o area inteira.):\n", cidadeA01, populacaoA01, cidadeA01);
    
    scanf("%f", &areaA01);
    // Utilizamos o identificador %f para definir números reais. //
    printf("A área de %s é de %.3f km². \nVamos definir o PIB (Coloque o número inteiro.): \n", cidadeA01, areaA01);
    
    scanf("%f", &PIBA01);
    printf("O PIB de %s, é de %.0f bilhões de reais! \nVamos definir os pontos turísticos:\n", cidadeA01,PIBA01);
    
    scanf("%i", &pturisticoA01);
    printf("Existem %i pontos turísticos em %s. \n", pturisticoA01,cidadeA01);
    

    // Daqui para baixo é status com calculos.//

    float densiA01 = (float)populacaoA01 / areaA01;
    float pibpercapitaA01 = PIBA01 / (float)populacaoA01;

       
    float superpoderA01;
    superpoderA01 = (1 / densiA01) + ((float)populacaoA01 + areaA01 + PIBA01 + pturisticoA01 + pibpercapitaA01);
    //Fim da carta A01, vamos para carta B01 //
    




    printf("Agora iremos definir a carta %s. \nDigite o estado de %s: \n", codigocartaB01,codigocartaB01);

    scanf ("%s", &estadoaB01);
    // Utilizando o identificador para identificar o tipo de variável, e utilizando o & para reconhecer a variável digitada. //
    
    printf ("O Estado de %s é, %s, agora digite a cidade de %s: \n", estadoaB01, codigocartaB01, codigocartaB01);
    scanf ("%s", &cidadeB01);
    printf ("A cidade escolhida foi %s, agora iremos colocar os status das cartas! \nColoque a população da cidade: \n", cidadeB01);
    
    scanf ("%li", &populacaoB01);
    //Utilizando o identificador %i, pra identificar inteiros. //
    printf ("A população de %s, é de %li habitantes. \nVamos definir a área de %s(Coloque o número inteiro.):\n", cidadeB01, populacaoB01, cidadeB01);
    
    scanf("%f", &areaB01);
    // Utilizamos o identificador %f para definir números reais. //
    printf("A área de %s é de %.0f km². \nVamos definir o PIB(Coloque o número inteiro.): \n", cidadeB01, areaB01);
    
    scanf("%f", &PIBB01);
    printf("O PIB de %s, é de %.2f bilhões de reais! \nVamos definir os pontos turísticos:\n", cidadeB01,PIBB01);
    
    scanf("%i", &pturisticoB01);
    printf("Existem %i pontos turísticos em %s. \n", pturisticoB01,cidadeB01);

    // Daqui para baixo é status com calculos.//

    float densiB01 = (float)populacaoB01 / areaB01;
    float pibpercapitaB01 = PIBB01 / (float)populacaoB01;

    float superpoderB01;
    superpoderB01 = (1 / densiB01) + ((float)populacaoB01 + areaB01 + PIBB01 + pturisticoB01 + pibpercapitaB01);
   
    //Fim carta B01//

// Aqui iremos mostrar o status das cartas //
printf("Suas duas cartas são: \n");

printf("------------------------\n%s", codigocartaA01);
printf("\nEstado: %s", estadoaA01);
printf("\nCidade: %s ", cidadeA01);   
printf("\nPopulação: %li ", populacaoA01); 
printf("\nÁrea: %.3f ", areaA01); 
printf("\nPIB: %.2f bilhões", PIBA01);
printf("\nPontos Turísticos: %i ", pturisticoA01); 
printf("\nPib per capita: %.3f", pibpercapitaA01);
printf("\nDensidade Populacional: %.2f \n------------------------\n", densiA01);  
printf("\nSuper Poder: %.0f \n------------------------\n", superpoderA01); 


// //

printf("------------------------\n%s", codigocartaB01);
printf("\nEstado: %s", estadoaB01);
printf("\nCidade: %s ", cidadeB01);   
printf("\nPopulação: %li ", populacaoB01); 
printf("\nÁrea: %.3f ", areaB01); 
printf("\nPIB: %.2f bilhões", PIBB01);
printf("\nPontos Turísticos: %i ", pturisticoB01);
printf("\nPib per capita: %.3f", pibpercapitaB01);
printf("\nDensidade Populacional: %.2f \n------------------------\n", densiB01);  
printf("\nSuper Poder: %.0f \n------------------------\n", superpoderB01); 


printf("Vamos comparar cartas e ver quem venceu! \n");

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em população? \n");
if(populacaoA01 > populacaoB01){
    printf("%s venceu! \n", codigocartaA01);
} else {
    printf("%s venceu! \n", codigocartaB01);
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em área? \n");
if(areaA01 > areaB01){
    printf("%s venceu! \n", codigocartaA01);
} else{
    printf("%s venceu! \n", codigocartaB01);
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em PIB? \n");
if(PIBA01 > PIBB01){
    printf("%s venceu! \n", codigocartaA01);
} else{
    printf("%s venceu! \n", codigocartaB01);
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em pontos turísticos? \n");
if(pturisticoA01 > pturisticoB01){
    printf("%s venceu! \n", codigocartaA01);
} else{
    printf("%s venceu! \n", codigocartaB01);
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em Pib per capita ? \n");
if(pibpercapitaA01 > pibpercapitaB01){
    printf("%s venceu! \n", codigocartaA01);
} else{
    printf("%s venceu! \n", codigocartaB01);
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em densidade? \n");
if(densiA01 < densiB01){
    printf("%s venceu! \n", codigocartaA01);
} else{
    printf("%s venceu! \n", codigocartaB01);
}

printf("---------------------------------------------------------------------------------------------------\n");
printf("Quem venceu no super poder? \n");
if(superpoderA01 > superpoderB01){
    printf("%s venceu! \n", codigocartaA01);
} else{
    printf("%s venceu! \n", codigocartaB01);
}

printf("---------------------------------------------------------------------------------------------------\n");
}