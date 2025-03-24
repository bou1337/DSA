#include <iostream>

#include <vector>


int second_max(std ::vector <int> data)
{

    int max  = data[0] ;
    int second_max ;
    for(int i = 1 ; i<data.size() ; i++)
    if(data[i]>max)
    {
        second_max  = max ;
        max = data[i] ;
    }

    return second_max ;
}


int main()
{
    
    std :: vector <int> data  = {1,2,44,50,13,100} ;

    std :: cout << second_max(data)<<"\n" ;
}