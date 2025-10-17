#include<bits/stdc++.h>
using namespace std;

class Stack{

    private:
        int *arr;
        int top;
        int size;

    public:
        Stack(int size){
            top = -1;
            this -> size = size;
            arr = new int[size];
        }

        ~Stack(){
            delete[] arr;
        }

        void push(int data){
            
            if(size - top > 1){
                top++;
                arr[top] = data;
            }else{
                cout << "Stack overflow" << endl;
            }
        }

        void pop(){
            if(top >= 0){
                top--;
            }else{
                cout << "Stack Underflow" << endl;
            }
        }

        int peek(){
            if(top >=0){
                return arr[top];
            }else{
                cout << "Stack is empty"<< endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }

        int gsize(){
            return size;
        }

        void printStack(){
            for(int i=0; i< size ; i++){
                cout << arr[i] << " " ;
            }
            cout <<endl;
        }

};


int main(){

    Stack st(5);
    cout << st.isEmpty() << endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(1);

    cout << st.gsize() << endl;

    cout << st.peek() << endl;

    st.pop();
    st.pop();

    cout << st.peek() << endl;
    return 0;
}