#include<stdio.h>
#include<conio.h>
#include<string.h>
void Name(char name[8]);//function declaration.

int main(){
	char name[8];
	printf("write a name: ");
	scanf("%s",&name);
	
	Name(name);// function call.
	getch();
	
}
void Name(char name[8]){//function defination.
	int i=0;
	
	for (i= 0; i<= name[i]; i++){
		if( name[i]=='0'||name[i]=='1'||name[i]=='2'||name[i]=='3'||name[i]=='4'||name[i]=='5'||name[i]=='6'||name[i]=='7'||name[i]=='8'||name[i]=='9'){
		
		
		printf("you have put invaild name please enter a name without number ");
	
	}else {
		printf("your name is correct");
	}

	}
}

