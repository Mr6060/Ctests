#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Test
{
    double version[2];
    char name[10];
};

int returnAge(int *age);
char *returnName(struct Test *par);
double *returnVersion(struct Test *par);

int *returnArray(int array[]);

void sortArray(int array[], int length);
bool findElement(int array[], int length, int element);
bool binarySearch(int array[], int length, int element);

int main()
{
    // char input;
    // scanf("%c", &input);
    // while (input != 'n')
    // {
    //     if (input == 'y')
    //     {
    //         printf("Test");
    //     }
    //     fflush(stdin);
    //     scanf("%c", &input);
    // }

    int myArray[] = {2, 5, 1, 45, 18, 489, 456, 352, 986, 48756, 3652, 21, 210, 123, 456, 48987, 752, 1968, 4135, 14847, 3542, 25, 362, 3535, 36956, 123546, 12354, 54, 548, 4635, 48645, 454, 0, 15, -48, -589, 48945, 4645, 459878954, 38798, 967, 3, 654, 15, 324};
    int lenght = sizeof(myArray) / sizeof(myArray[0]);
    printf("The length is %d\n", lenght);

    for (size_t i = 0; i < lenght; i++)
    {
        printf("%d,", myArray[i]);
    }
    printf("\n");
    sortArray(myArray, lenght);
    for (size_t i = 0; i < lenght; i++)
    {
        printf("%d,", myArray[i]);
    }

    printf("\n Fount the element? %s", findElement(myArray, lenght, 459878954) ? "true" : "false");
    printf("\n Fount the element? %s", binarySearch(myArray, lenght, 459878954) ? "true" : "false");

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

void sortArray(int array[], int length)
{

    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = i + 1; j < length; j++)
        {
            if (array[i] > array[j])
            {
                int swapper = array[i];
                array[i] = array[j];
                array[j] = swapper;
            }
        }
    }
}

bool findElement(int array[], int length, int element)
{
    bool flag = false;
    int counter = 1;

    for (size_t i = 0; i < length; i++)
    {
        if (flag == true)
        {
            break;
        }
        if (array[i] == element)
        {
            flag = true;
        }
        counter++;
    }
    printf("\nfirst counter: %d", counter);
    return flag;
}

bool binarySearch(int array[], int length, int element)
{
    sortArray(array, length);
    bool flag = false;

    int lowerI = 0;
    int upperI = length - 1;
    int middleI = (upperI + lowerI) / 2;

    int counter = 1;

    while (flag == false)
    {

        if ((middleI == lowerI) || (middleI == upperI))
        {
            break;
        }

        if (array[middleI] == element)
        {
            flag = true;
            break;
        }
        if (element < array[middleI])
        {
            upperI = middleI;
            middleI = (upperI + lowerI) / 2;
        }
        else
        {
            lowerI = middleI;
            middleI = (upperI + lowerI) / 2;
        }
        counter++;
    }
    printf("\nsecond counter: %d", counter);
    return flag;
}