#include<bits/stdc++.h>

using namespace std;
class node
{
    public:
    int date;
    node *next ;


};
class linkedlist
{
public :
    node * head;
    linkedlist ()
    {
        head = NULL;
    }
    bool isempty()
    {
        return head== NULL;
    }
    void insertfirst(int newvalue)
    {
        if (isempty())
        {
            node *newnode= new node;
            newnode->date =newvalue;
            newnode->next = NULL;
            head = newnode;
        }else
        {
                node *newnode = new node;
            newnode->date =newvalue;
                 newnode->next = head;
            head = newnode;
        }
    }
  void display ()
  {
      node *temp = head;
      while(temp != NULL)
      {
          cout<<temp->date<<" ";
          temp = temp->next;
      }
      cout<<endl;
  }
  int Count()
  {
      int counter;
      node *temp = head;
      while(temp != NULL)
      {
         counter++;
          temp = temp->next;
      }
      return counter;
  }
   bool isfound (int key)
  {
      bool found= false;
      node *temp = head;
      while(temp != NULL)
      {
          if(temp->date == key)
            found = true;

          temp = temp->next;
      }
      return found;
  }
  void insertbefore(int item, int newvalue)
  {
      if (isempty()) {
          cout << "The List Is Empty" << endl;
          return;
      }

      if (head->date == item) {
          insertfirst(newvalue);
          return;
      }
      if (isfound(item)){
      node *newnode = new node;
      newnode->date =newvalue;
  node *temp = head;
    while ( temp-> next!= NULL && temp->next->date != item )
    {
        temp = temp->next;
    }
    newnode->next =temp->next;
    temp->next =newnode;

  }else
  {
      cout<<"Item Not Fount"<<endl;
  }
  }
  void Append ( int newvalue)
  {
      if (isempty()) {
              insertfirst(newvalue);
      }else {
          node *newnode = new node;
      newnode->date =newvalue;
  node *temp = head;
    while ( temp->next != NULL  )
    {
        temp = temp->next;
    }
      temp->next =newnode;
       newnode->next = NULL;
      }
  }
  void Delete(int item)
  {
       if (isempty()) {
           cout<<"List is Empty - no item delete"<<endl;
       }
       if (head->date== item)
       {
           node *delptr = head;
           head = head->next;
           delete delptr;
       }
       else
       {
           node *pre = NULL;
            node *delptr= head;
            while (delptr->date != item)
            {
                pre =delptr;
                delptr= delptr->next;
            }
            pre->next =delptr->next;
              delete delptr;
       }

  }

};
int main()
{
    linkedlist lst;
    if (lst.isempty())
    cout << "The List Is Empty" << endl;
    else
       cout << "The List contain" <<lst.Count()<< endl;

       int item;
       cout<<"Enter Item to The List"<<endl;
       cin>>item;
    lst .insertfirst(item);
    lst.display();

        cout<<"Enter Item to The List"<<endl;
       cin>>item;
    lst .insertfirst(item);
    lst.display();

        cout<<"Enter Item to The List"<<endl;
       cin>>item;
    lst .insertfirst(item);
    lst.display();

          cout<<"Enter Item to The List"<<endl;
       cin>>item;
    lst .insertfirst(item);
    lst.display();

           cout<<"Enter Item to The List"<<endl;
       cin>>item;
    lst .insertfirst(item);
    lst.display();
     cout << "The List contain" <<lst.Count()<< endl;
     /*
           cout<<"Enter Item to search for"<<endl;
       cin>>item;

      if( lst.isfound(item))
        cout<<"Item Found"<<endl;
      else
        cout<<"Item Not Found"<<endl;
        */

     //   int value;
        /*
        cout<<"Enter The item & value"<<endl;
        cin>>item;
             cin>>value;
            lst.insertbefore(item,value);
                 lst.display();


        cout<<"Enter The value"<<endl;
             cin>>value;

          lst.Append(value);
                 lst.display();
                 */
            cin>>item  ;
            lst.Delete(item)   ;
                lst.display();
    return 0;
}
