#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);

    bool module_ready = x;
    bool fault_state  = y;

    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", (int)module_ready + (int)fault_state);

}

// Согласно стандарту C, при преобразовании любого скалярного значения в _Bool результат равен:
//0 = 0
//1 во всех остальных случаях