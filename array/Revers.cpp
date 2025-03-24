
#include <iostream>
#include <vector>

void  revers(std :: vector <int> &array)
{
    int size  = array.size() ;
    std :: vector <int>tmp(size) ;
    int i = size -1 ;
    int j = 0 ;

    while(i>=0)
        tmp[j++] = array[i--] ;
    i = 0 ;
    while(i<size)
    {
        array [i] = tmp[i] ;
        i++ ;
    }
}
int main()
{
    std ::vector<int> data = {1,2,3,4,5,6} ;
    revers(data) ;
    int i = 0 ;
    while(i<data.size())
    {
        std :: cout <<data[i]<<"," ;
        i++ ;
    }

    std :: cout <<"\n" ;
}