#include<stdio.h>
#include<math.h>
#define pi 3.14

//A computer program receives an angle value and its unit letter which is �d� or �D� for degree and �r� or �R� for radian. The entered angle is converted to the other unit and displayed.
//Bir bilgisayar program� a�� de�eri ve birim harfini derece i�in "d" veya "D", radyan i�in "r" veya "R" al�r. Girilen a�� di�er birime d�n��t�r�l�r ve g�r�nt�lenir.

int main(){
	
	float angle;
	char unit;
	
	printf("Please enter an angle value:");
	scanf("%f",&angle);
	printf("Please enter an unit:(�d� or �D� for degree and �r� or �R� for radian)");
	scanf("%s",&unit);
	
	switch(unit){
		
		case 'd':
			
			angle*=(pi/180);
			printf("%f r",angle);
			break;
	    
		case 'D':
		    angle*=(pi/180);
			printf("%f R",angle);
			break;		
		
		case 'r':
			angle*=(180/pi);
			printf("%f d",angle);
			break;		
		
		case 'R':
			angle*=(180/pi);
			printf("%f D",angle);
			break;	
	    default:
		    printf("Please enter a current letter.");
			break;			
			
	}
	
	
	
	return 0;
}
