#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * Prototype:
 * _realloc(void *ptr, unsigned int old_size, unsignded int new_size);
 * @ptr: pointer to be memory previously allcoated with a call of 
 * malloc
 * @old_size: the size, in bytes of the allocated memory for @ptr.
 * @new_size: the new size, in bytes of the new memory block
 * The contents will be copied to the newly allocated space,in the
 * range from the start of @ptr up to the minimum of the old and new
 * sizes.
 * If @new_size > old_size, the "added" memory should not be
 * initialized.
 * If @new_size == @old_size, do not do anything and return @ptr
 * If @ptr == NULL, then the call is equavalent to malloc(new_size),
 * for all values of @old_size and @new_size
 * If @new_size == 0, and @ptr != NULL, then the call is equivalent
 * to free(ptr), and return NULL
 * Don't forget to free @ptr when it makes sense
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}












































