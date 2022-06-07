// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    struct SinglyLinkedListNode *nnode,*h=NULL,*t=NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
        if(h==NULL || t==NULL)
        {
            h=(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
                h->data=head1->data;
            t=h;
        }
        else{
            nnode=create_singly_linked_list_node(head1->data);
                t->next=nnode;
            t=nnode;
        }
        head1=head1->next;
    }else{
        if(h==NULL || t==NULL)
       {
            h=(struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
                h->data=head2->data;
            t=h;
        }
        else{
            nnode=create_singly_linked_list_node(head2->data);
                t->next=nnode;
            t=nnode;
        }
        head2=head2->next;
    }
    }
    while(head1!=NULL)
    {
        nnode=create_singly_linked_list_node( head1->data);
                t->next=nnode;
            t=nnode;
        head1=head1->next;
    }
     while(head2!=NULL)
    {
        nnode=create_singly_linked_list_node( head2->data);
                t->next=nnode;
            t=nnode;
        head2=head2->next;
    }
    return h;
}
