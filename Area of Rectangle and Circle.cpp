#include<stdio.h>
#include<conio.h>

int main(){
	
	float Length,Breath,Area_of_Rectangle,Perimeters_of_Rectangle,Area_of_circle,Circumference_of_circle,Radius_of_circle;
	
	printf("Enter the Length of Rectangle\n");
	scanf("%f",&Length);
		printf("Enter the Breath of Rectangle\n");
		scanf("%f",&Breath);
			printf("Enter the Radius of circle\n");
			scanf("%f",&Radius_of_circle);
			
	Area_of_Rectangle = Length*Breath;
	printf("The Area of Rectangle is %f\n",Area_of_Rectangle);
	
	Perimeters_of_Rectangle = 2*Length+Breath;
		printf("Perimeters of Rectangle is %f\n",Perimeters_of_Rectangle);
		
     Area_of_circle = 3.142*Radius_of_circle*Radius_of_circle;
     printf("The Area of circle is %f\n",Area_of_circle);
     
     Circumference_of_circle = 2*3.142*Radius_of_circle;
     printf("The Circumference of circle is %f\n",Circumference_of_circle);
     
     getch();
	} 
