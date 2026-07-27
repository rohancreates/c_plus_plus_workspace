#include <bits/stdc++.h>
//this solution uses recursion 
void solve(stack<int>&inputStack, int count, int size){
   
   if(count==size/2){
      inputStack.pop();
      return;  //here if we reach middle it will return the solved stack;
   }
   int num = inputStack.top();
   inputStack.pop();
   //before reaching mid we will continously store 

   solve(inputStack, count+1,size);

   inputStack.push(num);
}


void deleteMiddle(stack<int>&inputStack, int N){

	int count = 0 ; // this is the count which will help us check where we are 
   solve(inputStack,count , N);
   // Write your code here
   
}