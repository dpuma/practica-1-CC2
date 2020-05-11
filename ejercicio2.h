// 2. Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).

void invertirArrayIt(int array[], int tam)
{
    int tmp;
    for(int i = 0; i < tam>>1; i++)
    {
        tmp = array[i];
        array[i] = array[tam-i-1];
        array[tam-i-1] = tmp;
    }
}

void invertirArrayRec(int array[], int ini, int fin)
{
    if(ini >= fin)
        return;

    int tmp = array[ini];
    array[ini] = array[fin];
    array[fin] = tmp;

    invertirArrayRec(array, ini+1, fin-1);
}
