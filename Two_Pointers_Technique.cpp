

#include <vector>
#include <iostream>


bool  find_target(std :: vector <int> array, int target)
{
    int left = 0 ;
    int right = array.size() -1 ;
    int sum ;

    while(left<right)
    {
        sum = array[left] + array[right] ;
        if(sum = target)
        return true ;
        else if(sum > target)
        right-- ;
        else 
        left ++ ;
    }
    return false ;
}

int main()
{

    std :: vector <int> array ={-1, 20,23,25,30,100} ;
    if(find_target(array,29))
    std :: cout <<"true\n" ;
    else 
    std :: cout <<"flase\n" ;
}