
#include<iostream>
#include<cstring>
using namespace std;
 
 class Account {
 
 
 char name[20];
 int id;
 double rem;
 public:
 	
 	Account(char *onoma)
  {
  	
	  id=rem=0;
    strcpy(name,onoma);
  }
 	
 	Account(char* onoma,int x,double upol)
 	
	 {
	 	id=x;
	 	rem=upol;
	 	strcpy(name,onoma);
 		
	 }
	 
	
    
 	void print();
 	int get_id();
 	double get_balance();
 	void withdrawal(double p);
    void transfer(Account& x,double t);
    double sum=0;	
	~Account();
 };
 
  
  
  void Account::print() 
     {
     	
	 cout<<name<<" account "<<id<<" has "<<rem<<" euro";
	 
	 }
   
   int Account::get_id() {return id;};
   double Account::get_balance(){return rem;};
   
   
  void Account::withdrawal(double p)
  { 
    if(rem>=p && p<=420){
	
  	rem=rem-p;
  	sum=sum+p;
  	
}
  };
  
  void Account::transfer(Account& x,double t)
  {
  	rem=rem-t;
  	
    x.rem=x.rem+t;
     sum=sum+t;
  };
  
 Account::~Account()
	 {
	 	if(sum>420){
	 		
		cout<<name<<" pockets are full!";
		
	}else if(sum==0){
		
		cout<<name<<" pockets are empty!";
		
    }else{
    	
		cout<<"Bye bye!";
		
	}
	 }
	 
	 
	 

