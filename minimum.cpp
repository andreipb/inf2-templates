/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

template <typename T> T minimum(T x, T y) {
    return (x<y)?x:y;
}

// Si on n'inclut pas l'instanciation explicite suivante,
// alors il y a erreur dans le main lors de n'importe quel appel.
// (Il s'agit d'une erreur d'édition de liens.)
// Cette instanciation ne permet que l'usage avec 'int'.

template int  minimum<int>(int x, int y);

// On peut regarder le fichier minimum.o généré, et le désassembler avec la
// commande 'objdump -d minimum.o' -- la différence est claire dans le deux
// cas, i.e. avec vs. sans instanciation explicite.

/* int minimum2(int x, int y) {
    return (x<y)?x:y;
} */