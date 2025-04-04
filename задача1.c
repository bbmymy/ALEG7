#include <stdio.h>

int main() {
    char cvet[3][10] = {"красный", "синий", "зеленый"};

    for(int i = 0; i < 3; i++) {
        printf("%s\n", cvet[i]); // Исправлено на cvet[i]
    }
    
    return 0;
}
