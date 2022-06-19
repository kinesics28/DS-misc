#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *head = NULL;

void push(){

    Node *ptr= new Node;
    cin>>ptr->data;
    ptr->next= head;
    head=ptr;
}

int pop(){
    if(head==NULL){cout<<"Underflow!!"<<endl; return 0;}
    else{
        int x=head->data;
        Node* ptr=head;
        head= head->next;
        free(ptr);
        return x;
    }

}

void traverse(){
    Node *ptr=head;
    cout<<"Top-->";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

int main()
{
    int choice;
    while(true){
        cout<<"Enter your choice ";
        cin>>choice;
        if (!choice) break;
        else if(choice==1){ // push
            push();
        }
        else if(choice==2){ // pop
            int x=pop();
            if(!x)
                cout<<x<<" has been pop out\n";
        }
        else{
            traverse();
        }

    }
    return 0;
}
