#include "3-calc.h"
#include <stdio.h>
/**
*op_add -  adds 2numbers
*@a: first number
*@b: second number
*Return: result
*/
 int op_add(int a, int b)
 {
 	return (a + b);
 }
 /**
*op_sub -  subtracts 2numbers
*@a: first number
*@b: second number
*Return: result
*/
 int op_sub(int a, int b)
 {
 	return (a - b);
 }
 /**
*op_mul -  multiply 2 numbers
*@a: first number
*@b: second number
*Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div -  divides 2numbers
*@a: first number
*@b: second number
*Return: result
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod -  return rem after div  2numbers
*@a: first number
*@b: second number
*Return: result
*/
int op_mod(int a, int b)
{
	return (a % b);
}
