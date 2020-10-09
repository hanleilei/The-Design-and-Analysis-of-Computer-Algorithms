'''
Author: Han.Oliver
Email: hanleilei@gmail.com
Date: 2020-10-09 07:12:01
LastEditors: Han.Oliver
LastEditTime: 2020-10-09 09:39:25
Description: 
Param: 
return: 
'''
from collections import deque

EmptyPosition = -1

def inorder(vertex, leftson, rightson, number, countnode):
    count = 1
    if vertex >= countnode or vertex < 0:
        return
    if leftson[vertex] != EmptyPosition:
        inorder(leftson[vertex], leftson, rightson, number, countnode)
    number[vertex] = count
    print(vertex, end="\t")
    
    count += 1

    if rightson[vertex] != EmptyPosition:
        inorder(rightson[vertex], leftson, rightson, number, countnode)

def inorderNonRecursive(leftson, rightson, number, root):
    count = 1
    vertex = root
    s = deque()

    while True:
        while vertex != EmptyPosition:
            s.append(vertex)
            vertex = leftson[vertex]
        if len(s) > 0:
            vertex = s.pop()
            number[vertex] = count
            print(vertex, end="\t")
            count += 1
            vertex = rightson[vertex]
        else:
            break

def testInorder():
    number = [0] * 10
    # memset(number, 0, sizeof(int) * 10)
    leftson = [0] * 10
    rightson = [0] * 10

    leftson[0] = rightson[0] = EmptyPosition
    leftson[1] = 2
    rightson[1] = 6
    leftson[2] = 3
    rightson[2] = 4
    leftson[3] = rightson[3] = EmptyPosition
    leftson[4] = EmptyPosition
    rightson[4] = 5
    leftson[5] = rightson[5] = EmptyPosition
    leftson[6] = 7
    rightson[6] = 8
    leftson[7] = rightson[7] = EmptyPosition
    leftson[8] = EmptyPosition
    rightson[8] = 9
    leftson[9] = rightson[9] = EmptyPosition

    inorder(1, leftson, rightson, number, 10)

    print("\n")

    # # memset(number, 0, sizeof(int) * 10)
    # # inorder without recursive
    inorderNonRecursive(leftson, rightson, number, 1)
    print("\n")

if __name__ == "__main__":
    testInorder()