#include "search_algos.h"

/**
 * interpolation_search - searches for a val in a sorted arr of
 * ints using the Interpolation search algo
 * @array: ptr to an arr
 * @size: size of arr
 * @value: val to find
 * Return: idx of match or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
size_t pos = 0;
int lo = 0;
int hi = 0;

if (array == NULL || size == 0)
{
return (-1);
}
hi = size - 1;
while (lo <= hi && value >= array[lo] && value <= array[hi])
{
pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) * (value - array[lo]));
if (pos > size - 1)
{
break;
}

printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] > value)
{
hi = pos - 1;
}else if(array[pos] < value)
{
lo = pos + 1;
}else
{
return (pos);
}
}
pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) * (value - array[lo]));
printf("Value checked array[%lu] is out of range\n", pos);
return (-1);
}
