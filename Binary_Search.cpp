#include <iostream>



int  find_target(int array[] ,int size, int target)
{
    int left = 0 ;
    int right  = size -1 ;
    int mid ;
    while(left <=right)
    {
        mid =(left +right)/2  ;
        if(target==array[mid])
        return  mid  ;
        if(target>array[mid])
        left = mid +1 ;
        else if(target<array[mid])
        right = mid -1 ;
    }

    return -1  ;
}

int main()
{
    int array[] = {1,2,44,100,123,300,900} ;
    std :: cout <<"index of " <<100<<"is:"<<find_target(array,7,900) ;
    std :: cout << "\n" ;
}
