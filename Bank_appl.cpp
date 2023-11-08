#include<iostream>
using namespace std;

class account{
	int acc_no;
	account* next;
         public:
		void creat(int);
		void display();
		void search(int);
};
account* head;
account* tail=NULL;
void account :: creat(int num){
	account* current =head;
	account* temp= new account;
	temp->acc_no=num;
	if(current == NULL){
		head=temp;
		temp->next=NULL;
		tail=temp;
	}
	else{
		tail->next=temp;
		temp->next=NULL;
		tail=temp;
	}
}
void account :: display(){
	account* current =head;
	
	if(current==NULL)
		cout<<"\n DAtabase is empty\n";
		
	else{
		cout<<"\n List of account numbers is as follows:\n";
			while(current != NULL){
				cout<<current->acc_no<<endl;
				current=current->next;
		}
	}
}
void account :: search(int num){
	account *current=head;
	int flag=0;
	if(current==NULL)
		cout<<"\n Database is empty\n";
	else{
		while(current != NULL){
			if(current->acc_no==num){
				flag=1;
				break;
			}
			else{
				current=current->next;
			}
		}
		if(flag==1)
			cout<<"\n Account number is available in the database\n";
		else
			cout<<"\nAccount number is not available in the database\n";
	}
}
int main(){
	account A;
	char choice='Y';
	int input, num, temp;
	
	do{
		cout<<"\n**********************************************************\n";
		cout<<"\n*******************Welcome to Axis Bank*******************\n";
		cout<<"\n**********************************************************\n";
		cout<<"\n**********************Admin services**********************\n";
		cout<<"\n**********************************************************\n";
		cout<<"\n*****************List of services*************************\n";
		cout<<"\n**********************************************************\n";
		cout<<"\nPress-1:creat database";
		cout<<"\nPress-2:Display databse";
		cout<<"\nPress-3:Search for account number";
		cout<<"\nPress-4:Exit the application";
		cout<<"\n*********************************************************\n";
		cout<<"\n Enter your input\n";
		cin>>input;
		
		switch(input){
			case 1:
				cout<<"\n Enter the account number\n";
				cin>>num;
				A.creat(num);
				break;
			case 2:
				A.display();
				break;
			case 3:
				cout<<"\nEnter the account number to be searched\n";
				cin>>temp;
				A.search(temp);
				break;
			case 4:
				exit(0);
				break;
				
			default:
				cout<<"\n Enter valid input\n";
		}
		
		cout<<"\n Do you want to perform another operation.....Y/N\n";
		cin>>choice;
	}while(choice=='Y');
	return 0;
} 























