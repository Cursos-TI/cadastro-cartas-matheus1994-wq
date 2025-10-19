#include <stdio.h>

char estado1 [2], estado2 [2];
char codigo1[4], codigo2[4];
char cidade1[30], cidade2[30];
unsigned long int populacao1, populacao2;
double area1, area2;
double PIB1, PIB2;
int turisticos1, turisticos2;
double densidade1, densidade2;
double PIBper1, PIBper2;
double superpoder1, superpoder2;
int comparacao1;
int comparacao2;
unsigned long int comparacaofinal;


void entradadedados() {
                           printf("\nCarta 1\n\n");

printf("digite uma letra de A-H para representar o seu estado:\n");
scanf("%1s", estado1);

printf("digite um codigo para sua cidade (ex. 01, 02...):\n");
scanf("%3s", codigo1);

printf("digite o nome da sua cidade:\n");
scanf(" %[^\n]", cidade1);

printf("digite o tamanho da população da sua cidade:\n");
scanf("%lu", &populacao1);

printf("digite o tamanho (em km^2) da sua cidade:\n");
scanf("%lf", &area1);

printf("digite o valor do produto interno bruto da sua cidade (PIB):\n");
scanf(" %lf", &PIB1); 

printf("digite a quantidade de pontos turisticos da sua cidade:\n");
scanf(" %d", &turisticos1);

                          printf("\ncarta 2\n\n");

printf("digite uma letra de A-H para representar o seu estado:\n");
scanf("%1s", estado2);

printf("digite um codigo para sua cidade (ex. 01, 02...):\n");
scanf("%3s", codigo2);

printf("digite o nome da sua cidade:\n");
scanf(" %[^\n]", cidade2); 

printf("digite o tamanho da população da sua cidade:\n");
scanf("%lu", &populacao2);

printf("digite o tamanho (em Km^2) da sua cidade:\n");
scanf("%lf", &area2);

printf("digite o valor do produto interno bruto da sua cidade (PIB):\n");
scanf(" %lf", &PIB2);

printf("digite a quantidade de pontos turisticos da sua cidade:\n");
scanf(" %d", &turisticos2);
}

double calculardensidade1() { 

return ((double)populacao1 / area1);
}

double calcularPIBpercapita1() { 

return ((double) PIB1 / populacao1);
}

double calculardensidadepopulacional2() { 

return ((double)populacao2 / area2);

}

double calcularPIBpercapita2() {

return ((double) PIB2 / populacao2);

}

void atribuirvalorescalculados() { 

densidade1 = calculardensidade1();
PIBper1 = calcularPIBpercapita1();

densidade2 = calculardensidadepopulacional2();
PIBper2 = calcularPIBpercapita2();

}

double calcularsuperpoder1() { 

return((double) (populacao1 * area1) + (PIB1 * turisticos1) + (PIBper1 * densidade1));

}

double calcularsuperpoder2() { 

return((double) (populacao2 * area2) + (PIB2 * turisticos2) + (PIBper2 * densidade2));

}

void atribuirvaloresaosuperpoderes() { 

superpoder1 = calcularsuperpoder1();

superpoder2 = calcularsuperpoder2();

}

void exibirresultado() {
  
printf("\ncarta 1\n\n");

printf("codigo da cidade: %s%s\n", estado1, codigo1);
printf("cidade: %s\n", cidade1);
printf("população: %lu pessoas\n", populacao1);
printf("tamanho da cidade: %.2lf Km^2\n", area1);
printf("PIB: %lf\n", PIB1);
printf("pontos turisticos: %d\n", turisticos1);
printf("densidade populacional: %.3lf quantidade por km^2\n", densidade1);
printf("PIB per capita: %.2lf de reais\n", PIBper1);
printf("super poder: %.3lf", superpoder1);

       printf("\n\ncarta 2\n\n");

printf("codigo da cidade: %s%s\n", estado2, codigo2);
printf("cidade: %s\n", cidade2);
printf("população: %lu pessoas\n", populacao2);
printf("tamanho da cidade: %.2lf Km^2\n", area2);
printf("PIB: %lf\n", PIB2);
printf("pontos turisticos: %d\n", turisticos2);
printf("densidade populacional: %.3lf quantidade por km^2\n", densidade2);
printf("PIB per Capita: %.2lf de reais\n", PIBper2);
printf("super poder: %.3lf", superpoder2);
}

