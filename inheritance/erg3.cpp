
#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;
 
 
 class Car {
 	
 	char brand[15];
 	char plate[9];
 	
 	public:
 	
 	
	 Car()
 	{   
 	
 	 strcpy(brand,"Tesla");
 	 strcpy(plate,"AAA 0000");	
 	   
    };
    
    void print();
    void set(char* newBrand,char* newPlate);
    friend Car trade(Car & c1,Car &c2);
};//end of class
 	
 	
void Car::print(){
 	 	cout<<"Brand: "<<brand<<"\n";
 	 	cout<<"Plate: "<<plate<<"\n";
	}
	  
void Car::set(char* newBrand,char *newPlate ){ 
	  
	int i=0;
    int letters=0,space=0,numb=0;
	strcpy(brand,newBrand);
	    
	    
	for(i=0;i<strlen(newPlate);i++){
		
	  	if(newPlate[i]>'9' ){
	  	  	letters++;  
		}

		if(newPlate[i]==' '){
			space++;
		}
			
		if(newPlate[i]<='9' && newPlate[i]>='0'){
			numb++;		
		}	
		   
	}
		  	
	if(letters<3 || space<1 || numb<4){
				
	}else{
			     
		for(i=0;i<strlen(plate);i++){
		     	
			if(newPlate[i]>='a' && newPlate[i]<='z'){
					   
				plate[i]=newPlate[i]-32;

			}else{
					   
			    plate[i]=newPlate[i];
			     	   
			}
		}
			    
			    
	}
}
    
Car trade(Car &c1,Car & c2)
    {   Car temp=c1;
        
    	strcpy(c1.plate,c2.plate);
    	strcpy(c2.plate,temp.plate);
    	return c1;
	}


