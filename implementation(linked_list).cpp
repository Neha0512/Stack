#include<bits/stdc++.h>
using namespace std;

struct Node{
	Node *next;
	int data;
	Node(int x){
		data=x;
		next=NULL;
	}
};
struct newStack{
	Node *head;
	int len;
	newStack(){
		head=NULL;
		len=0;
	}
	
	void push(int x){
		Node *temp=new Node(x);
		temp->next=head;
		head=temp;
		len++;
	}
	
	int pop(){
	if(head==NULL){
		return INT_MAX;
	}
	int ans=head->data;	
	Node *temp=head;
	head=head->next;
	delete(temp);
	return ans;
	}
	
	int size(){
		return len;
	}
	
	bool Empty(){
		if(head==NULL){
			return -1;
		}
	}
	
};

int main(){
	Node *head;
	newStack s;
	s.push(4);
	s.push(14);
	s.push(114);
	s.push(1114);
	cout<<s.pop()<<" ";
}