void printfparacompararcartas() { 

printf("\n========\n\njogo super trunfo C comparação\n");

printf("\n1. população:\n");
printf("2. tamanho da cidade:\n");
printf("3. PIB:\n");
printf("4. pontos turisticos:\n");
printf("5. densidade populacional:\n");
printf("6. PIBpercapita:\n");
printf("7 super poder:\n");
printf("8. sair do jogo:\n");
printf("escolha um atributo para comparação (de 1 a 7, ou 8 caso deseja sair)\n");
scanf("%d", &comparacao1);
 
if (comparacao1 == 1) {

printf("2. tamanho da cidade:\n");
printf("3. PIB:\n");
printf("4. pontos turisticos:\n");
printf("5. densidade populacional:\n");
printf("6. PIBpercapita:\n");
printf("7 super poder:\n");
printf("8. sair do jogo:\n");
printf("escolha outro atributo para comparação\n");
scanf("%d", &comparacao2);

} else if (comparacao1 == 2) { 

printf("\n1. população:\n");
printf("3. PIB:\n");
printf("4. pontos turisticos:\n");
printf("5. densidade populacional:\n");
printf("6. PIBpercapita:\n");
printf("7 super poder:\n");
printf("8. sair do jogo:\n");
printf("escolha outro atributo para comparação\n");
scanf("%d", &comparacao2);

} else if (comparacao1 == 3) { 

printf("\n1. população:\n");
printf("2. tamanho da cidade:\n");
printf("4. pontos turisticos:\n");
printf("5. densidade populacional:\n");
printf("6. PIBpercapita:\n");
printf("7 super poder:\n");
printf("8. sair do jogo:\n");
printf("escolha outro atributo para comparação\n");
scanf("%d", &comparacao2);

} else if (comparacao1 == 4) { 

printf("\n1. população:\n");
printf("2. tamanho da cidade:\n");
printf("3. PIB:\n");
printf("5. densidade populacional:\n");
printf("6. PIBpercapita:\n");
printf("7 super poder:\n");
printf("8. sair do jogo:\n");
printf("escolha outro atributo para comparação\n");
scanf("%d", &comparacao2);

} else if (comparacao1 == 5) { 

printf("\n1. população:\n");
printf("2. tamanho da cidade:\n");
printf("3. PIB:\n");
printf("4. pontos turisticos:\n");
printf("6. PIBpercapita:\n");
printf("7 super poder:\n");
printf("8. sair do jogo:\n");
printf("escolha outro atributo para comparação\n");
scanf("%d", &comparacao2);

} else if (comparacao1 == 6) { 

printf("\n1. população:\n");
printf("2. tamanho da cidade:\n");
printf("3. PIB:\n");
printf("4. pontos turisticos:\n");
printf("5. densidade populacional:\n");
printf("7 super poder:\n");
printf("8. sair do jogo:\n");
printf("escolha outro atributo para comparação\n");
scanf("%d", &comparacao2);

} else if (comparacao1 == 7) { 

printf("\n1. população:\n");
printf("2. tamanho da cidade:\n");
printf("3. PIB:\n");
printf("4. pontos turisticos:\n");
printf("5. densidade populacional:\n");
printf("6. PIBpercapita:\n");
printf("8. sair do jogo:\n");
printf("escolha outro atributo para comparação\n");
scanf("%d", &comparacao2);

} else if (comparacao1 == 8) { 

printf("\n saindo do jogo...\n");

}

} 

