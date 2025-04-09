

#include <iostream>
#include <vector>

void  merge(std:: vector <int> &array,int left,int mid , int right)
{
    int n1 ;
    int n2 ;
    int i ,j ;
    n1 =  mid -left +1 ;
    n2 = right - mid ;
    std ::vector<int> L(n1), R(n2) ;
    for( i =0; i<n1;i++)
        L[i] =  array[left+i] ;
    for( j =0 ; j<n2 ;j++)
    R[j] = array[mid+j+1] ;
    i = 0;
    j = 0 ;
    int k = left ;
    while(i<n1&&j<n2)
    {
        if(L[i]<R[j])
            array[k] = L[i++] ;
        else
        array[k] = R[j++] ;
        k++ ;
    }
    while(i<n1)
    array[k++] = L[i++] ;
    while(j<n2)
    array[k++] = R[j++] ;
}

void merg_sort(std :: vector<int> &array,int left ,int right)
{
    if(left>=right)
    return ;
    int mid = left +(right -left)/2 ;
    merg_sort(array,left , mid) ;
    merg_sort(array, mid +1, right) ;
    merge(array,left , mid, right) ;
}

int main()
{

    std :: vector <int> array = {1,23,0,-123,1231,1434,-212,-143} ;
    int n = array.size() ;
    merg_sort(array,0,n-1) ;
    for(int i : array)
    {
        std :: cout << i<<" " ;
    }
    std :: cout <<"\n" ;
}