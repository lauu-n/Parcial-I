import random

estudiantes = ["Juan", "Maria", "Pedro", "Ana", "Luis", "Laura"]
notas = [random.randint(1, 5) for _ in estudiantes]

# Juntar estudiantes con notas
lista = list(zip(estudiantes, notas))

# Declarativa
# Primero por nota descendente, luego por nombre ascendente
ordenada_d = sorted(lista, key=lambda x: (-x[1], x[0]))

# Imperativa
ordenada_i = lista.copy()
for i in range(len(ordenada_i)):
    for j in range(i + 1, len(ordenada_i)):
        if (ordenada_i[i][1] < ordenada_i[j][1]) or (ordenada_i[i][1] == ordenada_i[j][1] and ordenada_i[i][0] > ordenada_i[j][0]):
            ordenada_i[i], ordenada_i[j] = ordenada_i[j], ordenada_i[i]

if __name__ == "__main__":
    print("Estudiantes y notas originales:")
    for estudiante, nota in lista:
        print(f"{estudiante}: {nota}")

    print("\nOrdenados (Declarativa):")
    for estudiante, nota in ordenada_d:
        print(f"{estudiante}: {nota}")

    print("\nOrdenados (Imperativa):")
    for est, nota in ordenada_i:
        print(f"{estudiante}: {nota}")
