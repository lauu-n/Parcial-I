# Parcial 1 - Paradigmas de Programación

Este repositorio contiene las soluciones al **Parcial 1** de la materia *Paradigmas de Programación (2025-2)*.  
Cada punto aborda un paradigma o concepto fundamental en la programación.

---

## Punto 1: Ordenamiento de estudiantes (Imperativo vs Declarativo)

### Enfoques implementados
- **Declarativo (Python con `sorted`)**  
  Se utilizó la función `sorted` con una clave (`key=lambda x: (-x[1], x[0])`) que permite ordenar por nota y luego por nombre.  
  - Ventajas: código más corto, legible, expresivo.  
  - Usa inmutabilidad (devuelve una nueva lista).

- **Imperativo (Python con burbuja)**  
  Se implementó un ciclo `for` anidado con intercambios para ordenar manualmente.  
  - Ventajas: muestra el cómo funciona el algoritmo.  
  - Desventajas: más extenso, mutable, menos eficiente.

### Ejecución
```bash
python punto1.py
```

### Conclusión 
  Declarativo es ideal en práctica, Imperativo es útil para aprendizaje.

## Punto 1: Gestión de estudiantes en C (Optimización de memoria)

### Cada estudiante tiene:
- Nombre
- Apellido
- Edad
- ID
- Conjunto de calificaciones

### Técnicas implementadas
- Estructuras (`struct`) optimizadas → definición clara de campos.
- Cadenas dinámicas (`char`) → asignando solo la memoria necesaria.
- Arrays dinámicos (`float`) → ajustados al número de materias.
- Bitfields → usados para ahorrar espacio en campos pequeños como edad o ID.

  ### Ejecución
```bash
gcc punto2.c -o punto2
./punto2
```

## Punto 3: Calculo Lambda - Promedio de una lista

### Definición
El promedio se define como:
