

#include <iostream>
#include <vector>

std :: vector <int> findPrefixSum(std ::vector <int> array)
{
    int size = array.size() ;
    std :: vector <int> data(size) ;

     data[0] = array[0] ;
    for(int i = 1 ; i<size; i++)
    {
        data[i] = array[i] + data[i-1] ;
    }

    return  data ;
}

int main()
{
    std :: vector <int> array = {1,2,3,4,5,6,7,8,9,10}  ;
    
    for(int i : array)
    std :: cout << i<<" " ;
    std :: cout <<"\n" ;
    std ::vector<int> data =findPrefixSum(array) ;
    for(int i: data)
    std :: cout <<i<<" " ;
}