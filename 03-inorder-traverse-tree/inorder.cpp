/*
 * @Author: Han.Oliver
 * @Email: hanleilei@gmail.com
 * @Date: 2020-10-08 07:33:10
 * @LastEditors: Han.Oliver
 * @LastEditTime: 2020-10-09 07:05:06
 * @Description: 
 * @Param: 
 * @return: 
 */
#include <stdlib.h>
#include <iostream>
#include <stack>

using namespace std;
const int EmptyPosition = -1;

void inorder(int vertex, int* leftson, int* rightson, int* number, int countNode){
    static int count = 1;
    if(vertex >= countNode || vertex < 0){
        return;
    }
    if(leftson[vertex] != EmptyPosition){
        inorder(leftson[vertex], leftson, rightson, number, countNode);
    }
    number[vertex] = count;
    cout << vertex << "\t";
    count++;
    if(rightson[vertex] != EmptyPosition){
        inorder(rightson[vertex], leftson, rightson, number, countNode);
    }
}

void inorderNonRecursive(int* leftson, int* rightson, int* number, int root) {
    static int count = 1;
    int vertex = root;
    stack<int>s;

    while(1){
        while(vertex != EmptyPosition){
            s.push(vertex);
            vertex = leftson[vertex];
        }
        if(!s.empty()){
            vertex = s.top();
            s.pop();

            number[vertex] = count;
            cout << vertex << "\t";
            count++;
            vertex = rightson[vertex];
        }
        else{
            break;
        }
    }
}

void testInorder(){
    int number[10];
    memset(number, 0, sizeof(int) * 10);
    int leftson[10];
    int rightson[10];

    leftson[0] = rightson[0] = EmptyPosition;
    leftson[1] = 2;
    rightson[1] = 6;
    leftson[2] = 3;
    rightson[2] = 4;
    leftson[3] = rightson[3] = EmptyPosition;
    leftson[4] = EmptyPosition;
    rightson[4] = 5;
    leftson[5] = rightson[5] = EmptyPosition;
    leftson[6] = 7;
    rightson[6] = 8;
    leftson[7] = rightson[7] = EmptyPosition;
    leftson[8] = EmptyPosition;
    rightson[8] = 9;
    leftson[9] = rightson[9] = EmptyPosition;

    inorder(1, leftson, rightson, number, 10);
    cout << endl;

    memset(number, 0, sizeof(int) * 10);
    // inorder without recursive
    inorderNonRecursive(leftson, rightson, number, 1);
    cout << endl;
}

int main(){
    testInorder();
    return 0;
}