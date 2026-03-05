Voici une **version réécrite du README** en gardant **les mêmes informations et la même structure**, mais avec une formulation plus propre et professionnelle pour un projet **printf recréé pour Holberton School.

---

# HOLBERTON SCHOOL — `_printf`

Reimplementation partielle de la fonction standard
printf en langage C.

Ce projet reproduit certains comportements de `printf` en gérant plusieurs **spécificateurs de format** et en affichant les données correspondantes.

---

# Compilation

Utilisez la commande suivante pour compiler le projet :

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
./printf
```

---

# Exemple d'utilisation

```c
_printf("Character: %c\n", 'H');
_printf("String: %s\n", "Hello World");
_printf("Number: %d\n", -1234);
_printf("Literal percent: %%\n");
_printf("Unsigned: %u\n", 3000000000);
```

### Output attendu

```text
Character: H
String: Hello World
Number: -1234
Literal percent: %
Unsigned: 3000000000
```

---

# Spécificateurs de format supportés

| Format | Description                      |
| ------ | -------------------------------- |
| `%c`   | Affiche un caractère             |
| `%s`   | Affiche une chaîne de caractères |
| `%d`   | Affiche un entier signé          |
| `%i`   | Identique à `%d`                 |
| `%u`   | Affiche un entier non signé      |
| `%%`   | Affiche un symbole `%`           |

---

# Organisation des fichiers

## `_printf.c`

Contient la fonction principale `_printf`.

Responsabilités :

* Parcourir la chaîne de format
* Détecter les spécificateurs `%`
* Appeler la fonction appropriée grâce à `get_flag`
* Utiliser un tableau de **structures** associant chaque format à son handler

---

## `numbers_digits.c`

Gestion de l'affichage des nombres.

Fonctions :

* `print_nbr`
  Affiche un entier signé en utilisant la **récursion**

* `print_unsigned_nbr`
  Affiche un entier non signé également avec **récursion**

---

## `strings_chars.c`

Fonctions de base pour l'affichage de caractères et chaînes.

Fonctions :

* `_putchar`
  Affiche un seul caractère

* `_puts`
  Affiche une chaîne de caractères complète

---

## `strings_chars_handlers.c`

Handlers utilisés par `_printf` pour certains formats.

Fonctions :

* `_print_single_char`
  Gestion du format `%c`

* `_print_s_string`
  Gestion du format `%s`

---

## `_print_percent`

Fonction handler utilisée pour le format `%%`.

* Ignore l'argument
* Affiche simplement le caractère `%`

---

## `main.h`

Fichier d'en-tête principal contenant :

* Tous les **prototypes de fonctions**
* Les **directives `#include`**
* La **définition de la structure** utilisée pour associer les formats aux fonctions handlers
