#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int score = 0, errors = 0;
    char operators[3] = {'+', '-', '*'};
    int num1, num2, result, userAnswer;
    char oper;

    srand(time(NULL));
    printf("Bem-vindo ao Jogo de Matemática!\n");
    printf("Desenvolvido por: Seu Nome\n");
    printf("Instruções: Digite a resposta correta para as operações matemáticas apresentadas. Erre 3 vezes e o jogo acaba!\n\n");

    while (errors < 3) {
        num1 = rand() % 100;  
        num2 = rand() % 100;  
        int opType = rand() % 3;  
        oper = operators[opType];

        switch (oper) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            default:
                continue;
        }

        printf("Quanto é %d %c %d? ", num1, oper, num2);
        scanf("%d", &userAnswer);

        if (userAnswer == result) {
            printf("Correto!\n");
            score++;
        } else {
            printf("Errado! A resposta correta era %d.\n", result);
            errors++;
        }

        printf("Placar: %d pontos\n", score);
    }

    printf("\nJogo encerrado. Você fez %d pontos!\n", score);
    return 0;
}
