#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    int size;
    int capacity;
} DynArray;

DynArray da_create()
{
    DynArray da;
    da.data = NULL;
    da.size = 0;
    da.capacity = 0;
    return da;
}

void da_append(DynArray *self, int value)
{
    if (self->size >= self->capacity)
    {
        self->capacity = self->capacity == 0 ? 4 : self->capacity * 2;
        int *new_data = realloc(self->data, self->capacity * sizeof(int));
        if (new_data == NULL)
        {
            fprintf(stderr, "Hiba: Sikertelen memóriafoglalás!\n");
            exit(1);
        }
        self->data = new_data;
    }
    self->data[self->size] = value;
    self->size++;
}

void da_clear(DynArray *self)
{
    if (self->data != NULL)
    {
        free(self->data);
        self->data = NULL;
    }
    self->size = 0;
    self->capacity = 0;
}

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Hiba! Adja meg a fájl nevét!\n");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL)
    {
        fprintf(stderr, "Hiba! A fájlt nem sikerült megnyitni!\n");
        return 2;
    }

    DynArray da = da_create();
    int szam;

    while (fscanf(f, "%d", &szam) == 1)
    {
        da_append(&da, szam);
    }
    fclose(f);

    qsort(da.data, da.size, sizeof(int), cmp);

    for (int i = 0; i < da.size; i++)
    {
        printf("%d\n", da.data[i]);
    }

    da_clear(&da);

    da_append(&da, 42);
    da_append(&da, 100);
    da_clear(&da);

    return 0;
}