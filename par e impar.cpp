/******************************************************************************
Inicializa um vetor de modo que os elementos de índice par receberão os respectivos
elementos divididos por 2; os elementos de índice ímpar receberão os respectivos
elementos multiplicados por 3. Imprima o vetor. 

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
    int vetorpar[3] = {0,0,0};
    
    int valor1 = 2;
    int valor2 = 4;
    int valor3 = 6;
    
    int par = valor1/2;
    int par2 = valor2/2;
    int par3 = valor3/2;
    
    
    int vetorb[3] = {par, par2, par3};
    
     vetorpar[0] = vetorb[0];
     vetorpar[1] = vetorb[1];
     vetorpar[2] = vetorb[2];
     
     cout << "o vetor  A é " << endl;
     cout << vetorpar[0] << endl << vetorpar[1] << endl <<  vetorpar[2]; 
     
     
     int vetorimpar[3] = {0,0,0};
    
    int valora = 1;
    int valorb = 3;
    int valorc = 5;
    
    int impar = valora*3;
    int impar2 = valorb*3;
    int impar3 = valorc*3;
    
    
    int vetorc[3] = {impar, impar2, impar3};
    
     vetorimpar[0] = vetorc[0];
     vetorimpar[1] = vetorc[1];
     vetorimpar[2] = vetorc[2];
     
     cout << endl << "o vetor B é " << endl;
     cout << vetorimpar[0] << endl << vetorimpar[1] << endl <<  vetorimpar[2]; 
    
    
    
    

    

    return 0;
}

