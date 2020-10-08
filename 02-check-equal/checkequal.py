'''
Author: Han.Oliver
Email: hanleilei@gmail.com
Date: 2020-10-08 07:11:58
LastEditors: Han.Oliver
LastEditTime: 2020-10-08 07:24:25
Description: check a digital stream's 1 and 2 equal, digital stream endup with 0
Param:  a digital stream contains 1 and 2, endup with 0
        112222112222221112211111112220
return: true or false
'''

# personally, I do not suppose this is a good solution, there are few corner case check..

def checkEqual():
    x, d = 0, 0

    x = int(input)

    while x != 0:
        if x != 1:
            d -= 1
        else:
            d += 1
        x = int(input())
    if d == 0:
        print("1")
        return True
    return False

if __name__ == "__main__":
    checkEqual()