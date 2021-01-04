/*
 * @Author: Han.Oliver
 * @Email: hanleilei@gmail.com
 * @Date: 2020-10-11 02:03:08
 * @LastEditors: Han.Oliver
 * @LastEditTime: 2020-10-11 02:09:57
 * @Description: 
 * @Param: 
 * @return: 
 */
#include <iostream>

int findMax(int* intarray, int sizeofArray){
    if(intarray == NULL || sizeofArray == 0){
        return 0;
    }
    int max=intarray[0];
    for (int i = 0; i < sizeofArray; i++){
        if (intarray[i] > max){
            max = intarray[i];
        }
    }
    return max;    
}

struct findMaxMin{
    int max;
    int min;
    
    MaxMin(){
        max = 0;
        min = 0;
    }
    MaxMin(int _max, int _min){
        max = _max;
        min = _min;
    }
};

MaxMin* findMaxMin(int* set, int size){
    MaxMin *result = new MaxMin();
    
}



