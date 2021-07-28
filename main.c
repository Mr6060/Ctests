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
    int age = 5;

    struct Test test1;

    strcpy(test1.name, "test");
    test1.version[0] = 0.1;
    test1.version[1] = 1.0;

    printf("%d\n", returnAge(&age));
    printf("My new struct's name is %s, version %f\n", returnName(&test1), returnVersion(&test1)[1]);

    int myArray[5] = {1, 2, 3, 4, 5};

    printf("%d", returnArray(myArray)[0]);

    return 0;
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