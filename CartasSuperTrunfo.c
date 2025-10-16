#include <stdio.h>

char estado1 [2], estado2 [2];
char codigo1[4], codigo2[4];
char cidade1[30], cidade2[30];
unsigned long int populacao1, populacao2;
float area1, area2;
double PIB1, PIB2;
int turisticos1, turisticos2;
double densidade1, densidade2;
float PIBper1, PIBper2;
long double superpoder1, superpoder2;
int comparacao;

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
scanf("%f", &area2);

printf("digite o valor do produto interno bruto da sua cidade (PIB):\n");
scanf(" %lf", &PIB2);

printf("digite a quantidade de pontos turisticos da sua cidade:\n");
scanf(" %d", &turisticos2);
}

float calculardensidade1() { 

return ((float)populacao1 / area1);
}

long double calcularPIBpercapita1() { 

return ((double) PIB1 / populacao1);
}

float calculardensidadepopulacional2() { 

return ((float)populacao2 / area2);
}

long double calcularPIBpercapita2() {

return ((double) PIB2 / populacao2);
}

void atribuirvalorescalculados() { 

densidade1 = calculardensidade1();
PIBper1 = calcularPIBpercapita1();

densidade2 = calculardensidadepopulacional2();
PIBper2 = calcularPIBpercapita2();
}

long double calcularsuperpoder1() { 

return((long double) populacao1 + area1 + PIB1 + turisticos1 + PIBper1 + (1 / densidade1));

}

long double calcularsuperpoder2() { 

return((long double) populacao2 + area2 + PIB2 + turisticos2 + PIBper2 + (1 / densidade2));

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
printf("PIB: %lf\n", PIB1);
printf("pontos turisticos: %d\n", turisticos1);
printf("densidade populacional: %.3lf quantidade por km^2\n", densidade1);
printf("PIB per capita: %f de reais\n", PIBper1);
printf("super poder: %.3LF", superpoder1);

       printf("\ncarta 2\n\n");

printf("codigo da cidade: %s%s\n", estado2, codigo2);
printf("cidade: %s\n", cidade2);
printf("população: %lu pessoas\n", populacao2);
printf("tamanho da cidade: %.2f Km^2\n", area2);
printf("PIB: %LF\n", PIB2);
printf("pontos turisticos: %d\n", turisticos2);
printf("densidade populacional: %.3lf quantidade por km^2\n", densidade2);
printf("PIB per Capita: %.2f de reais\n", PIBper2);
printf("super poder: %.3LF", superpoder2);
}

void printfparacompararcartas() { 

printf("\n===========\n\njogo super trunfo comparação\n\n");

printf("1. população\n"); 
printf("2. tamanho da cidade\n");
printf("3. PIB\n");
printf("4. pontos turisticos\n");
printf("5. densidade populacional\n");
printf("6. PIBpercapita\n");
printf("7. super poder\n");
printf("8. sair do jogo\n");
printf("faça sua escolha para comparação (1, 2, 3, 4, 5, 6, 7 ou 8 caso deseja sair!):");
scanf("%d", &comparacao);
}

void compararcartas() { 

switch (comparacao) { 

case 1: 

printf("\n%s: %lu, %s: %lu\n", cidade1, populacao1, cidade2, populacao2);

if (populacao1 > populacao2) { 

printf("\n%s, venceu!\n", cidade1);

} else if (populacao2 > populacao1) { 

printf("\n%s, venceu!\n", cidade2);

} else if (populacao1 == populacao2) { 

printf("\ndeu empate!\n");

}

break; 

case 2: 

printf("\n%s: %.2f, %s: %.2f\n", cidade1, area1, cidade2, area2);

if( area1 > area2 ) { 

printf("\n%s, venceu!\n", cidade1);

} else if (area2 > area1) { 

printf("\n%s, venceu!\n", cidade2);

} else if (area1 == area2 ) { 

printf("\ndeu empate!\n");

}

break; 

case 3: 

printf("\n%s: %Lf, %s: %Lf\n", cidade1, PIB1, cidade2, PIB2);

if(PIB1 > PIB2) { 

printf("\n%s venceu!\n", cidade1);

} else if (PIB2 > PIB1) { 

printf("\n%s venceu!\n", cidade2);

} else if (PIB1 == PIB2) { 

printf("\n deu empate!\n");

}

break;

case 4: 

printf("\n%s: %d, %s: %d\n",cidade1, turisticos1, cidade2, turisticos2);

if(turisticos1 > turisticos2) { 

printf("\n%s, venceu!\n", cidade1);

} else if (turisticos2 > turisticos1) { 

printf("\n%s, venceu!\n", cidade2);

} else if (turisticos1 == turisticos2) { 

printf("\ndeu empate!\n");

}

break;

case 5: 

printf("\n%s: %.3lf, %s: %.3lf\n", cidade1, densidade1, cidade2, densidade2);

if(densidade1 < densidade2) { 

printf("\n%s, venceu!\n", cidade1);

} else if (densidade2 < densidade1) { 

printf("\n%s, venceu!\n", cidade2);

} else if (densidade1 == densidade2) { 

printf("\ndeu empate!\n");

}

break;

case 6: 

printf("\n%s: %.2f, %s: %.2f\n", cidade1, PIBper1, cidade2, PIBper2);

if(PIBper1 > PIBper2) { 

printf("\n%s, venceu!\n", cidade1);

} else if (PIBper2 > PIBper1) { 

printf("\n%s, venceu!\n", cidade2);

} else if (PIBper1 == PIBper2) { 

printf("\ndeu empate!\n");

}

break;

case 7: 

printf("\n%s: %Lf, %s: %Lf\n", cidade1, superpoder1, cidade2, superpoder2);

if(superpoder1 > superpoder2){ 

printf("\n%s, venceu!\n", cidade1);

} else if (superpoder2 > superpoder1) { 

printf("\n%s, venceu!\n", cidade2);

} else if (superpoder1 == superpoder2) { 

printf("\ndeu empate!\n");

}

break;

case 8: 

printf("\nsaindo do jogo...\n");

break;

default: 

printf("\nopção invalida. tente novamente!");

break;

}

}

int main() {

entradadedados();
atribuirvalorescalculados();
exibirresultado();
printfparacompararcartas();
compararcartas();

return 0;

}
