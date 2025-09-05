#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición optimizada
typedef struct 
{
    char *nombre;          // Cadena
    char *apellido;        // Cadena 
    unsigned int edad : 7;
    unsigned int id   : 16;
    float *calificaciones; // Array dinámico
    int numCalificaciones;
} Estudiante;

// Crear estudiante dinámicamente
Estudiante* crearEstudiante(const char* nombre, const char* apellido, int edad, int id, int numCalificaciones) {
    Estudiante* e = (Estudiante*) malloc(sizeof(Estudiante));
    if (!e) 
    {
        printf("Error al asignar memoria para estudiante.\n");
        exit(1);
    }

    // Reservar memoria exacta para nombre y apellido
    e->nombre = (char*) malloc(strlen(nombre) + 1);
    e->apellido = (char*) malloc(strlen(apellido) + 1);

    if (!e->nombre || !e->apellido) 
    {
        printf("Error al asignar memoria para cadenas.\n");
        free(e->nombre);
        free(e->apellido);
        free(e);
        exit(1);
    }

    strcpy(e->nombre, nombre);
    strcpy(e->apellido, apellido);

    e->edad = edad;
    e->id = id;
    e->numCalificaciones = numCalificaciones;

    // Reservar solo la memoria necesaria para las notas
    e->calificaciones = (float*) malloc(numCalificaciones * sizeof(float));
    if (!e->calificaciones) 
    {
        printf("Error al asignar memoria para calificaciones.\n");
        free(e->nombre);
        free(e->apellido);
        free(e);
        exit(1);
    }

    return e;
}

// Liberar memoria de un estudiante
void liberarEstudiante(Estudiante* e) 
{
    if (e) 
    {
        free(e->nombre);
        free(e->apellido);
        free(e->calificaciones);
        free(e);
    }
}

int main() {
    // Crear estudiante
    Estudiante* est = crearEstudiante("Laura", "Niño", 21, 12345, 3);

    // Asignar calificaciones
    est->calificaciones[0] = 4.5;
    est->calificaciones[1] = 3.8;
    est->calificaciones[2] = 4.9;

    // Mostrar datos
    printf("Estudiante: %s %s, Edad: %u, ID: %u\n", est->nombre, est->apellido, est->edad, est->id);
    printf("Calificaciones: ");
    for (int i = 0; i < est->numCalificaciones; i++) 
    {
        printf("%.2f ", est->calificaciones[i]);
    }
    printf("\n");

    // Liberar memoria
    liberarEstudiante(est);
    return 0;
}
