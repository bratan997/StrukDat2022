#include <iostream>
#include <stdlib.h>
#define MAX_STACK 30
using namespace std;

void push();
void pop();
void print();
void decode();
bool isfull();
bool isempty();
char pesan[MAX_STACK]{'H','A','L','*','*','*','L','*','O','A','P','*','*','*','A','*','K','A','B','*','A','*','*','*','R'};
char decmsg[MAX_STACK]{};
int top=-1;
char ganti;

int main(){
    cout<<"Sebelum Diproses : ";
    for(int i=0;i<MAX_STACK;i++){
        cout<<pesan[i];
    }
    cout <<endl;
    cout<<"Setelah di decode : ";
    decode();

    for(int i=0;i<MAX_STACK;i++){
        cout<<decmsg[i];
    }
    cout<<endl;
}

void decode(){
    for(int i=0;i<MAX_STACK;i++){
        ganti=pesan[i];
        if(pesan[i]=='*'){
            ganti--;
        }
        else{
            push();
        }
    }
}

void push(){
    if(!isfull()){
        top++;
        decmsg[top]=ganti;
    }
    else
        cout<<"stak pwenuh";
}

void pop(){
    if(!isempty()){
        top--;
    }
    else{

       cout << "Stack Kwosong"<<endl;
    }
}
void print(){
    for(int i=0;i<MAX_STACK;i++){
        cout<<pesan[i]<<" ";
    }
    cout<<endl;
}

bool isfull(){
    if(top==MAX_STACK-1)
        return true;
    else
        return false;
}

bool isempty(){
    if(top==-1)
        return true;
    else
        return false;
}

