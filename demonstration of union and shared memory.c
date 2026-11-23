
#include <stdio.h>

union Data
{
    int integer;
    float decimal;
    char character;
};

int main()
{
    union Data data;

    printf("Size of union = %zu bytes\n", sizeof(data));

    data.integer = 100;
    printf("\nInteger = %d\n", data.integer);

    data.decimal = 25.5;
    printf("Float = %.2f\n", data.decimal);

    data.character = 'A';
    printf("Character = %c\n", data.character);

    printf("\nMemory Addresses:\n");
    printf("Integer = %p\n", (void *)&data.integer);
    printf("Float = %p\n", (void *)&data.decimal);
    printf("Character = %p\n", (void *)&data.character);

    return 0;
}
