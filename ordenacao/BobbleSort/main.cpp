/*
 * Bobble Sort simple algorthmc
 */
#include <iostream>

using namespace std;

int *montaVetor(int tam)
{
  int *vet = new int[tam];

  for(int i = 0; i < tam; i ++)
    vet[i] = rand() % 1000;
  return vet;
}

void troca(int *a, int *b)
{
  int aux = *a;
  *a = *b;
  *b = aux;
}

void bobbleSort(int *vet, int n)
{
  for(int i = 0; i < n; i++)
  {
    int menor = i;
    for(int j = i+1; j+i < n; j++)
      if(vet[j] < vet[menor])
        menor = j;
    if(menor != i)
      troca(&vet[i], &vet[menor]);
  }
}

int main()
{
  cout << "-- Booble Sort --" << endl;
  int tam = rand() % 1000;

  int *vet = montaVetor(tam);

  cout << "Vetor: ";
  for(int i = 0; i < tam; i++)
    cout << vet[i] << endl;
  
  cout << endl << endl;
  
  cout << "Bobble Sort" << endl;
  bobbleSort(vet, tam);
  cout << "Vetor: ";
  for(int i = 0; i < tam; i++)
    cout << vet[i] << endl;

  return 0;
}