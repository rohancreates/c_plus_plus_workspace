#include <bits/stdc++.h>

#include<stack>
using namespace std;
int main(){

    stack<int> st;

    st.push(100);        // Insert
    st.push(200);        // Insert
    st.push(300);        // Insert
    st.push(400);        // Insert
    st.push(679797900);        // Insert
    st.pop();          // Remove top
    st.top();          // Top element    
   cout<<"size is : "<< st.size()<<endl;         // Number of elements

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}