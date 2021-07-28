#include <stdio.h>
#include <string.h>

struct Test
{
    double version[2];
    char name[10];
};

int returnAge(int *age);
char *returnName(struct Test *par);
double *returnVersion(struct Test *par);

int *returnArray(int array[]);

int main()
{
    char input;
    scanf("%c", &input);
    while (input == 'y')
    {
        fflush(stdin);
        printf("Test");
        scanf("%c", &input);
    }
}

int returnAge(int *age)
{
    return *age;
}

char *returnName(struct Test *par)
{
    return par->name;
}

double *returnVersion(struct Test *par)
{
    return par->version;
}

int *returnArray(int array[])
{
    return array;
}