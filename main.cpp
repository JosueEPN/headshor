#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
  ofstream ArchiOrde;
  ArchiOrde.open("Heapsort",ios::app);
    int max = 100;
    int A[max],j,item,temp,i,k,n;
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;
    ArchiOrde << "Cantidad de elementos: " << n  <<endl << "Original: {";
    for(i=1;i<=n;i++)
    {
      cout << "Ingrese el elemento " << i+1 <<": ";
      cin >> A[i];
     ArchiOrde << A[i] << " ";
    }
    ArchiOrde << "}\n";
 
    for(k=n;k>0;k--)
    {
        for(i=1;i<=k;i++)
        {
            item=A[i];
            j=i/2;
            while(j>0 && A[j]<item)
            {
                A[i]=A[j];
                i=j;
                j=j/2;
            }
            A[i]=item;
        }
        temp=A[1];
        A[1]=A[k];
        A[k]=temp;
    }
    cout<<"El orden es: {"<<endl;
    ArchiOrde << "Ordenado: {";
    for(i=1;i<=n;i++)
    {
    cout<<A[i]  << " ";
    ArchiOrde << A[i] << " ";
    }
    ArchiOrde << "}\n";
    
    
    return 0;
}