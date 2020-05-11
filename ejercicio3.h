// 3. Implementar una función que ordene los elementos de un arreglo: ascendente.

void quick(int array[], int ini, int fin)
{
    int tmp;
    int i = ini, j = fin;
    int piv = array[(fin+ini)/2];
    while(i <= j)
    {
        while(array[i] < piv)
            i++;
        while(array[j] > piv)
            j--;
        if (i <= j)
        {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            i++;
            j--;
        }
    }
    if (ini < j)
        quick(array, ini, j);
    if (i < fin)
        quick(array, i, fin);
}
