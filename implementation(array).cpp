#include<bits/stdc++.h>
using namespace std;

struct newStack{
int top;
int *next;
int cap;
newStack(int x){
	cap=x;
	next= new int[x];
	top=-1;
}

void push(int x){
	top++;
	next[top]=x;
}

int pop(){
	int res=next[top];
	top--; 
	return res;
}

int size(){
	return top+1;
}

int front(){
	return next[top];
}

bool Empty(){
	if(top==-1){
		return 1;
	}
}

void print(newStack s){
	
	while(top!= -1)
{
	cout<<next[top];
	pop();
}
}
};

int main(){
	newStack s(5);
	s.push(2);
	s.push(4);
	s.push(6);
//	s.print();
while(!s.Empty()){
	cout<<s.front();
	s.pop();
}
}



