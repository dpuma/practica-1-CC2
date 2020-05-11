//5. Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).

void concatenar(char A[], char B[])
{

    int posInsertar = 0;
    while(B[posInsertar] != '0')
        posInsertar++;
    for(int i = 0; i < tamCadenaIt(A)-1; i++)
        B[i+posInsertar] = A[i];
}
