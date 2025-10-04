#include <stdio.h>

char estado1 [2], estado2 [2];
char codigo1[4], codigo2[4];
char cidade1[30], cidade2[30];
unsigned long int populacao1, populacao2;
float area1, area2;
long double PIB1, PIB2;
int turisticos1, turisticos2;
double densidade1, densidade2;
float PIBper1, PIBper2;
double superpoder1, superpoder2;

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
scanf("%f", &area1);

printf("digite o valor do produto interno bruto da sua cidade (PIB):\n");
scanf("%LF", &PIB1); 

printf("digite a quantidade de pontos turisticos da sua cidade:\n");
scanf("%d", &turisticos1);

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
scanf("%f", &area2);

printf("digite o valor do produto interno bruto da sua cidade (PIB):\n");
scanf("%LF", &PIB2);

printf("digite a quantidade de pontos turisticos da sua cidade:\n");
scanf("%d", &turisticos2);
}

float calculardensidade1() { 

return ((float)populacao1 / area1);
}

double calcularPIBpercapita1() { 

return ((long double)(PIB1 / populacao1) );
}

float calculardensidadepopulacional2() { 

return ((float)populacao2 / area2);
}

double calcularPIBpercapita2() {

return ((long double) (PIB2 / populacao2));
}

void atribuirvalorescalculados() { 

densidade1 = calculardensidade1();
PIBper1 = calcularPIBpercapita1();

densidade2 = calculardensidadepopulacional2();
PIBper2 = calcularPIBpercapita2();
}

double calcularsuperpoder1() { 

return((double) populacao1 + area1 + PIB1 + turisticos1 + PIBper1 + (1 / densidade1));

}

double calcularsuperpoder2() { 

return((double) populacao2 + area2 + PIB2 + turisticos2 + PIBper2 + (1 / densidade2));

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
printf("tamanho da cidade: %.2f Km^2\n", area1);
printf("PIB: %.2lf bilhões de reais\n", PIB1);
printf("pontos turisticos: %d\n", turisticos1);
printf("densidade populacional: %.2f km^2\n", densidade1);
printf("PIB per capita: %lf de reais\n", PIBper1);

       printf("\ncarta 2\n\n");

printf("codigo da cidade: %s%s\n", estado2, codigo2);
printf("cidade: %s\n", cidade2);
printf("população: %lu pessoas\n", populacao2);
printf("tamanho da cidade: %.2f Km^2\n", area2);
printf("PIB: %.2lf bilhões de reais\n", PIB2);
printf("pontos turisticos: %d\n", turisticos2);
printf("densidade populacional: %.2f km^2\n", densidade2);
printf("PIB per Capita: %lf de reais\n", PIBper2);
}

void saidadedadosfinal() { 

     printf("\ncarta 1 - (%s): %lu\n", cidade1, populacao1);

     printf("carta 2 - (%s): %lu\n", cidade2, populacao2);


}

void compararcartasfinais() { 

if (populacao1 > populacao2) { 

     printf("resultado: carta 1 (%s) venceu!\n", cidade1);

} else {   

     printf("resultado: carta 2 (%s) venceu!\n", cidade2);
     
}

}



int main() {

entradadedados();
atribuirvalorescalculados();
compararcartas();
exibirresultado();
saidadedadosfinal();
compararcartasfinais();

return 0;
}
