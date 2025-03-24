#include <vector>
#include <iostream>


void rotate_one(std::vector <int> &array)
{

    int size = array.size() ;
    int  last  = array[size-1] ;
    for(int j = size -1 ;j>0 ;j--)
    {
        array[j] = array[j-1] ;
    }
    array[0] = last  ;
    
}


void rotate_array(std::vector <int> &array,int d)
{
    for(int i = 0;i<d ;i++)
     rotate_one(array) ;
}


int main()
{
    std ::vector <int> array= {1,2,3,4,5,6} ;
    rotate_array(array,1) ;
    for(int i = 0 ;i<array.size();i++)
    {
        std :: cout <<array[i]<<"," ;
    }


}