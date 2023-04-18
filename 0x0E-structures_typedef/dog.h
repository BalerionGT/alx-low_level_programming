#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic information
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A struct that contains basic information about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - Initialize a dog struct
 * @d: Pointer to the dog struct to be initialized
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog's owner name
 *
 * Description: This function initializes a dog struct with the given name,
 * age and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints a dog struct
 * @d: Pointer to the dog struct to be printed
 *
 * Description: This function prints the information contained in a dog struct.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Create a new dog struct
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog's owner name
 *
 * Description: This function creates a new dog struct with the given name,
 * age and owner.
 *
 * Return: Pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Free a dog struct
 * @d: Pointer to the dog struct to be freed
 *
 * Description: This function frees the memory allocated for a dog struct.
 */
void free_dog(dog_t *d);

/**
 * _strcpy - Copy a string to a buffer
 * @dest: Pointer to the buffer
 * @src: Pointer to the string to be copied
 *
 * Description: This function copies a string from src to dest.
 *
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src);

/**
 * _strlen - Get the length of a string
 * @s: Pointer to the string
 *
 * Description: This function returns the length of a string.
 *
 * Return: Length of the string
 */
int _strlen(char *s);

#endif

