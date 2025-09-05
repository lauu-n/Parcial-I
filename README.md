# Parcial 1 - Paradigmas de Programación

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

---

## Punto 2: Gestión de estudiantes en C (Optimización de memoria)

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

---

## Punto 3: Calculo Lambda - Promedio de una lista

### Definición
El promedio se define como:

$$
\text{promedio}(xs) = \frac{\text{suma}(xs)}{\text{longitud}(xs)}
$$

## Definición en cálculo lambda

En notación de cálculo lambda podemos escribirlo como:

$$
\text{Promedio} = \lambda xs.\; \frac{\Sigma(xs)}{|xs|}
$$

donde:

- $\Sigma(xs)$ es una función que calcula la suma de los elementos de la lista.
- $|xs|$ es una función que calcula la longitud de la lista.

---

### Laura Niño
