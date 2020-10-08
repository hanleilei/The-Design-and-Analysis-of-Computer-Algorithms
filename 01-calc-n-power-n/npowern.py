'''
Author: Han.Oliver
Email: hanleilei@gmail.com
Date: 2020-10-08 04:48:56
LastEditors: Han.Oliver
LastEditTime: 2020-10-08 07:10:21
Description: calculate n power n
Param: 5
return: 3125
'''


def nPowerN():
    r1 = int(input())
    if r1 <= 0:
        print(0)
    else:
        r2 = r1
        r3 = r1 - 1
        while r3 > 0:
            r2 *= r1
            r3 -= 1
        print(r2)

if __name__ == "__main__":
    nPowerN()

