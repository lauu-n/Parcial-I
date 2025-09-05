# Análisis Punto 1
# Diferencias entre la programación imperativa y declarativa/funcional

## 1. Claridad y legibilidad
- **Declarativa**: más concisa y directa, expresa la intención de ordenar en una sola línea con `sorted`.
- **Imperativa**: requiere bucles anidados y condiciones explícitas, lo que aumenta la complejidad visual.

Declarativa es más clara y legible.

---

## 2. Nivel de expresividad y abstracción
- **Declarativa**: abstrae el cómo funciona el ordenamiento, enfocándose en el qué.
- **Imperativa**: describe paso a paso el proceso (comparaciones, intercambios).

Declarativa tiene mayor expresividad y abstracción.

---

## 3. Manejo de estructuras de datos (mutabilidad vs inmutabilidad)
- **Declarativa**: `sorted` devuelve una **nueva lista** → favorece la inmutabilidad.
- **Imperativa**: modifica la lista directamente mediante intercambios → enfoque mutable.

Declarativa se orienta a la inmutabilidad.

---

## 4. Manejo de estado
- **Declarativa**: no depende del estado intermedio, `sorted` gestiona el proceso internamente.
- **Imperativa**: mantiene y actualiza estado en cada iteración (índices, swaps).

Declarativa reduce errores por cambios de estado.

---

## 5. Facilidad de mantenimiento y extensión
- **Declarativa**: basta con modificar la función de clave (`key=lambda ...`).
- **Imperativa**: implica reestructurar el algoritmo si cambian los criterios de orden.

Declarativa es más fácil de mantener y extender.

---

## 6. Eficiencia
- **Declarativa**: usa Timsort, muy eficiente para listas grandes.
- **Imperativa**: se asemeja a bubble sort, mucho menos eficiente.

Declarativa es más eficiente y escalable.

---

## Conclusión
- La **programación declarativa/funcional** ofrece mayor claridad, expresividad, eficiencia y facilidad de mantenimiento.  
- La **programación imperativa** es útil en un contexto pedagógico para comprender el funcionamiento de algoritmos, pero menos práctica en entornos reales.  

