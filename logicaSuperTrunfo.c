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
printf("\nPopulação: %lli ", populacaoB01); 
printf("\nÁrea: %.3f ", areaB01); 
printf("\nPIB: %.2f bilhões", PIBB01);
printf("\nPontos Turísticos: %i ", pturisticoB01);
printf("\nPib per capita: %.3f", pibpercapitaB01);
printf("\nDensidade Populacional: %.2f \n------------------------\n", densiB01);  
printf("\nSuper Poder: %.0f \n------------------------\n", superpoderB01); 

int menuEscolha1, menuEscolha2;
float cartaA01Atri1, cartaB01Atri1;
float cartaA01Atri2, cartaB01Atri2;
int resultado1, resultado2;

printf("*** Menu Super Trunfo *** \n");
printf("Você será a carta A01 \n");
printf("Escolha os atributos para comparar: \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Pontos Turísticos \n");
printf("5. Pib per capita \n");
printf("6. Densidade Populacional \n");
scanf("%i", &menuEscolha1);



// Escolher o primeiro atributo!
switch (menuEscolha1)
{
case 1:

cartaA01Atri1 = populacaoA01;
cartaB01Atri1 = populacaoB01;
resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;


    break;
case 2:

cartaA01Atri1 = areaA01;
cartaB01Atri1 = areaB01;
resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;


    break;

case 3:

cartaA01Atri1 = PIBA01;
cartaB01Atri1 = PIBB01;
resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;



        break;

case 4:

cartaA01Atri1 = pturisticoA01;
cartaB01Atri1 = pturisticoB01;
resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;



    break;

case 5:

cartaA01Atri1 = pibpercapitaA01;
cartaB01Atri1 = pibpercapitaB01;
resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;


    break;

case 6:

cartaA01Atri1 = densiA01;
cartaB01Atri1 = densiB01;
resultado1 = cartaA01Atri1 < cartaB01Atri1 ? 1 : 0;


    break;

default:
    printf("Você não escolheu um atributo! \n");
    break;
}




// Escolher o segundo atributo!
printf("Escolha o segundo atributo: \n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB \n");
printf("4. Pontos Turísticos \n");
printf("5. Pib per capita \n");
printf("6. Densidade Populacional \n");
scanf("%i", &menuEscolha2);

switch (menuEscolha2)
{
case 1:

cartaA01Atri2 = populacaoA01;
cartaB01Atri2 = populacaoB01;
resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;



    break;

case 2:
    
cartaA01Atri2 = areaA01;
cartaB01Atri2 = areaB01;
resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;


    break;

case 3:


cartaA01Atri2 = PIBA01;
cartaB01Atri2 = PIBB01;
resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;
         
    break;

case 4:
      
cartaA01Atri2 = pturisticoA01;
cartaB01Atri2 = pturisticoB01;
resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;


    break;

case 5:
    
cartaA01Atri2 = pibpercapitaA01;
cartaB01Atri2 = pibpercapitaB01;
resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;


    break;

case 6:
    
cartaA01Atri2 = densiA01;
cartaB01Atri2 = densiB01;
resultado2 = cartaA01Atri2 < cartaB01Atri2 ? 1 : 0;


    
    break;

default:
    printf("Você não escolheu um atributo! \n");
    break;
}

//Para ver quem venceu!
printf("Vamos ver quem venceu! \n");

if(cartaA01Atri1 == cartaA01Atri2){
    
    printf("Você escolheu atributos iguais! \n");

}

else if

(resultado1 && resultado2){
printf("-------------------------------------------------------------------------------------------------- \n");

printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri1);
printf("Contra \n");
printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri1);

resultado1 == 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
printf("***--------------------------------------*** \n");
printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri2);
printf("Contra \n");
printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri2);

resultado2 == 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
printf("***--------------------------------------*** \n");

printf("Você venceu! \n");

printf("-------------------------------------------------------------------------------------------------- \n");

}

else if(resultado1 != resultado2)

 {
printf("-------------------------------------------------------------------------------------------------- \n");

printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri1);
printf("Contra \n");
printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri1);

resultado1 == 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
printf("***--------------------------------------*** \n");
printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri2);
printf("Contra \n");
printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri2);

resultado2 == 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
printf("***--------------------------------------*** \n");
printf("Você empatou! \n");
printf("-------------------------------------------------------------------------------------------------- \n");
}

else

{

printf("-------------------------------------------------------------------------------------------------- \n");

printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri1);
printf("Contra \n");
printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri1);
    
resultado1 = 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");

printf("***--------------------------------------*** \n");

printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri2);
printf("Contra \n");
printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri2);

resultado2 = 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");

printf("***--------------------------------------*** \n");

printf("Você perdeu! \n");

printf("-------------------------------------------------------------------------------------------------- \n");
}

}










