#include <stdio.h>

int main() {
    char estado1 = 'A'; 
    char carta1[4] = "A01"; 
    char cidade1[20] = "São Paulo";
    int populacao1 = 5898000;
    float area1 = 1202222.0;
    float pib1 = 12345267.0;
    int pontos_turisticos1 = 30;
    
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", carta1);
    printf("cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("área: %.2f km²\n", area1);
    printf("pib: %.2f\n", pib1);
    printf("pontos turísticos: %d\n", pontos_turisticos1);
    
    printf("\n");// comando de pular linha
    printf("\n");// comando de pular linha

    char estado2 = 'A'; 
    char carta2[4] = "A02"; 
    char cidade2[20] = "Campinas";
    int populacao2 = 5898000;
    float area2 = 1202222.0;
    float pib2 = 12345267.0;
    int pontos_turisticos2 = 30;
    
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", carta2);
    printf("cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("área: %.2f km²\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("pontos turísticos: %d\n", pontos_turisticos2);
    
    printf("\n");
    printf("\n");
    
    return 0;
}
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
