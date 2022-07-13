//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_06_14_Pointer	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 6/14/2022 7:56:33 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int Variable1 = 123;
	int Variable2 = 0;
	double Variable3 = 33.55;
	double Variable4 = -192.5;



	//Code
	printf("Variable 1: Der Wert lautet %i\nDie Adresse Lautet: %u\n", Variable1,&Variable1);
	printf("Variable 2: Der Wert lautet %i\nDie Adresse Lautet: %u\n", Variable2, &Variable2);
	printf("Variable 3: Der Wert lautet %lf\nDie Adresse Lautet: %u\n", Variable3, &Variable3);
	printf("Variable 4: Der Wert lautet %lf\nDie Adresse Lautet: %u\n", Variable4, &Variable4);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}