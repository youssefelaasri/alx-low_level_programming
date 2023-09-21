#ifndef dog_H
#define dog_H
/**
  *struct dog - our struct
  *@name: nmae
  *@age: our age
  *@owner: owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);

#endif
