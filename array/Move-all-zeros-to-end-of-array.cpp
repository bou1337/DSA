#include <iostream>
#include <vector>

void  move(std :: vector<int> &array)
{
    int size ;
    int i ;
    int tmp ;
    int j  ;

    size  = array.size() ;
    i = 0 ;
    j = size -1 ;
    while(i<j)
    {
        while(!array[j])
        j-- ;
        if(array[i]==0)
        {
            tmp = array[j] ;
            array[j] = 0 ;
            array[i] = tmp ;
            j-- ;

        }
        i++ ;
    }
}

int  main()
{
    std :: vector <int> array = {1,0,2,0,00,0,0,0,-2} ;
    move(array) ;
    for(int i = 0 ;i<array.size(); i++)
    std :: cout <<array[i]<<"," ;
    std :: cout <<"\n" ;
}