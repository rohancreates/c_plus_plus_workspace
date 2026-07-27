#include <bits/stdc++.h> 
void f(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
        int num = s.top();
        s.pop();
        f(s,x);
        s.push(num);


}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    f(myStack,x);
    return myStack;
    // Write your code here.
}
