/*
 * @Author: Han.Oliver
 * @Email: hanleilei@gmail.com
 * @Date: 2020-10-08 04:48:56
 * @LastEditors: Han.Oliver
 * @LastEditTime: 2020-10-08 07:11:20
 * @Description: calculate n power n
 * @Param: 5
 * @return: 3125
 */
#include <stdlib.h>
#include <iostream>

using namespace std;

int nPowerN(){
    int r1; 
    cin >> r1;
    if (r1 <= 0){
        cout << 0;
    }
    else
    {
        int r2 = r1;
        int r3 = r1 - 1;
        while (r3 > 0){
            r2 = r2 * r1;
            r3 = r3 - 1;
        }
        cout << r2 << endl;        
    }
    return 0;
    
}

int main(){
    nPowerN();
    // system("Pause");
    return 0;
}
