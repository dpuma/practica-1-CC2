//4. Implemente una funci�n que reciba una cadena y retorne su tama�o. (Iterativa y recursiva)

int tamCadenaIt(char array[])
{
    int i = 0;
    while(array[i] != '\0')
        i++;
    return i+1;
}

int tamCadenaRec(char array[], int i)
{
    if(array[i]=='\0')
        return i+1;
    return tamCadenaRec(array, i+1);
}
