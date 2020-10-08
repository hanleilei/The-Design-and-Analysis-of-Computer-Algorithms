'''
Author: han oliver
Date: 2020-10-08 04:25:57
LastEditTime: 2020-10-08 04:44:08
LastEditors: Please set LastEditors
Description: calcute n power of n
test: n = 5
test result: 3125
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