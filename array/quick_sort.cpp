#include <iostream>
#include <vector>

int partition(std :: vector <int> &array, int low , int high)
{

    int pivot = array[high] ;
    int i = low ;
    for(int  j = low ; j<high;j++)
    {
        if(array[j]<pivot)
        {
            std :: swap(array[j], array[i]) ;
            i++ ;
        }
    }

    std :: swap(array[i],array[high]) ;
    return i ;
}

void  quick_sort(std :: vector<int>&array, int low , int high)
{
    if(low < high)
    {
        int pi = partition(array, low, high) ;
        quick_sort (array,low,pi-1) ;
        quick_sort(array, pi +1, high) ;
    }
}

int main()
{


    std :: vector<int> array = {1,2,3,-4,5,-6} ;
    int n = array.size() ;
    quick_sort(array,0,n-1) ;
    for(int i : array)
    {
        std :: cout <<i<<" " ;
    }
    std :: cout <<"\n " ;
}