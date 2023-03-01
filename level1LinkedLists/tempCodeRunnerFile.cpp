Node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        Node*q = temp->next;
        temp->next = q->next;
        delete(q);
        temp = temp->next;
    }
    cout<<endl;