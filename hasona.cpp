/* Name: Hasona hasan balla
 * Class: second computer engineering
 * Department: college of engineer - computer engineering*/
#include <iostream>
#include <cmath>
/*these libraries are called to use what they contain of functions*/
using namespace std;/*use it to not write std in every command*/
int shap;
float area, space, one, side, two, three, height, width, leng, base, radios;
double const pi = 3.14;
/*we define the variables we are going to use in the code and formulas like pi and area and radius and so...*/
int main()
{
	cout<<"choose the shape number: "<<endl;
	cout<<"\n1- triangle";
	cout<<"\n2- rectangle";
	cout<<"\n3- square";
	cout<<"\n4- circle";
	cout<<"\n5- polygon";
	cout<<"\n6- ellipse"<<endl;
	cout<<"\nWrite the name of shape you are using: ";
/*this tells the user to choose the shape he wants*/
	cin>>shap;
	if (shap == 1){/*if is to execute the given block code based on the state of condition*/
		cout<<"\nenter the length of triangle base: ";
		cin>>base;
		cout<<"enter triangle height: ";
		cin>>height;
		cout<<"enter length of first side triangle: ";
		cin>>one;
		cout<<"the second side triangle length: ";
		cin>>two;
		cout<<"the third side triangle: ";
		cin>>three;
		area=0.5*base*height;
		space=one+two+three;/*this is the formula for use to calculate
		triangle are and bound*/
	}
	else if (shap == 2){
		cout<<"\nenter the width of rectangle: ";
		cin>>width;
		cout<<"enter the length";
		cin>>height;
		area=width*height;/*this is formula for rectangle are and the next
		line is for its bound*/
		space=2*(height + width);
	}
	else if (shap == 3){
		cout<<"\nenter side square length: ";
		cin>>leng;
		area=leng*leng;/*formula for calculation area of square and bound too*/
		space=4*leng;
	}
	else if (shap == 4){
		cout<<"\nenter circle radius: ";
		cin>>radios;
		area=pi*pow(radios, 2);
		space=2*pi*radios;/*formula for circle using only the given radius*/
	}
	else if (shap == 5){
		cout<<"\nenter polygon radius: ";
		cin>>side;
		cout<<"enter polygon side length: ";
		cin>>leng;
		area=0.5*side*5*leng;/*formula for polygon using given values*/
		space=leng*5;
	}
	else if (shap == 6){
		double big,small;
		cout<<"\nenter length of big axis: ";
		cin>>big;
		cout<<"enter length of small axis: ";
		cin>>small;
		area=pi*big*small;
		space=2*pi*sqrt((pow(big, 2)+pow(small, 2)) * 0.5);/*formula for ellipse shape using length of axis (x,y)*/
	}
	else {
		cout<<"\nerror ... you entered something not found";/*shows error when nothing was found*/
	}
	/*show the calculations after runnung the formula on them*/
	cout<<"\n"<<"Area: "<<area<<endl;
	cout<<"Bound: "<<space<<endl;
	return 0;
	/*this returns value to main to tell it the program is success*/
}
