#include <stdio.h>

// Função para verificar se um CPF é válido
int cpf_valido(char cpf[]) {
    int b1, b2;

    // Calcula o primeiro dígito verificador (b1)
    b1 = ((cpf[0]-'0')*1 + (cpf[1]-'0')*2 + (cpf[2]-'0')*3 +
          (cpf[4]-'0')*4 + (cpf[5]-'0')*5 + (cpf[6]-'0')*6 +
          (cpf[8]-'0')*7 + (cpf[9]-'0')*8 + (cpf[10]-'0')*9) % 11;

    if (b1 == 10) {
        b1 = 0;
    }

    // Calcula o segundo dígito verificador (b2)
    b2 = ((cpf[0]-'0')*9 + (cpf[1]-'0')*8 + (cpf[2]-'0')*7 +
          (cpf[4]-'0')*6 + (cpf[5]-'0')*5 + (cpf[6]-'0')*4 +
          (cpf[8]-'0')*3 + (cpf[9]-'0')*2 + (cpf[10]-'0')*1) % 11;

    if (b2 == 10) {
        b2 = 0;
    }

    // Verifica se os dígitos verificadores calculados coincidem com os fornecidos
    if (b1 == cpf[12]-'0' && b2 == cpf[13]-'0') {
        return 1; // CPF válido
    } else {
        return 0; // CPF inválido
    }
}

int main() {
    char cpf[15]; // Tamanho suficiente para o CPF no formato xxx.xxx.xxx-xx + '\0'
    while (scanf("%s", cpf) != EOF) {
        if (cpf_valido(cpf)) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }
    return 0;
}
