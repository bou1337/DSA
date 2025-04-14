

#include <vector>
#include <iostream>
#include <math.h>


int max_sum(std::vector <int> array,int k)
{
    int size = array.size() ;
    int sum1 = 0 ;
    int sum2 = 0 ;
    int max  ;

    for(int i = 0; i<k;i++)
    sum1 +=array[i] ;
    sum2 = sum1 ;
    max = sum1 ;
    for(int i=k;i<size;i++)
    {
    sum2 +=array[i]-array[i-k]; 
    max = std ::max(max,sum2) ;   
    }
    return max ;
}

int main()
{
    std :: vector <int> array = {100,2,3,4,10} ;
    std :: cout <<max_sum(array,3);
}