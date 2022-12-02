//57155
#include<string>
#include<iostream>
#include<new>
#include<cstring>
using namespace std;

class Vehicle{
	protected:
		string brand;
		string plate;
		
	public:
		Vehicle(string br,string pl)
		{
		 brand=br;
		 plate=pl;
		}
     string getBrand(void){return brand;}
     void setPlate(string pl){plate=pl;}
     string getPlate(void){ return plate;}
};
  
  class Bus:public Vehicle{
  	 unsigned short int pass;
  	 unsigned short int max_pass;
  	public:
  		Bus():Vehicle("",""){pass=max_pass=0;}
  		Bus(string br,string pl,unsigned short int max, unsigned short int pas):Vehicle(br,pl){
  			
  			pass=pas;
  			max_pass=max;
		  }
		unsigned short int getPassengers(void){return pass;}
  		unsigned short int getMaxPassengers(void){return max_pass;}
  		friend Bus operator++(Bus &obj);
  		friend Bus operator++(Bus &obj,int notused);
  	    friend Bus operator--(Bus &obj);
  	    friend Bus operator--(Bus &obj,int notused);
  	    bool operator==(const Bus &obj);
  	    
  };
  
    Bus operator++(Bus &obj){ 
	
    	if(obj.pass<obj.max_pass){
		
		
    	obj.pass++;
    
		}	return obj;
	}
	
	Bus operator++(Bus &obj,int notused)
	{ Bus temp=obj; 
	   if(obj.max_pass==obj.pass){
	
		}else{
		
		
		obj.pass++;}
		return temp;
	}
	
	Bus operator--(Bus &obj){
		
		if(obj.pass==0){
		
		}else{
			obj.pass=obj.pass-1;
		}
		return obj;
		
	}
	 
	 Bus operator--(Bus &obj,int notused){
	 	Bus temp=obj;
	 		if(temp.pass==0){
		
		}else{
			obj.pass=obj.pass-1;
		}
		return temp;
	 	
	 }
	 
	 
	 bool Bus::operator==(const Bus &ob){
			 bool flag=true;
			 if(brand.compare(ob.brand)!=0) {
			 	
			 flag=false;
			 }
			 if(plate.compare(ob.plate)!=0) {
			 	
			 flag=false;
			 }
			 if(pass!=ob.pass) {
			 
			 flag=false;
			 }
			 if(max_pass!=ob.max_pass) {
			
			 flag=false;
			 }
			 return flag;}
	 //b meros
	 
const int MAX_GARAGE_SIZE = 20;
#define TRUE 1
#define FALSE 0
class Garage {

private:
	
string garage_name;
Bus *buses;	// Array with size MAX_GARAGE_SIZE
unsigned int buses_in_garage;

public:
	
string getGarageName(void) { return garage_name; }
unsigned int getBusesInGarage(void) { return buses_in_garage; }

Garage(string new_name){
 buses=new Bus[20];
garage_name=new_name;
  buses_in_garage=0;
  } // Constructor




~Garage(){} // Destructor

Garage(const Garage & obj)	// Copy Constructor
{  buses=new Bus[20];
   buses_in_garage=obj.buses_in_garage;
   garage_name=obj.garage_name;
   
  }
  
    		
Bus getBus(int i){ // Returns the i-th elementof buses
	
Bus temp=buses[i];

return temp;

}
void add(Bus obj){	// Adds Bus to Garage
	
	 buses_in_garage++;
	 buses[buses_in_garage-1]=obj;
	 
	 }
 
bool isInGarage(string x){     // (1)
int i;
bool flag=false;
for(i=0;i< buses_in_garage;i++){
	
	
  if(buses[i].getPlate().compare(x)==0)flag=true ;

}
return flag;}


bool isInGarage(Bus obj){
int i;
bool flag=false;
for(i=0;i< buses_in_garage;i++){
	
	
  if(buses[i]==obj)flag=true; // (2)

}return flag;

}

Garage operator+(Garage &obj){
	int i;
	Garage temp("default");
	temp.buses_in_garage=buses_in_garage + obj.buses_in_garage;
	temp.garage_name=getGarageName()+"_"+ obj.garage_name; 
	unsigned int k=buses_in_garage;;
	for (int i=0;i<k;i++){
		temp.buses[i]=buses[i];
	}
	for (i=buses_in_garage;i<temp.buses_in_garage;i++){
		temp.buses[i]=obj.buses[(i-k)];
	}
	return temp;
}; 
unsigned int getAngryPassengers(void)
{
	unsigned int S=0;
	for(int i=0;i<=buses_in_garage;i++){
		S=S+buses[i].getPassengers();
	}
	return S;
};
};

