#include <stdio.h>

int sumOfArr(int arr[], int i, int sum, int sizeOfArr)
{
    sum += arr[i];

    if (i == sizeOfArr - 1)
    {
        return sum;
    }
    else
    {
        sumOfArr(arr, i + 1, sum, sizeOfArr);
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 2, 4, 3};
    int sum = 0;

    sum = sumOfArr(arr, 0, sum, sizeof(arr) / sizeof(arr[0]));

    printf("%d", sum);

    return 0;
}
