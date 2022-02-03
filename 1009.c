#include <stdio.h>
 
int main() {
    char vendedor;
    float salario_fixo, vendas_mes, vendas_comissao;

    scanf("%s", &vendedor);
    scanf("%f", &salario_fixo);
    scanf("%f", &vendas_mes);

    vendas_comissao = vendas_mes * 15/100 + salario_fixo;

    printf("TOTAL = R$ %.2f\n", vendas_comissao);
    return 0;
}
