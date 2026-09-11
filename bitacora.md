# Bitácora — Obligatorio 1

**Integrantes:** Nombre Apellido (Nº estudiante), Nombre Apellido (Nº estudiante)

> **Instrucciones** (borrar esta sección antes de entregar): agregar una entrada por
> cada día trabajado, indicando la fecha y quién trabajó (un integrante o "En conjunto").
> Registrar el proceso real: ideas exploradas, decisiones y su justificación, partes de
> implementaciones, bugs encontrados y cómo se corrigieron, resultados de pruebas y dudas
> abiertas. Si se usó IA ese día, indicar herramienta, consulta y qué se hizo con la
> respuesta. Una bitácora escrita íntegramente el día de la entrega implica pérdida de puntos.

## 2026-09-10
ACLARACION: El uso que le doy a la ia es estrictamente para plantear mis dudas y mis ideas de resolucion con la clara indicacion de que no me brinde codigo ni soluciones a ejercicios.

-Leí la letra del ejercicio 1. Identifique a grandes rasgos que funciones principales necesitaria (rango, alta, buscar).
Obtuve el codigo del TAD AVL brindado en clase, me di cuenta que estaba hecho para trabajar con int, entonces los cambie por un tipo T que pueda tomar cualquier valor ya que dependiendo del id (asi llame al numero de catalogo de una moneda o al titulo de una pintura).

--Funcion alta--
Comence a razonar como hacer la funcion alta, me di cuenta que ya tenia la funcion para insertar hecha en el tad, entonces simplemente maneje que hacer en base a las entradas desde ejercicio1.cpp. 

--pasaje de string id a numero en caso moneda--
Como utilice el tipo string para id, ya que dependiendo de la operacion este puede ser string o un numero, utilice stoll para transformar el string a long long (chatGPT). Antes de eso, me di cuenta de que int posiblemente no alcanzara para los limites superiores que me indican en la letra para ciertos valores, al invetigar confirme mi sospecha y consulte en google (gemini) sobre que tipos se utiliza en c++ para numeros muy grandes, me devolvio el tipo long long.

--Funcion buscar--
Aca me di cuenta que necesitaba una funcion auxiliar para buscar lo que me pasaran. Lo unico a destacar en esta parte (ya que es busqueda en un ABB, nada especial) es que como no estoy acostumbrado a utilizar private y public, hice toda la logica de la funcion auxiliar de busqueda en pubic, al consultarle a chatGPT si habia algun problema, me explico que debia hacer todo lo que trabaje directo con los nodos en private, y en la publica hacer la funcion que llame a la funcion privada, que a la vez esa funcion publica es la que seria llamada por mi funcion principal desde ejercicio1.cpp. 

--Funcion Rango--
Para esta funcion comence tratando de razonar la forma de busqueda para cumplir con los ordenes solicitados, discutiendo con chatGPT mis ideas. Mientras discutia me di cuenta de la modalidad de recorrido in order, para verificar que funcionaria para la solucion que necesitaba, realice recorridos mentales para arboles creados por mi con numeros random y un rango.


## AAAA-MM-DD — En conjunto
- Ejemplo: Implementamos ... Bug: ... Lo corregimos ...
- Pasan los casos de prueba 1 a 4 del ejercicio 1.
