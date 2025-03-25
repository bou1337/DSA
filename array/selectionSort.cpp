#include <vector>
#include <iostream>


void  selectionSort(std ::vector<int> &array)
{

    int min ;
    int tmp ;
    int index ;
    int size  =  array.size() ;

    for(int i = 0 ; i<size;i++)
    {
        min =array[i] ;

        for(int j = i+1 ; j<size;j++)
        {
            if(min > array[j])
            {
            min = array[j] ;
            index = j ;
            }
        }

        tmp = array[i] ;
        array[i] = min ;
        array[index] = tmp ;
    }
}

int  main()
{

    std :: vector <int> array = {1,3,6,-1,-12,34,100,1,2} ;
    selectionSort(array) ;
    for(int i :array)
    std :: cout <<i<<"," ;
}