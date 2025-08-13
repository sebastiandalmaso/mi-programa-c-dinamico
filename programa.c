//programa ejemplo memoria dinamica
#include <stdio.h>
#include <stdlib.h> // Necesario para las funciones de asignación de memoria dinámica: malloc y free

int main() {
	int *arr; // Declaramos un puntero a un entero, que apuntará al inicio de nuestro arreglo dinámico
	int n;    // Variable para almacenar el tamaño deseado del arreglo
	
	printf("Bienvenido al programa de memoria dinamica en C.\n");
	printf("Ingrese el numero de elementos para el arreglo: ");
	scanf("%d", &n); // Leemos el tamaño que el usuario desea
	
	// Asignacion de memoria dinamica usando malloc
	// malloc(n * sizeof(int)) solicita 'n' bloques de memoria, cada uno del tamaño de un entero.
	// (int *) es un 'cast' para indicar que la memoria asignada será tratada como un puntero a entero.
	arr = (int *) malloc(n * sizeof(int));
	
	// Verificar si la asignacion de memoria fue exitosa
	// Si malloc no puede asignar la memoria, devuelve NULL. Es crucial verificar esto.
	if (arr == NULL) {
		printf("Error: No se pudo asignar memoria.\n");
		return 1; // Terminamos el programa con un código de error
	}
	
	printf("Memoria asignada exitosamente para %d enteros.\n", n);
	
	// En un programa real, aquí se usaría el arreglo 'arr'
	// Por ejemplo, se podrían llenar sus elementos o realizar operaciones con ellos.
	// Inicializar y mostrar los elementos del arreglo
	printf("Inicializando y mostrando los elementos del arreglo:\n");
	for (int i = 0; i < n; i++) {
		arr[i] = i * 100; // Asignamos un valor simple para el ejemplo
		printf("Elemento en indice %d: %d\n", i, arr[i]);
	}
	
	// Liberar la memoria asignada
	// Es muy importante liberar la memoria dinámica cuando ya no se necesita para evitar fugas de memoria.
	free(arr);
	printf("Memoria liberada.\n");
	
	return 0; // Terminación exitosa del programa
}
