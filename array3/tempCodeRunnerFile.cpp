#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *add;
}*start=NULL,*temp,*prevs,*print,*ptr,*End=NULL;
int insbeg()
{
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout <<"Linked List is full";
    }
    else
    {
        int no;
        cout << "Enter a number : ";
        cin>>no;
        ptr->data=no;
        if(start == NULL)
        {
            ptr -> add = NULL;
            start = End = ptr;
        }
        else
        {
            ptr->add=start;
            End->add=ptr;
            start=ptr;
        }
    }
}

int insend()
{
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout <<"Linked List is full";
    }
    else
    {
        int no;
        if(start == NULL)
        {
            cout << "First insert at start\n";
        }
        else
        {
            cout << "Enter a number : ";
            cin>>no;
            ptr->data=no;
            End -> add = ptr;
            ptr -> add = start;
            End = ptr;
        }
    }
}

int insspec()
{
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout <<"Linked List is full";
    }
    else
    {
        int no,pos,i;
        if(start == NULL)
        {
            cout << "No element is present";
        }
        else
        {
            cout << "Enter a number : ";
            cin>>no;
            ptr -> data = no;
            cout << "Enter Position : ";
            cin >> pos;
            temp = start;
            for(i=1;i<pos;i++)
            {
                prevs = temp;
                temp = temp -> add;
            }
            prevs -> add = ptr;
            ptr -> add = temp;
        }
    }   
}
int delbeg()
{
    if(start == NULL)
    {
        cout << " Linked list is empty";
    }
    else
    {
        temp = start;
        start = start -> add;
        End -> add = start;
        cout << "Deleted Element is : "<<temp->data;
        free(temp);
    }
}
int delend()
{
    if(start == NULL)
    {
        cout << "list is empty\n";
    }
    else
    {
        temp = start;
        while(temp != End)
        {
            prevs = temp;
            temp = temp -> add;
        }
        End = prevs;
        End->add = start;
        cout << "Deleted Element is : "<<temp->data;
        free(temp);
    }
}

int delspec()
{
    if(start == NULL)
    {
        cout << "list is empty\n";
    }
    else
    {
        int pos;
        cout << "Enter Postion : ";
        cin >> pos;
        temp = start;
        for(int i=1;i<pos;i++)
        {
            prevs = temp;
            temp = temp -> add;
        }
        prevs -> add = temp -> add;
        cout << "Deleted Element is : "<<temp->data;
        free(temp);
    }
}

void display()
{
    if(start == NULL)
    cout << "Linked list is empty";
    else{
        temp = start;
        cout << "Elements in linked list is : "<<temp->data <<" ";
        while(temp != End)
        {
            cout << temp->add->data <<" ";
            temp = temp -> add;
        }
    }
    cout<<endl;
}

int main()
{
    int ch;
    do
    {
        cout<<"Name : Sujal nage "<<endl;
        cout<<"Enrollment no. = 0832CS221207"<<endl<<endl;
        cout << "\nMain Menu\n";
        cout << "Enter 1 for inserting at start\n";
        cout << "Enter 2 for inserting at end\n";
        cout << "Enter 3 for inserting at specified position\n";
        cout << "Enter 4 for deleting at start\n";
        cout << "Enter 5 for deleting at end\n";
        cout << "Enter 6 for deleting at specified position\n";
        cout << "Enter 7 to display\n";
        cout << "Enter 8 for exit\n";
        cout<<"Enter your choice : ";
        cin >> ch;

        switch(ch)
        {
            case 1: insbeg();break;
            case 2: insend();break;
            case 3: insspec();break;
            case 4: delbeg();break;
            case 5: delend();break;
            case 6: delspec();break;
            case 7: display();break;
            default : cout << "Invlaid choice";
        }
    } while (ch!=8);
}
