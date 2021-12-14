#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct link
    {
     int data;
     struct link *next;
    };
     struct link *newnode,*temp,*temp2,*temp1,*head=0;

void Insertatlast()
{
     newnode=(struct link *)malloc(sizeof(struct link));
     cout<<"Enter the data=";
     cin>>newnode->data;
     newnode->next=0;
     if(head==0)
     {
       head=temp=newnode;
     }
     else
     {
       while(temp->next!=0)
       {
	 temp=temp->next;
       }
       temp->next=newnode;
       temp=newnode;
     }
 }
 void Insertatbeginning()
 {
     newnode=(struct link *)malloc(sizeof(struct link));
     cout<<"Enter the data=";
     cin>>newnode->data;


     newnode->next=0;
     if(head==0)
     {
       head=temp=newnode;
     }
     else
     {
       newnode->next=head;
       head=newnode;

     }
 }
 void Insertbeforegivennumber()
 {
     int move;
     cout<<"\nEnter the position to insert the node=";
     cin>>move;
     newnode=(struct link *)malloc(sizeof(struct link));
     cout<<"Enter the data=";
     cin>>newnode->data;
     newnode->next=0;
     if(head==0)
     {
       head=temp=newnode;
     }
     else if(move==1)
     {
       newnode->next=head;
       head=newnode;
     }
     else
     {
       move=move-2;
       temp1=head;
       temp2=temp1->next;
       while(move--)
       {
	 temp1=temp1->next;
	 temp2=temp1->next;

       }
       temp1->next=newnode;
       newnode->next=temp2;
     }
 }
 void deletefrombeginning()
 {
   clrscr();
   if(head==0)
    {
      cout<<"No data in list......\n\n";
    }
    else
    {
       head=head->next;
       cout<<"One Data is deleted from beginning.....!\n\n";
     }
   }
 void deletefromgivennumber()
 {
     clrscr();
     int delet;
     cout<<"\nEnter the position for deleting the data=";
     cin>>delet;
      if(head==0)
    {
      clrscr();
      cout<<"No data in list......\n\n";
    }
    else if(delet==1)
    {
       clrscr();
       head=head->next;
       cout<<"One Data is deleted from the "<<delet<<" position.....!\n\n";
     }
     else
     {
	delet=delet-2;
       temp1=head;
       temp2=temp1->next;
       while(delet--)
       {
	 temp1=temp1->next;
	 temp2=temp1->next;

       }
       temp1->next=temp2->next;
     }

 }
 void deletefromlast()
 {
    if(head==0)
    {
      clrscr();
      cout<<"No data in list......\n\n";
    }
    else if(head->next==0)
    {
      clrscr();
      cout<<"One Data is deleted from last.....!\n\n";
      head=0;
    }
    else
    {
      cout<<"One Data is deleted from last.....!\n\n";
      temp=head;
      while(temp->next!=0)
       {
	 temp1=temp;
	 temp=temp->next;
       }
       temp1->next=0;
    }
  }
  void Print()
 {
   clrscr();
   if(head==0)
    {
      cout<<"No data in list......\n\n";
    }
   else
   {
     cout<<"Data is as follows\n";
     temp=head;
     while(temp!=0)
     {
       cout<<temp->data<<endl;
       temp=temp->next;
     }
     //cout<<temp->data<<endl<<endl;
   }
 }

 void reverseprint(link *head)
 {
   clrscr();
   if(head->next==0)
   {
     return;
   }
    head=head->next;

   reverseprint(head);
   cout<<head->data<<endl;



 }


void main()
{
    clrscr();
    int choice,inchoice;
    while(1)
 {
    cout<< "* Press 1 for insertion\n* Press 2 for delete\n* Press 3 for print\n* Press 4 for exit\n";
     cin>>choice;


    if(choice==1)
    {
      clrscr();
      cout<<"* Press 1 for Inertion at beginning\n* Press 2 for Insertion before the given number\n* Press 3 for Isertion at the last\n* Press 4 for Exit\n";
      cin>>inchoice;
      switch(inchoice)
       {
	 case 1 :   Insertatbeginning();
		  break;
	 case 2 :    Insertbeforegivennumber();
		  break;
	 case 3 :    Insertatlast();
		  break;
	 case 4 : exit(9);
	 default:
	 cout<<"\nPlease enter a valid number!!!!!!";
       }
     }

     else if(choice==2)
     {
       clrscr();
       cout<<"* Press 1 for Deleteion from beginning\n* Press 2 for Deletion from before the given number\n* Press 3 for Deletion at the last\n* Press 4 for Exit\n";
       cin>>inchoice;
       switch(inchoice)
       {
	 case 1 : deletefrombeginning();
		  break;
	 case 2 : deletefromgivennumber();
		  break;
	 case 3 : deletefromlast();
		  break;
	 case 4 : exit(9);
	 default : cout<<"\nPlease enter a valid number!!!!!!";
       }
     }
     else if (choice==3)
     {
       clrscr();
       cout<<"* Press 1 for Normal Print\n* Press 2 for Reverse Print\n* Press 3 for Exit\n";
       cin>>inchoice;
       switch(inchoice)
       {
	 case 1 :   Print();
		    break;
	 case 2 :   if(head==0)
			{
			 clrscr();
			 cout<<"Data not found.....!"<<endl<<endl  ;
			}
			else
			{
			 reverseprint(head);
			 cout<<head->data<<endl<<endl;
			}
			break;


	 case 3 : exit(9);
	 default : cout<<"\nPlease enter a valid number!!!!!!";
	  }
	 }
     else
     exit(2);
     cout<<"fork";
  }

}