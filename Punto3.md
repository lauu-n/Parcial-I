# Implementación del promedio en cálculo lambda

El promedio de una lista de `n` números se define como:

promedio(xs) = 
  /frac{suma (xs)}{longitud(xs)}
---

## Definición en cálculo lambda

En notación de cálculo lambda podemos escribirlo como:

Promedio = λ xs. Σ(xs) / |xs|

donde:

- Σ(xs) es una función que calcula la suma de los elementos de la lista.
- |xs| es una función que calcula la longitud de la lista.

---

## Ejemplo

Si xs = [2,4,6]:

Promedio([2,4,6]) = Σ([2,4,6]) / |[2,4,6]|  
= (2+4+6) / 3  
= 4

---

## Interpretación

- La función `Promedio` es una **función anónima** (`λ xs`) que recibe una lista.
- Se aplica la función `Σ` para obtener la suma de los elementos.
- Se aplica la función `|xs|` para obtener la longitud.
- Finalmente, se divide la suma entre la longitud para obtener el promedio.



