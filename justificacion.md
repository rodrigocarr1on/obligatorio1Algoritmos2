# Justificación de órdenes — Obligatorio 1

> **Instrucciones** (borrar esta sección antes de entregar): para cada ejercicio cuya
> letra plantea restricciones de órdenes (tiempo o espacio), justificar brevemente por
> qué la solución cumple, indicando qué estructuras de datos o algoritmos se utilizaron.
> Ejemplo: "La letra exige inserción en O(log n); usamos un min-heap sobre arreglo,
> donde flotar/hundir recorren a lo sumo la altura del árbol". Si un ejercicio no tiene
> restricciones de órdenes, indicarlo.

## Ejercicio 1
- Se utiliza un AVL, cuya altura es O(log K).
En la funcion alta y buscar se recorre como maximo la altura del arbol, por lo que ambas tienen O(log K) peor caso.
En la funcion rango se recorre de forma in order, descartando las ramas cuyos valores se salen del rango y recorre peor caso O(log K) niveles del arbol y se procesan los R elementos dentro del rango O(R) por eso se cumple O(log K + R) peor caso.

## Ejercicio 2
- Sin restricciones de órdenes. / Justificación: ...

## Ejercicio 3
- Sin restricciones de órdenes. / Justificación: ...

## Ejercicio 4
- Sin restricciones de órdenes. / Justificación: ...

## Ejercicio 5
- Sin restricciones de órdenes. / Justificación: ...

