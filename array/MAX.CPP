
#include <iostream>
#include <vector>



int max(std ::vector <int> array)
{
    int max = array[0] ;
    for(int i = 1 ; i<array.size();i++)
    {
        if(array[i]>max)
        max = array[i] ;
    }

    return  max ;
}

int  main()
{
    std ::vector data = {12,1112,3343,24423,1342,1432,234324,14414,1243};

    std :: cout <<max(data) ;
}