// Desafio (Novato) Super Trunfo - Países
// Tema 3 - Comparando Cartas do Super Trunfo

#include <stdio.h>
#include <string.h>

int main() {
    
    char cardOne[10] = "Carta 1", cityNameC1[50], stateC1[4], letterCodeC1[6];
    char cardTwo [10] = "Carta 2", cityNameC2[50], stateC2[4], letterCodeC2[6];
    unsigned long int populationC1;
    unsigned long int populationC2;
    int numberOfTouristAttractionsC1;
    int numberOfTouristAttractionsC2;
    int comparisonResultPopulation,  comparisonResultCityArea, comparisonResultGrossDomesticProduct, 
    comparisonResultTouristAttraction, comparisonResultPopulationDensity, comparisonResultgrossDomesticProductPerCapita, comparisonResultSuperPower;
    float cityAreaC1, grossDomesticProductC1, populationDensityC1, grossDomesticProductPerCapitaC1, superPowerC1;
    float cityAreaC2, grossDomesticProductC2, populationDensityC2, grossDomesticProductPerCapitaC2, superPowerC2;


    // Entrada de Dados - Carta 01
    printf("Super Trunfo Brasil - Cadastro da Primeira Carta \n\n");

    printf("Informe o nome da cidade: ");
    fgets(cityNameC1, sizeof(cityNameC1), stdin);
    cityNameC1[strcspn(cityNameC1, "\n")] = 0;

    printf("Informe o estado (Incluir Sigla - BA, SP, RJ...): ");
    scanf("%3s", stateC1);

    printf("Informe o código da carta \n(Incluir Sigla + Númeração 01 à 04 - Ex: BA01, SP02...): ");
    scanf("%5s", letterCodeC1);

    printf("Informe o número de habitantes da cidade: ");
    scanf("%lu", &populationC1);

    printf("Informe a área (Em km²): ");
    scanf("%f", &cityAreaC1);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &grossDomesticProductC1);

    printf("Informe a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numberOfTouristAttractionsC1);

    getchar(); // Limpa '\n' do buffer

    // Entrada de Dados - Carta 02
    printf("\nSuper Trunfo Brasil - Cadastro da Segunda Carta \n\n");

    printf("Informe o nome da cidade: ");
    fgets(cityNameC2, sizeof(cityNameC2), stdin);
    cityNameC2[strcspn(cityNameC2, "\n")] = 0;

    printf("Informe o estado (Incluir Sigla - BA, SP, RJ...): ");
    scanf("%3s", stateC2);

    printf("Informe o código da carta \n(Incluir Sigla + Númeração 01 à 04 - Ex: BA01, SP02...): ");
    scanf("%5s", letterCodeC2);

    printf("Informe o número de habitantes da cidade: ");
    scanf("%lu", &populationC2);

    printf("Informe a área (Em km²): ");
    scanf("%f", &cityAreaC2);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &grossDomesticProductC2);

    printf("Informe a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &numberOfTouristAttractionsC2);

    // Cálculos - Carta 01
    populationDensityC1 = populationC1 / cityAreaC1;
    grossDomesticProductPerCapitaC1 = (grossDomesticProductC1 * 1000000000.0f) / populationC1;

    // Cálculos - Carta 02
    populationDensityC2 = populationC2 / cityAreaC2;
    grossDomesticProductPerCapitaC2 = (grossDomesticProductC2 * 1000000000.0f) / populationC2;

    // Cálculos - Super Poder
    superPowerC1 = (float) populationC1 + cityAreaC1 + (grossDomesticProductC1 * 1000000000.0f) + (float) numberOfTouristAttractionsC1 + grossDomesticProductPerCapitaC1 + (1.0f / populationDensityC1);
    superPowerC2 = (float) populationC2 + cityAreaC2 + (grossDomesticProductC2 * 1000000000.0f) + (float) numberOfTouristAttractionsC2 + grossDomesticProductPerCapitaC2 + (1.0f / populationDensityC2);

    // Comparações
    comparisonResultPopulation = populationC1 > populationC2;
    comparisonResultCityArea = cityAreaC1 > cityAreaC2;
    comparisonResultGrossDomesticProduct = grossDomesticProductC1 > grossDomesticProductC2;
    comparisonResultTouristAttraction = numberOfTouristAttractionsC1 > numberOfTouristAttractionsC2;
    comparisonResultPopulationDensity = populationDensityC1 < populationDensityC2;
    comparisonResultgrossDomesticProductPerCapita = grossDomesticProductPerCapitaC1 > grossDomesticProductPerCapitaC2;
    comparisonResultSuperPower = superPowerC1 > superPowerC2;

    // Saída de Dados - Carta 01
    printf("\n\nCarta 1:\n\n");
    printf("Estado: %s\n", stateC1);
    printf("Código: %s\n", letterCodeC1);
    printf("Nome da Cidade: %s\n", cityNameC1);
    printf("População: %lu\n", populationC1);
    printf("Área: %.2f km²\n", cityAreaC1);
    printf("PIB: %.2f bilhões de reais\n", grossDomesticProductC1);
    printf("Número de Pontos Turísticos: %d\n", numberOfTouristAttractionsC1);
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensityC1);
    printf("PIB per Capita: %.2f reais\n", grossDomesticProductPerCapitaC1);

    // Saída de Dados - Carta 02
    printf("\nCarta 2:\n\n");
    printf("Estado: %s\n", stateC2);
    printf("Código: %s\n", letterCodeC2);
    printf("Nome da Cidade: %s\n", cityNameC2);
    printf("População: %lu\n", populationC2);
    printf("Área: %.2f km²\n", cityAreaC2);
    printf("PIB: %.2f bilhões de reais\n", grossDomesticProductC2);
    printf("Número de Pontos Turísticos: %d\n", numberOfTouristAttractionsC2);
    printf("Densidade Populacional: %.2f hab/km²\n", populationDensityC2);
    printf("PIB per Capita: %.2f reais\n\n", grossDomesticProductPerCapitaC2);

    // Comparações
    printf("Comparação de cartas (Atributo: PIB):\n\n");
    if (comparisonResultGrossDomesticProduct) {
        printf("%s - %s (SP): R$ %.2f bilhões de reais\n", cardOne, cityNameC1, grossDomesticProductC1);
        printf("Resultado: %s - (%s) venceu!", cardOne, cityNameC1);
    } else {
        printf("%s - %s (RJ): R$ %.2f bilhões de reais\n", cardTwo, cityNameC2, grossDomesticProductC2);
        printf("Resultado: %s - (%s) venceu!", cardTwo, cityNameC2);
    }

    return 0;
}