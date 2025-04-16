#include <stdio.h>

int main(){

char estadoaA01[60]= "Ceará",estadoaB01[60] = "RioGrandoDoSul";

// Definindo o estado, para definir as cidade. Char para identificar caracteres. Usar no futuro.//

char cidadeA01[60] = "Fortaleza",cidadeB01[60] = "PortoAlegre";

//Definindo a cidade. //

char codigocartaA01[60] = "Carta A01",codigocartaB01[60] = "Carta B01";

//Código da carta. //

unsigned long long int populacaoA01 = 2428708,populacaoB01 = 1389322;

// Definindo populações das cidades. Int para utilizar números inteiros. //

float areaA01 = 312.441,areaB01 = 495.390;

// Definindo a área das cartas. Utilizando float para poder colocar números não inteiros. //

float PIBA01 = 73436128432,PIBB01 = 81562848096;

// Definindo PIB, mesma lógica na linha de cima. //

int pturisticoA01 = 52,pturisticoB01 = 13;

// pturistico para definir ponto turísticos. Int para números inteiros. //


    // Daqui para baixo é status com calculos.//

    float densiA01 = (float)populacaoA01 / areaA01;
    float pibpercapitaA01 = PIBA01 / (float)populacaoA01;

       
    float superpoderA01;
    superpoderA01 = (1 / densiA01) + ((float)populacaoA01 + areaA01 + PIBA01 + pturisticoA01 + pibpercapitaA01);
    //Fim da carta A01, vamos para carta B01 //
    
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
printf("\nPopulação: %lli ", populacaoA01); 
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

int menuEscolha;

printf("*** Menu Super Trunfo *** \n");
printf("1. Jogar e comparar cartas \n");
printf("2. Regras \n");
printf("3. Sair \n");
scanf("%i",&menuEscolha);

switch (menuEscolha)
{
case 1:

printf("BATTLE TIME! \n");

printf("---------------------------------------------------------------------------------------------------\n");

    printf("Quem venceu em população? \n");

    if(populacaoA01 > populacaoB01){
        printf("%s venceu! \n", cidadeA01);
    } else if(populacaoA01 < populacaoB01){
        printf("%s venceu! \n", cidadeB01);
    } else{
        printf("Deu empate entre %s e %s!", cidadeA01, cidadeB01);
    }

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em área? \n");

if(areaA01 > areaB01){
    printf("%s venceu! \n", codigocartaA01);
} else if(areaA01 < areaB01){
    printf("%s venceu! \n", codigocartaB01);
}else {
    printf("Deu empate!");
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em PIB? \n");

if(PIBA01 > PIBB01){
    printf("%s venceu! \n", codigocartaA01);
} else if (PIBA01 < PIBB01){
    printf("%s venceu! \n", codigocartaB01);
} else {
    printf("Deu empate!");
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em pontos turísticos? \n");

if(pturisticoA01 > pturisticoB01){
    printf("%s venceu! \n", codigocartaA01);
} else if (pturisticoA01 < pturisticoB01){
    printf("%s venceu! \n", codigocartaB01);
} else {
    printf("Deu empate!");
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em Pib per capita ? \n");

if(pibpercapitaA01 > pibpercapitaB01){
    printf("%s venceu! \n", codigocartaA01);
} else if (pibpercapitaA01 < pibpercapitaB01){
    printf("%s venceu! \n", codigocartaB01);
} else {
    printf("Deu empate!");
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu em densidade? \n");

if(densiA01 < densiB01){
    printf("%s venceu! \n", codigocartaA01);
} else if (densiA01 > densiB01){
    printf("%s venceu! \n", codigocartaB01);
} else {
    printf("Deu empate!");
}

printf("---------------------------------------------------------------------------------------------------\n");

printf("Quem venceu no super poder? \n");
if(superpoderA01 > superpoderB01){
    printf("%s venceu! \n", codigocartaA01);
} else if (superpoderA01 < superpoderB01){
    printf("%s venceu! \n", codigocartaB01);
} else {
    printf("Deu empate!");
}

printf("---------------------------------------------------------------------------------------------------\n");
    break;
case 2:
    printf("As regras, são simples, vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor. \n");

    break;
case 3:
    printf("Saindo do jogo...");

    break;
default:
    printf("Opção inválida!");
    break;
}

}










