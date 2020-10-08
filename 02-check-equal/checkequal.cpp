/*
 * @Author: Han.Oliver
 * @Email: hanleilei@gmail.com
 * @Date: 2020-10-08 07:11:51
 * @LastEditors: Han.Oliver
 * @LastEditTime: 2020-10-08 07:19:00
 * @Description: check a digital stream's 1 and 2 equal, 
 *               digital stream endup with 0
 * @Param: a digital stream contains 1 and 2, endup with 0
 *         112222112222221112211111112220
 * @return: true or false
 */
#include <stdlib.h>
#include <iostream>

using namespace std;

bool checkEqual(){ int x = 0;
    int d = 0;
    cin >> x;
    
    while (x != 0) 
    {
        if (x != 1){
            d--;
        }
        else{
            d++;
        }
        cin>>x;
    }
    if (d == 0){
        cout << 1<<endl;
        return true;
    }
    return false;
    
}

int main(){
    checkEqual();
    return 0;
}