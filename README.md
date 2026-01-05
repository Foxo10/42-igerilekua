# 42 Piscine — odiez-gu

> Repositorio con mis proyectos y apuntes de la **42 Piscine** (Shell + C).  
> Objetivo: consolidar lo aprendido y tener una referencia para repasar.  
> ⚠️ **Disclaimer:** úsalo para aprender, no para copiar.

---

## Tabla de contenidos

- [Sobre este repo](#sobre-este-repo)
- [Reglas / Disclaimer](#reglas--disclaimer)
- [Estructura del repositorio](#estructura-del-repositorio)
- [Estado de proyectos](#estado-de-proyectos)
- [Highlights](#highlights)
- [Tips & Tricks](#tips--tricks)
- [Exam Tips](#exam-tips)
- [Recursos](#recursos)
- [Créditos](#créditos)

---

## Sobre este repo

Breve descripción de mi Piscine:

- Campus: 42 Urduliz
- Fechas: Octubre 2025
- Lenguajes: Shell, C
- Enfoque: aprendizaje “hands-on”, peer-to-peer

> Si quieres, añade 2–4 líneas contando qué te aportó la Piscine y qué aprendiste a nivel personal/técnico.

---

## Reglas / Disclaimer

### No copies, aprende

Este repo es una **referencia**:

- Intenta resolver los ejercicios por tu cuenta primero.
- Si te atascas, mira soluciones para **entender el enfoque**, no para “pegar y enviar”.
- Reescribe lo aprendido y pruébalo con tus propios casos.

### Pacing (consejo de ritmo)

- No te bloquees demasiado tiempo en un ejercicio.
- Prioriza avanzar de forma constante y volver luego a lo difícil.
- Practica exámenes con regularidad.

> Puedes mantener esta sección corta o ampliarla con tu “filosofía” de aprendizaje.

---

## Estructura del repositorio

```txt
.
├── shell-projects/
│   ├── shell00/
│   └── shell01/
├── c-projects/
│   ├── c00/
│   ├── c01/
│   ├── ...
|   └── c13/
├── rushes/
│   ├── rush00/
│   ├── rush01/
|   ├── rush02/
│   └── bsq/
├── exams/
│   ├── exam00/
│   ├── exam01/
│   └── final/
└── README.md
```

---

## Estado de proyectos

| Proyecto | Nota/Estado  | Conceptos clave  |
| :------: | :----------: | :--------------: |
| Shell00  | <10/10 / ✅> |   Shell basics   |
| Shell01  |  <5/8 / ✅>  |   Shell basics   |
|   C00    |  <8/8 / ✅>  |    Intro to C    |
|   C01    |  <9/9 / ✅>  |     Pointers     |
|   C02    | <12/13 / ✅> |  Strings/Arrays  |
|   C03    |  <6/6 / ✅>  |   String manip   |
|   C04    |  <4/6 / ✅>  |    Bases/Ints    |
|   C05    |  <8/9 / ✅>  |  Recursion/Iter  |
|   C06    |  <4/4 / ✅>  |    argc/argv     |
|   C07    |  <5/6 / ✅>  |  malloc/memory   |
|   C08    |  <0/6 / ❌>  | headers/structs  |
|   C09    |  <0/3 / ❌>  |  makefile/libs   |
|   C10    |  <0/4 / ❌>  | recreating progs |
|   C11    |  <0/8 / ❌>  |  func pointers   |
|   C12    | <0/18 / ❌>  |   linked lists   |
|   C13    |  <0/8 / ❌>  |    trees/bst     |

> ✅ = completado / entregado  
> ❌ = pendiente / por rehacer

---

## Highlights

Cosas que más me han aportado / de las que estoy más orgulloso:

- **<Proyecto/ejercicio>** — qué aprendí (debug, punteros, memoria, Makefiles, etc.)
- **<Proyecto/ejercicio>** — dificultad principal y cómo la resolví
- **<Rush/Exam>** — estrategia y puntos clave

---

## Tips & Tricks

### Reglas que me han funcionado

- **Compila siempre con flags** (y cuanto antes):
  - `-Wall -Wextra -Werror`
- Haz tests pequeños y repetibles (casos límite incluidos).
- Si te atascas, vuelve al enunciado y escribe tu propio mini-checklist.

### Debug rápido (mini checklist)

- ¿Segfault? revisa punteros `NULL`, índices, `malloc/free`, tamaños.
- ¿Resultado raro? imprime valores intermedios (`printf`) y reduce el caso.
- ¿Norm/style? arregla primero lo “mecánico” y luego la lógica.

---

## Exam Tips

### Antes del examen

- Ten atajos listos (editor, navegación, copiar/pegar, búsqueda).
- Practica con tiempo: **haz simulacros**.
- Prioriza ejercicios “seguros” primero para sumar puntos rápido.

### Durante el examen

- Lee el enunciado 2 veces.
- Empieza por lo que sabes resolver al 100%.
- Prueba con inputs raros (vacío, 1 char, tamaños grandes).
- Si algo falla, minimiza el caso y depura con calma.

### Después

- Si el ejercicio era reutilizable, anota el patrón (para futuros exams).
- Actualiza tu repo con lo aprendido (sin copiar “tal cual”, entiende y reescribe).

---

## Recursos

- **Man pages:** `man strlen`, `man malloc`, `man write`, etc.
- **C cheatsheet personal:** `<ruta/archivo>`
- **Tests:** `<ruta/carpeta>`
- **Notas:** `<ruta/carpeta o wiki>`

---

## Créditos

- Gracias a evaluadores/as y compañeros/as de la Piscine por el feedback.
- Inspiración de formato/estructura: repos públicos de Piscine (ver referencias en el README).

---

## License

Este repositorio es para fines educativos.  
Si vas a reutilizar contenido, **menciona la fuente** y úsalo de forma responsable.
