 #include<stdio.h>
#include<math.h>
typedef struct {
	float re;
	float im;
}complex;
complex add(complex a, complex b){
	complex sum;
	sum.re=a.re+b.re;
	sum.im=a.im+b.im;
	return sum;
}
complex subtract(complex a, complex b){
	complex sub;
	sub.re=a.re-b.re;
	sub.im=a.im-b.im;
	return sub;
}

complex multiply(complex a, complex b){
	complex result;
	result.re=a.re*b.re-a.im*b.im;
	result.im=a.re*b.im+b.re*a.im;
	return result;
}
int main(){
	 complex a,b;
	 complex addn,subn,mult;
	 printf("Enter real and imaginary part of first complex number:");
	 scanf("%f%f",&a.re,&a.im);
	 printf("Enter real and imaginary part of second complex number:");
	 scanf("%f%f",&b.re,&b.im);
	 addn=add(a,b);
	 printf("Sum of entered complex numbers = (%.2f , %.2fi)\n",addn.re,addn.im);
	 subn=subtract(a,b);
	 printf("Difference of entered complex numbers = (%.2f , %.2fi)\n",subn.re,subn.im);
	 mult=multiply(a,b);
     printf("Product of entered complex numbers = (%.2f , %.2fi)\n",mult.re,mult.im);
     return 0;
}
/* OUTPUT
Enter real and imaginary part of first complex number:2 2
Enter real and imaginary part of second complex number:3 4
Sum of entered complex numbers = (5.00 , 6.00i)
Difference of entered complex numbers = (-1.00 , -2.00i)
Product of entered complex numbers = (-2.00 , 14.00i)*/
