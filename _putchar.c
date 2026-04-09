#include <unistd.h>

/**
 * _putchar - écrit le caractère c sur la sortie standard (stdout)
 * @c: Le caractère à afficher
 *
 * Retour : 1 en cas de succès, -1 en cas d'erreur.
 */
int _putchar(char c)
{
    /* La fonction write utilise le descripteur de fichier 1 pour la sortie standard */
    return (write(1, &c, 1));
}
