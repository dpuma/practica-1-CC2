//6. Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b.

void copiar(char A[], char B[])
{

    for (int i = 0; i < tamCadenaIt(B)-1; i++)
    {
        if (A[i] != '\0')
            B[i] = A[i];
        else
        {
            while(B[i]!= '\0')
            {
                B[i] = '0';
                i++;
            }
            return;
        }
    }
}
