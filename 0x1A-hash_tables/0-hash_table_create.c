#include "hash_tables.h"

/**
 * hash_table_create - To create a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Else - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hstbl;
    unsigned long int i;

    hstbl = malloc(sizeof(hash_table_t));
    if (hstbl == NULL)
        return (NULL);

    hstbl->size = size;
    hstbl->array = malloc(sizeof(hash_node_t *) * size);
    if (hstbl->array == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        hstbl->array[i] = NULL;

    return (hstbl);
}
