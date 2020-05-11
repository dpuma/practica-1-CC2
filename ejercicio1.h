// 1. Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo. (Iterativa y recursiva).

int sumaArrayIt(int array[], int tam)
{
    int acum = 0;
    for(int i = 0; i < tam; acum += array[i++]);
    return acum;
}

int sumaArrayRec(int array[], int tam)
{
    tam--;
    if (tam == 0)
        return array[0];
    return (array[tam] + sumaArrayRec(array, tam));
}
