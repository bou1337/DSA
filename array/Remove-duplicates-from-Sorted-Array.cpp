#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>



int  new_size(std :: vector <int> &array)
{
    std :: unordered_set<int> s1 ;
    int j = 0  ;
    for(int  i: array)
    {
        if(s1.find(i) ==s1.end())
        {
            s1.insert(i) ;
            array[j] = i ;
            j++ ;
        }
    }


    return j ;
}


int main()
{

    std ::vector<int> data = {1,2,2,2,5,5,5,89,89,100} ;
    int size  = new_size(data) ;

    for(int i = 0 ; i<size;i++)
    {
        std :: cout << data[i] ;
        std :: cout <<"," ;
    }
    std :: cout <<"\n" ;
}