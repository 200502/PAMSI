#include "HeapSort.hh"
void Scalaj(Tablica &arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    
    for (i = 0; i < n1; i++)
        L[i] = arr.OdczytajElement(l + i);
    for (j = 0; j < n2; j++)
        R[j] = arr.OdczytajElement(m + 1+ j);
 
   
    i = 0; 
    j = 0;
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr.ZmienElement(k) = L[i];
            i++;
        }
        else
        {
            arr.ZmienElement(k) = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr.ZmienElement(k) = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr.ZmienElement(k) = R[j];
        j++;
        k++;
    }
}


void MergeSort(Tablica &tab,int poczatek,int koniec)
{
int srodek=poczatek+koniec+1/2;
if(poczatek!=koniec){
MergeSort(tab,poczatek,srodek-1);
MergeSort(tab,srodek,koniec);
Scalaj(tab,poczatek,srodek,koniec);	
}
}
