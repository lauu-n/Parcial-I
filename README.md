📘 Parcial 1 - Paradigmas de Programación

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

### jecución
```bash
python punto1.py
