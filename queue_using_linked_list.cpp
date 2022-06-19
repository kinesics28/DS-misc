#include <iostream>
using namespace std;

class Node{
  
    public:
        int data;
        Node *next;
        Node(){
            next=NULL;
        }
};

Node *head = NULL;
Node *tail = NULL;

void push(){
    Node *ptr= new Node;
    cin>>ptr->data;

    if (head==NULL && tail==NULL){
        head=ptr;
        tail=ptr;
    }
    else {
        ptr->next=tail;
        tail=ptr;
    }
}

Node* loopPop(){
    Node* ptr=tail;
    while(ptr->next !=head){
        ptr= ptr->next;
    }
    return ptr;
}

int pop(){
    if (head==tail){
        int x=tail->data;
        Node *ptr= tail;
        tail=head=NULL;
        free(ptr);
        return x;
    }
    else if(tail==NULL){
        cout<<"Underflow!!"<<endl;
        return 0;
    }
    else{
        Node *ptr=loopPop();
        head=ptr;
        ptr=head->next;
        int x=ptr->data;
        free(ptr);
        return x;
    }
}

void traverse(){
    Node *ptr= tail;
    cout<<"Tail--> ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"<--Head"<<endl;
}
int main()
{
    int choice;
    while(true){
        cout<<"Enter your choice ";
        cin>>choice;
        if (!choice) break;
        else if(choice==1){ //insert
            push();
        }
        else if(choice==2){ // pop
            int x= pop();
            if(!x){
                cout<<x<<" has been popped"<<endl;
            }
        }
        else if(choice==3){ // traverse
            traverse();
        }

    }
return 0;
}

/*
1
1
1
2
1
3
1
4
1
5

*/
