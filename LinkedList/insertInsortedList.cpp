#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0),next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
//insert at the sortd place
ListNode* insertSortedPlace(ListNode* head,int key){

    ListNode* temp = new ListNode(key);
    ListNode* dummy = new ListNode(-1,head);
    ListNode*prev = dummy;
    while(head && head->val<key){
        prev = head;
        head = head->next;
    }
    temp->next = head;
    prev->next = temp;

    return dummy->next;
    
    // this is without dummy head, with all the edge cases.
    /*
    ListNode* temp = new ListNode(key);
    if(head==NULL){
        head = temp;
    }else if(head->val>=key){
        temp->next = head;
        head = temp;    
    }else{
        //we create two pointers 
        ListNode * front = head;
        ListNode* back =NULL;
        while(front!=NULL && front->val<key){
            back=front;
            front=front->next;
        }
        temp->next = front;
        back->next = temp;
    } 
    return head;
    */
}
ListNode* reverseList(ListNode* head) {
    if(!head||!head->next)return head;
    ListNode* front = head,*curr=NULL,*back=NULL;
        while(front){
            back=curr;
            curr=front;
            front=front->next;
            curr->next = back;
        }
    return curr;
}

ListNode* reverseListInBetween(ListNode*first, ListNode*last){
    ListNode*lastfront=last->next;
    ListNode*front=first;
    ListNode*curr = NULL,*back=NULL;
    while(front!=last->next){
        back=curr;
        curr=front;
        front=front->next;
        curr->next=back;
    }
    cout<<curr->val<<endl;
    first=lastfront;
    return curr;
}
ListNode* reverseKGroup(ListNode* head, int k=3) {

    ListNode*temp= head;
    int count=1;
    while(count==3){
        temp=temp->next;
        count++;
    }
    return reverseListInBetween(head,temp);
}
void print(ListNode *head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ,";
        temp = temp->next;
    }
    cout<<endl;
}

//this functions checks if the list is palindrome or not.
void breakInTwo(ListNode* head){
    ListNode* slow = head , *fast = head;
    ListNode*slowBack = slow;
    while(fast && fast->next){
        slowBack=slow;
        slow = slow->next;
        fast = fast->next;
        if(fast)fast = fast->next;
    }

    slowBack->next = NULL;
    print(head);
    cout<<endl;


    // if(fast){
    //     // ListNode*temp=slow;
    //     slow=slow->next;
    //     // temp->next=NULL;
    // }
    print(slow);
    slow = reverseList(slow);

    while(head && slow){
        if(head->val !=slow->val){
            cout<<"NOT palindrome";
            break;
        }
        head=head->next;
        slow=slow->next;
    }
    cout<<"palindrome"<<endl;
}




ListNode* createList(int ar[], int n){
    
    ListNode* head = new ListNode(ar[0]);
    ListNode* tail = head;
    for(int i=1;i<n;i++){
        ListNode* temp = new ListNode(ar[i]);
        tail->next = temp;
        tail=temp;
    }
    return head;
}


int main(){
    int ar[]={1,1,3,1};
    int n = sizeof(ar)/sizeof(int);

    //create the List
    ListNode *head = createList(ar,n);

    //print the list
    print(head);

    // insert in sorted position
    // int key = 42;
    // head = insertSortedPlace(head , key);
    // // print(head);


    //reversing the list
    // head=reverseList(head);
    // print(head);

    //reversing first k positions
    // head = reverseKGroup(head,3);
    // print(head);


    //breaking into two list
    breakInTwo(head);
    return 0;
}