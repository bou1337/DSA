
#include <iostream>
#include <vector>

void  revers(std :: vector <int> &array)
{
    
    int size  = array.size() ;
    int  right = 0 ;
    int left = size -1 ;
    int tmp  ;
    while(right<left)
    {
        tmp = array[left] ;
        array[left] = array[right] ;
        array[right] = tmp ;

        left --;
        right ++ ;
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