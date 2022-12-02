//57155

 struct Person  {
 int age;
 char name[30];
 bool adult;
 };
 
 void update(Person *var){
 	
 	if((*var).age<=18){

		var->adult=false;

	}else {

	(*var).adult=true;

    }
 }

void showStage(unsigned short int x){
 	if(x<13){
		cout<<"child\n";
	}else if (x<19){
		cout<<"teenager\n";
	}else cout<<"adult\n";
}

bool showStage(Person t){

	if(t.age<13){
		cout<<"child\n";
	}else if (t.age<19){
		cout<<"teenager\n";
	}else cout<<"adult\n";
	
	cout<<t.adult;
  }
 


