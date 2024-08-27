#include <stdio.h>

#define MAX_ESTUDIANTES 100

typedef struct {
    char nombre[50];
    float nota;
} Estudiante;

void ingresarDatosEstudiantes(Estudiante estudiantes[], int *cantidad);
void mostrarDatosEstudiantes(const Estudiante estudiantes[], int cantidad);
float calcularPromedioNotas(const Estudiante estudiantes[], int cantidad);

int main() {
    Estudiante estudiantes[MAX_ESTUDIANTES];
    int cantidad = 0;

    printf("Ingrese las notas de los estudiantes para el curso de Sistemas Operativos.\n");
    ingresarDatosEstudiantes(estudiantes, &cantidad);

    printf("\nDatos de los Estudiantes:\n");
    mostrarDatosEstudiantes(estudiantes, cantidad);

    float promedio = calcularPromedioNotas(estudiantes, cantidad);
    printf("\nPromedio de Notas: %.2f\n", promedio);

    return 0;
}

void ingresarDatosEstudiantes(Estudiante estudiantes[], int *cantidad) {
    int n,i;

    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_ESTUDIANTES) {
        printf("Número de estudiantes inválido. Debe estar entre 1 y %d.\n", MAX_ESTUDIANTES);
        return;
    }

    *cantidad = n;

    for (i = 0; i < n; i++) {
        printf("\nIngrese el nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);

        printf("Ingrese la nota del estudiante %d: ", i + 1);
        scanf("%f", &estudiantes[i].nota);

        if (estudiantes[i].nota < 0 || estudiantes[i].nota > 10) {
            printf("Nota inválida. La nota debe estar entre 0 y 10.\n");
            estudiantes[i].nota = 0;
        }
    }
}

void mostrarDatosEstudiantes(const Estudiante estudiantes[], int cantidad) {
    int i;
    for (i = 0; i < cantidad; i++) {
        printf("Nombre del Estudiante: %s\n", estudiantes[i].nombre);
        printf("Nota: %.2f\n", estudiantes[i].nota);
    }
}

float calcularPromedioNotas(const Estudiante estudiantes[], int cantidad) {
    float suma = 0.0;
    int i;
    for (i = 0; i < cantidad; i++) {
        suma += estudiantes[i].nota;
    }

    if (cantidad > 0) {
        return suma / cantidad;
    } else {
        return 0.0;
    }
}