void compararcartas() { 

switch (comparacao1 || comparacao2)  { 

case 1:

if(populacao1 > area2) {  
if(populacao1 > PIB2) {  
if(populacao1 > turisticos2) { 
if(populacao1 < densidade2) { 
if(populacao1 > PIBper2) {  
if(populacao1 > superpoder2) { 

printf("população %s: %lu - superpoder %s: %lf", cidade1, populacao1, cidade2, superpoder2);

printf("\n %s, venceu!\n", cidade1);

} else if (superpoder2 > populacao1) { 

printf("população %s: %lu - superpoder %s: %lf", cidade1, populacao1, cidade2, superpoder2);

printf("\n %s, venceu!\n", cidade2);

} else if (superpoder2 == populacao1) { 

printf("população %s: %lu - superpoder %s: %lf", cidade1, populacao1, cidade2, superpoder2);

printf("\n deu empate!\n");

}

printf("\npopulação %s: %lu - PIBpercapita %s: %lf\n", cidade1, populacao1, cidade2, PIBper2);

printf("\n %s, venceu!\n", cidade1);

} else if (PIBper2 > populacao1) { 

printf("\npopulação %s: %lu - PIBpercapita %s: %lf\n", cidade1, populacao1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade2);

} else if (populacao1 == PIBper2) { 

printf("\npopulação %s: %lu - PIBpercapita %s: %lf\n", cidade1, populacao1, cidade2, PIBper2);

printf("\n deu empate!\n");

}

printf("\npopulação %s: %lu - densidade %s: %lf\n", cidade1, populacao1, cidade2, densidade2);

printf("\n %s venceu!", cidade1);

} else if (populacao1 > densidade2) { 

printf("\npopulação %s: %lu - densidade %s: %lf\n", cidade1, populacao1, cidade2, densidade2);

printf("\n %s, venceu!", cidade2);

} else if (populacao1 == densidade2) { 

printf("\npopulação %s: %lu - densidade %s: %lf\n", cidade1, populacao1, cidade2, densidade2);

printf("\n deu empate!\n");

}

printf ("\npopulação %s: %lu - ponto turisticos %s: %d\n", cidade1, populacao1, cidade2, turisticos2);

printf("\n %s venceu!", cidade1);

} else if (turisticos2 > populacao1) { 

printf ("\npopulação %s: %lu - ponto turisticos %s: %d\n", cidade1, populacao1, cidade2, turisticos2);

printf("\n %s venceu!", cidade2);

} else if (populacao1 == turisticos2) { 

printf ("\npopulação %s: %lu - ponto turisticos %s: %d\n", cidade1, populacao1, cidade2, turisticos2);

printf("\n deu empate!\n");

}

printf("\npopulação %s: %lu - PIB %s: %lf\n", cidade1, populacao1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade1);

} else if (PIB2 > populacao1) { 

printf("\npopulação %s: %lu - PIB %s: %lf\n", cidade1, populacao1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade2);

} else if (populacao1 == PIB2) { 

printf("\npopulação %s: %lu - PIB %s: %lf\n", cidade1, populacao1, cidade2, PIB2);

printf("\n deu empate!\n");

}

printf("\npopulacão %s: %lu - area %s: %lf\n", cidade1, populacao1, cidade2, area2);

printf("\n %s venceu!\n", cidade1);

} else if (area2 > populacao1) {  

printf("\n %s venceu!\n", cidade2);

} else if (populacao1 == area2) { 

printf("\n deu empate!\n");

}

break;

case 2: 

if (area1 >= populacao2) { 

printf("\narea %s: %lf - populacao %s: %lu\n", cidade1, area1, cidade2, populacao2);

printf("\n %s, venceu!\n", cidade1);

} else if (populacao2 > area1) { 

printf("\n area %s: %lf - populacao %s: %lu\n", cidade1, area1, cidade2, populacao2);

printf("\n %s, venceu!\n", cidade2);

} else if(area1 == populacao2) { 

printf("\n area %s: %lf - populacao %s: %lu\n", cidade1, area1, cidade2, populacao2);

printf("\n deu empate!\n");

}

if (area1 > PIB2) { 

printf("\narea %s: %lf - PIB %s: %lf\n", cidade1, area1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade1);

} else if (PIB2 > area1) { 

printf("\narea %s: %lf - PIB %s: %lf\n", cidade1, area1, cidade2, PIB2);

printf("\n %s, venceu!\n", cidade2);

} else if(area1 == PIB2) { 

printf("\narea %s: %lf - PIB %s: %lf\n", cidade1, area1, cidade2, PIB2);

printf("\n deu empate!\n");

} 

if(area1 > turisticos2) { 

printf("\ntamanho da cidade %s: %lf - pontos turisticos %s: %d\n", cidade1, area1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade1);

} else if (turisticos2 > area1) { 

printf("\ntamanho da cidade %s: %lf - pontos turisticos %s: %d\n", cidade1, area1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade2);

} else if (area1 == turisticos2) { 

printf("\ntamanho da cidade %s: %lf - pontos turisticos %s: %d\n", cidade1, area1, cidade2, turisticos2);

printf("\n deu empate!\n");

}

if(area1 > densidade2) { 

printf("\ntamanho da cidade %s: %lf - densidade populacional %s: %lf\n", cidade1, area1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade1);

} else if (area1 < densidade2) { 

printf("\ntamanho da cidade %s: %lf - densidade populacional %s: %lf\n", cidade1, area1, cidade2, densidade2);


printf("\n %s venceu!\n", cidade2);

} else if (area1 == densidade2) { 

printf("\ntamanho da cidade %s: %lf - densidade populacional %s: %lf\n", cidade1, area1, cidade2, densidade2);

printf("\n deu empate!\n");

}

if(area1 > PIBper2) { 

printf("\ntamanho da cidade %s: %lf - PIBpercapita %s: %lf\n", cidade1, area1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade1);

} else if(PIBper2 > area1) { 

printf("\ntamanho da cidade %s: %lf - PIBpercapita %s: %lf\n", cidade1, area1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade2);

} else if (area1 == PIBper2) { 

printf("\n deu empate!\n");

}

if(area1 > superpoder2) { 

printf("\ntamanho da cidade %s: %lf - super poder %s: %lf\n", cidade1, area1, cidade2, superpoder2);

printf("\n %s venceu!\n", cidade1);

} else if (superpoder2 > area1) { 

printf("\ntamanho da cidade %s: %lf - super poder %s: %lf\n", cidade1, area1, cidade2, superpoder2);

printf("\n %s venceu!\n", cidade2);

} else if (area1 == superpoder2) { 

printf("\ntamanho da cidade %s: %lf - super poder %s: %lf\n", cidade1, area1, cidade2, superpoder2);

printf("\n deu empate\n");

}

break;

case 3: 

if(PIB1 > populacao2) { 

printf("\nPIB %s: %lf - população %s: %lu\n", cidade1, PIB1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade1);

} else if(populacao2 > PIB1) { 

printf("\nPIB %s: %lf - população %s: %lu\n", cidade1, PIB1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade2);

} else if (populacao2 == PIB1) { 

printf("\nPIB %s: %lf - população %s: %lu\n", cidade1, PIB1, cidade2, populacao2);

printf("\n deu empate!\n");

}

if(PIB1 > area2) { 

printf("\nPIB %s: %lf - tamanho da cidade %s: %lf\n", cidade1, PIB1, cidade2, area2);

printf("\n %s venceu!\n", cidade1);

} else if (area2 > PIB1) { 

printf("\nPIB %s: %lf - tamanho da cidade %s: %lf\n", cidade1, PIB1, cidade2, area2);

printf("\n %s venceu!\n", cidade2);

} else if (PIB1 == area2) { 

printf("\nPIB %s: %lf - tamanho da cidade %s: %lf\n", cidade1, PIB1, cidade2, area2);

printf("\n deu empate!\n");

}

if(PIB1 > turisticos2) { 

printf("\nPIB %s: %lf - pontos turisticos %s: %d\n", cidade1, PIB1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade1);

} else if (turisticos2 > PIB1) { 

printf("\nPIB %s: %lf - pontos turisticos %s: %d\n", cidade1, PIB1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade2);

} else if (PIB1 == turisticos2) { 

printf("\nPIB %s: %lf - pontos turisticos %s: %d\n", cidade1, PIB1, cidade2, turisticos2);

printf("\n deu empate!\n");

} 

if(PIB1 < densidade2) { 

printf("\nPIB %s: %lf - densidade populacional %s: %lf\n", cidade1, PIB1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade1);


} else if (densidade2 > PIB1) { 

printf("\nPIB %s: %lf - densidade populacional %s: %lf\n", cidade1, PIB1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade2);

} else if (densidade2 == PIB1) { 

printf("\nPIB %s: %lf - densidade populacional %s: %lf\n", cidade1, PIB1, cidade2, densidade2);

printf("\n deu empate!\n");

}

if (PIB1 > PIBper2) { 

printf("\nPIB %s: %lf - PIBpercapita %s: %lf\n", cidade1, PIB1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade1);

} else if (PIBper2 > PIB1) { 

printf("\nPIB %s: %lf - PIBpercapita %s: %lf\n", cidade1, PIB1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade2);

} else if (PIBper2 == PIB1) { 

printf("\nPIB %s: %lf - PIBpercapita %s: %lf\n", cidade1, PIB1, cidade2, PIBper2);

printf("\n deu empate!\n");

}

if(PIB1 > superpoder2) { 

printf("PIB %s: %lf - super poder %s: %lf\n", cidade1, PIB1, cidade2, superpoder2);

printf("\n %s venceu!\n", cidade1);

} else if(superpoder2 > PIB1) { 

printf("PIB %s: %lf - super poder %s: %lf\n", cidade1, PIB1, cidade2, superpoder2);

printf("\n %s venceu!\n", cidade2);

} else if (PIB1 == superpoder2) { 

printf("PIB %s: %lf - super poder %s: %lf\n", cidade1, PIB1, cidade2, superpoder2);

printf("\n deu empate!\n");

}

break; 

case 4:

if(turisticos1 > populacao2) { 

printf("\npontos turistico %s: %d - população %s: %lu\n", cidade1, turisticos1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade1);

} else if (populacao2 > turisticos1) { 

printf("\npontos turistico %s: %d - população %s: %lu\n", cidade1, turisticos1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade2);

} else if (populacao2 == turisticos1) { 

printf("\npontos turistico %s: %d - população %s: %lu\n", cidade1, turisticos1, cidade2, populacao2);

printf("\n deu empate!\n");

}

if(turisticos1 > area2) { 

printf("\npontos turisticos %s: %d - tamanho da area %s: %lf\n", cidade1, turisticos1, cidade2, area2);

printf("\n %s venceu!\n", cidade1);

} else if (area2 > turisticos1) { 

printf("\npontos turisticos %s: %d - tamanho da area %s: %lf\n", cidade1, turisticos1, cidade2, area2);

printf("\n %s venceu!\n", cidade2);

} else if (area2 == turisticos1) { 

printf("\npontos turisticos %s: %d - tamanho da area %s: %lf\n", cidade1, turisticos1, cidade2, area2);

printf("\n deu empate!\n");

} 

if(turisticos1 > PIB2) { 

printf("\npontos turisticos %s: %d - PIB %s: %lf\n", cidade1, turisticos1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade1);

} else if (PIB2 > turisticos1) { 

printf("\npontos turisticos %s: %d - PIB %s: %lf\n", cidade1, turisticos1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade2);
       
} else if (PIB2 == turisticos1) { 

printf("\npontos turisticos %s: %d - PIB %s: %lf\n", cidade1, turisticos1, cidade2, PIB2);

printf("\n deu empate!\n");

} 

if (turisticos1 < densidade2) { 

printf("\npontos turisticos %s: %d - densidade populacional %s: %lf\n", cidade1, turisticos1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade1);

} else if (turisticos1 > densidade2) { 

printf("\npontos turisticos %s: %d - densidade populacional %s: %lf\n", cidade1, turisticos1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade2);

} else if (turisticos1 == densidade2) { 

printf("\npontos turisticos %s: %d - densidade populacional %s: %lf\n", cidade1, turisticos1, cidade2, densidade2);

printf("\n deu empate!\n");

}

if(turisticos1 > PIBper2) { 

printf("\npontos turisticos %s: %d - PIBpercapita %s: %lf\n", cidade1, turisticos1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade1);

} else if (PIBper2 > turisticos1 ) { 

printf("\npontos turisticos %s: %d - densidade populacional %s: %lf\n", cidade1, turisticos1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade1);

} else if (turisticos1 == PIBper2) { 

printf("\npontos turisticos %s: %d - densidade populacional %s: %lf\n", cidade1, turisticos1, cidade2, densidade2);

printf("\n deu empate!\n");

}

if(turisticos1 > superpoder2) { 

printf("\npontos turisticos %s: %d - super poder %s: %lf\n", cidade1, turisticos1, cidade2, superpoder2);

printf("\n %s venceu!\n", cidade1);

} else if (superpoder2 > turisticos1) { 

printf("\npontos turisticos %s: %d - densidade populacional %s: %lf\n", cidade1, turisticos1, cidade2, densidade2);

printf("\n %s, venceu!\n", cidade2);

} else if (superpoder2 == turisticos1) { 

printf("\npontos turisticos %s: %d - densidade populacional %s: %lf\n", cidade1, turisticos1, cidade2, densidade2);

printf("\n deu empate!\n");

}

break;

case 5: 

if (densidade1 < populacao1) { 

printf("\ndensidade populacional %s: %lf - população %s: %lu\n", cidade1, densidade1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade1);

} else if (populacao2 > densidade1) { 

printf("\ndensidade populacional %s: %lf - população %s: %lu\n", cidade1, densidade1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade2);

} else if (populacao2 == densidade1) { 

printf("\ndensidade populacional %s: %lf - população %s: %lu\n", cidade1, densidade1, cidade2, populacao2);

printf("\n deu empate!\n");

}

if(densidade1 < area2) { 

printf("\ndensidade populacional %s: %lf - tamanho da area %s: %lf\n", cidade1, densidade1, cidade2, area2);

printf("\n %s venceu!\n", cidade1);

} else if (densidade1 > area2) { 

printf("\ndensidade populacional %s: %lf - tamanho da area %s: %lf\n", cidade1, densidade1, cidade2, area2);

printf("\n %s venceu!\n", cidade2);

} else if (densidade1 == area2) { 

printf("\ndensidade populacional %s: %lf - tamanho da area %s: %lf\n", cidade1, densidade1, cidade2, area2);

printf("\n deu empate!\n");

}

if(densidade1 < PIB2) { 

printf("\ndensidade populacional %s: %lf - PIB %s: %lf\n", cidade1, densidade1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade1);

} else if (densidade1 > PIB2) { 

printf("\ndensidade populacional %s: %lf - PIB %s: %lf\n", cidade1, densidade1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade2);

} else if (densidade1 == PIB2) { 

printf("\ndensidade populacional %s: %lf - PIB %s: %lf\n", cidade1, densidade1, cidade2, PIB2);

printf("\n deu empate!\n");

}

if(densidade1 < turisticos2) { 

printf("\ndensidade populacional %s: %lf - pontos turisticos %s: %d\n", cidade1, densidade1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade1);

} else if (densidade1 > turisticos2) { 

printf("\ndensidade populacional %s: %lf - pontos turisticos %s: %d\n", cidade1, densidade1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade2);

} else if (densidade1 == turisticos2) { 

printf("\ndensidade populacional %s: %lf - pontos turisticos %s: %d\n", cidade1, densidade1, cidade2, turisticos2);

printf("\n deu empate!\n");

}

if(densidade1 < PIBper2) { 

printf("\ndensidade populacional %s: %lf - PIBpercapita %s: %lf\n", cidade1, densidade1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade1);

} else if (densidade1 > PIBper2) { 

printf("\ndensidade populacional %s: %lf - pontos turisticos %s: %d\n", cidade1, densidade1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade2);

} else if (densidade1 == PIBper2) { 

printf("\ndensidade populacional %s: %lf - pontos turisticos %s: %d\n", cidade1, densidade1, cidade2, turisticos2);

printf("\n deu empate!\n");

}

if (densidade1 < superpoder2) { 

printf("\ndensidade populacional %s: %lf - super poder %s: %lf\n", cidade1, densidade1, cidade2, superpoder2);

printf("\n %s venceu!\n", cidade1);

} else if (densidade1 > superpoder2) { 

printf("\ndensidade populacional %s: %lf - super poder %s: %lf\n", cidade1, densidade1, cidade2, superpoder2);

printf("\n %s venceu!\n", cidade2);

} else if (densidade1 == superpoder2) { 

printf("\ndensidade populacional %s: %lf - super poder %s: %lf\n", cidade1, densidade1, cidade2, superpoder2);

printf("\n deu empate!\n");

}

break;

case 6:

if(PIBper1 > populacao2) { 

printf("\nPIBpercapita %s: %lf - população %s: %lu\n", cidade1, PIBper1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade1);

} else if(populacao2 > PIBper1) { 

printf("\nPIBpercapita %s: %lf - população %s: %lu\n", cidade1, PIBper1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade2);

} else if (populacao2 == PIBper1) { 

printf("\nPIBpercapita %s: %lf - população %s: %lu\n", cidade1, PIBper1, cidade2, populacao2);

printf("\n deu empate!\n");

} 

if (PIBper1 > area2) { 

printf("\nPIBpercapita %s: %lf - tamanho da cidade %s: %lf\n", cidade1, PIBper1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade1);

} else if (area2 > PIBper1) { 

printf("\nPIBpercapita %s: %lf - tamanho da cidade %s: %lf\n", cidade1, PIBper1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade2);

} else if (area2 == PIBper1) { 

printf("\nPIBpercapita %s: %lf - tamanho da cidade %s: %lf\n", cidade1, PIBper1, cidade2, PIB2);

printf("\n deu empate\n");

}

if(PIBper1 > PIB2) { 

printf("\nPIBpercapita %s: %lf - PIB %s: %lf\n", cidade1, PIBper1, cidade2);

printf("\n %s, venceu!\n", cidade1);

} else if(PIB2 > PIBper1) { 

printf("\nPIBpercapita %s: %lf - PIB %s: %lf\n", cidade1, PIBper1, cidade2);

printf("\n %s venceu!\n", cidade2);

} else if (PIBper1 == PIB2) { 

printf("\n deu empate!\n");

} 

if(PIBper1 > turisticos2) { 

printf("\nPIBpercapita %s: %lf - pontos turisticos %s: %d\n", cidade1, PIBper1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade1);

} else if (turisticos2 > PIBper1) { 

printf("\nPIBpercapita %s: %lf - pontos turisticos %s: %d\n", cidade1, PIBper1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade2);

} else if (PIBper1 == turisticos2) { 

printf("\nPIBpercapita %s: %lf - pontos turisticos %s: %d\n", cidade1, PIBper1, cidade2, turisticos2);

printf("\n deu empate!\n");

}

if (PIBper1 < densidade2) { 

printf("\nPIBpercapita %s: %lf - densidade populacional %s: %lf\n", cidade1, PIBper1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade1);

} else if (PIBper1 > densidade2) { 

printf("\nPIBpercapita %s: %lf - densidade populacional %s: %lf\n", cidade1, PIBper1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade2);

} else if (PIBper1 == densidade2) { 

printf("\nPIBpercapita %s: %lf - densidade populacional %s: %lf\n", cidade1, PIBper1, cidade2, densidade2);

printf("\n deu empate!\n");

}

if (PIBper1 > superpoder2) { 

printf("\nPIBpercapita %s: %lf - super poder %s: %lf\n", cidade1, PIBper1, cidade2, superpoder2);

printf("\n %s venceu!\n", cidade1);

} else if (superpoder2 > PIBper1) { 

printf("\nPIBpercapita %s: %lf - densidade populacional %s: %lf\n", cidade1, PIBper1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade2);

} else if (superpoder2 == PIBper1) { 

printf("\nPIBpercapita %s: %lf - densidade populacional %s: %lf\n", cidade1, PIBper1, cidade2, densidade2);

printf("\n deu empate!\n");

}

break; 

case 7: 

if(superpoder1 > populacao2) { 

printf("\nsuperpoder %s: %lf - população %s: %lu\n", cidade1, superpoder1, cidade2, populacao2);

printf("\n %s, venceu!", cidade1);

} else if(populacao2 > superpoder1) { 

printf("\nsuperpoder %s: %lf - população %s: %lu\n", cidade1, superpoder1, cidade2, populacao2);

printf("\n %s venceu!\n", cidade2);

} else if (populacao2 == superpoder1) { 

printf("\nsuperpoder %s: %lf - população %s: %lu\n", cidade1, superpoder1, cidade2, populacao2);

printf("\n deu empate!\n");

}

if(superpoder1 > area2) { 

printf("\nsuper poder %s: %lf - tamanho da cidade %s: %lf\n", cidade1, superpoder1, cidade2, area2);

printf("\n %s venceu!\n", cidade1);

} else if (area2 > superpoder1) { 

printf("\nsuper poder %s: %lf - tamanho da cidade %s: %lf\n", cidade1, superpoder1, cidade2, area2);

printf("\n %s venceu!\n", cidade2);

} else if (area2 == superpoder1) { 

printf("\nsuper poder %s: %lf - tamanho da cidade %s: %lf\n", cidade1, superpoder1, cidade2, area2);

printf("\n deu empate!\n");

} 

if (superpoder1 > PIB2) { 

printf("\nsuper poder %s: %lf - PIB %s: %lf\n", cidade1, superpoder1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade1);

} else if (PIB2 > superpoder1) { 

printf("\nsuper poder %s: %lf - PIB %s: %lf\n", cidade1, superpoder1, cidade2, PIB2);

printf("\n %s venceu!\n", cidade2);

} else if (PIB2 == superpoder1) { 

printf("\nsuper poder %s: %lf - PIB %s: %lf\n", cidade1, superpoder1, cidade2, PIB2);

printf("\n deu empate!\n");

} 

if (superpoder1 > turisticos2) { 

printf("\nsuper poder %s: %lf - pontos turisticos %s: %d\n", cidade1 , superpoder1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade1);

} else if (turisticos2 > superpoder1) { 

printf("\nsuper poder %s: %lf - pontos turisticos %s: %d\n", cidade1 , superpoder1, cidade2, turisticos2);

printf("\n %s venceu!\n", cidade2);

} else if (turisticos2 == superpoder1) { 

printf("\nsuper poder %s: %lf - pontos turisticos %s: %d\n", cidade1 , superpoder1, cidade2, turisticos2);

printf("\n %s deu empate!\n");

}

if(densidade2 < superpoder1) { 

printf("\nsuper poder %s: %lf - densidade populacional %s: %lf\n", cidade1, superpoder1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade1);

} else if (densidade2 > superpoder1) { 

printf("\nsuper poder %s: %lf - densidade populacional %s: %lf\n", cidade1, superpoder1, cidade2, densidade2);

printf("\n %s venceu!\n", cidade2);

} else if (densidade2 == superpoder1) { 

printf("\nsuper poder %s: %lf - densidade populacional %s: %lf\n", cidade1, superpoder1, cidade2, densidade2);

printf("\n deu empate\n");

}

if (superpoder1 > PIBper2) { 

printf("\nsuper poder %s: %lf - PIBpercapita %s: %lf\n", cidade1, superpoder1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade1);

} else if (PIBper2 > superpoder1) { 

printf("\nsuper poder %s: %lf - PIBpercapita %s: %lf\n", cidade1, superpoder1, cidade2, PIBper2);

printf("\n %s venceu!\n", cidade2);

} else if (PIBper2 == superpoder1) { 

printf("\nsuper poder %s: %lf - PIBpercapita %s: %lf\n", cidade1, superpoder1, cidade2, PIBper2);

printf("\n deu empate!\n");


}

break;

case 8: 

printf("\n saindo do jogo...\n");

break;

default: 

printf("\n opção invalida! tente novamente.\n");

}


}


int main() {

entradadedados();
atribuirvalorescalculados();
atribuirvaloresaosuperpoderes();
exibirresultado();
printfparacompararcartas();
compararcartas();

return 0;

}
