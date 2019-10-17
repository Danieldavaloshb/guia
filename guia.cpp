Pregunta 1
# include <stdlib.h>
# include <conio.h>
#include <stdio.h>
int main(void){
    int a=4, b=10, c=4;
    float z,d=1.1;
    z=a+b/c*d;
    printf("El valor de la variable z es %f",z);
}
Pregunta 2
# include <stdlib.h>
# include <conio.h>
#include <stdio.h>
int main(void){
    int m=5, n=2;
    bool v;
    v=(n+m)==2;
    printf("%d",v);
}

# include <stdlib.h>
# include <conio.h>
#include <stdio.h>
int main(void){
    int m=5, n=2;
    bool v;
    v=(n>m)==!(m==5);
    printf("%d",v);
}

# include <stdlib.h>
# include <conio.h>
#include <stdio.h>
int main(void){
    int m=5, n=2;
    bool v;
    v=(m%n)>5;
    printf("%d",v);
}

# include <stdlib.h>
# include <conio.h>
#include <stdio.h>
int main(void){
    int m=5, n=2;
    bool v;
    ((n-m)*10)%4 == 1;
    printf("%d",v);
}

Pregunta 3

# include <stdlib.h>
# include <conio.h>
#include <stdio.h>
int main(void){
    int x=2,y=80,z=3;
    bool v;
    v=(x==1);
    printf("%d",v);
}

# include <stdlib.h>
# include <conio.h>
#include <stdio.h>
int main(void){
    int x=2,y=80,z=3;
    bool v;
    v=!(y==80);
    printf("%d",v);
}

Pregunta 4

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
int a;
float p,e,cm, c=0.9, por=0.1;
printf("Calculadora de peso recomendado\n");
printf("Ingrese su edad en anos: ");
scanf("%d", &a);
printf("Ingrese su estatura en metros: ");
scanf("%f", &e);
cm = e*100;
p=((cm-100)+(a*por))*c;
printf("El peso recomendado de acuerdo a su edad y estatura es: %.3f",p);
}

Pregunta 5

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
float r,a,p,pi=3.1416;
printf("Calculadora de Area y Perimetro de circunferencias\n");
printf("Ingrese el radio de la circunferencia: ");
scanf("%f",&r);
a=pi*pow(r,2);
p=2*pi*r;
printf("El area de la circunferencia  es: %.3f",a);
printf("El perimetro de la circunferencia es: %.3f\n",p);
}

Pregunta 6

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
int a,b;
printf("Numero par o impar\n");
printf("Ingrese un numero entero: ");
scanf("%d",&a);
b=a%2;
if(b==0){
    printf("El numero introducido es par\n");
}
else{
    printf("El numero introducido es impar\n");
}
}

Pregunta 7 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
int a,b,c;
printf("Numero Mayor de tres numeros\n");
printf("Ingrese tres numeros enteros diferentes: ");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
    printf("El primer numero es mayor\n");
}
if(b>a && b>c){
    printf("El segundo numero es mayor\n");
}
if(c>a && c>b){
    printf("El tercer numero es mayor\n");
}
}

Pregunta 8

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void){
	float efectivo, entrada;
    int dinero;
    int b1000, b500, b200, b100, b50, b20, m10, m5, m2, m1, mc,val;
    printf("Billetes y monedas minimas de una cantidad\n");
    printf("Ingrese una cantidad: ");
    scanf("%f", &efectivo);
    entrada= efectivo*2;
    val = entrada - (efectivo - 0.5);    
    if((val-efectivo) == 0){
		dinero = efectivo;
		mc = 0;
	}
	else{
    dinero = efectivo - 0.5;
    mc = 1;
	}
    b1000=dinero/1000;
    b500=(dinero%1000)/500;
    b200=(dinero%500)/200;
    b100=((dinero%500)-(b200*200))/100;
    b50=(dinero%100)/50;
    b20=(dinero%50)/20;
    m10=((dinero%50)-(b20*20))/10;
    m5=(dinero%10)/5;
    m2=(dinero%5)/2;
	m1 = (dinero%5)-(m2*2);
    printf("La cantidad introducida expresada en billetes y monedas es:\n");
    printf("%d billetes de 1000\n",b1000);
    printf("%d billetes de 500\n",b500);
    printf("%d billetes de 200\n",b200);
    printf("%d billetes de 100\n",b100);
    printf("%d billetes de 50\n",b50);
    printf("%d billetes de 20\n",b20);
    printf("%d monedas de 10\n",m10);
    printf("%d monedas de 5\n",m5);
    printf("%d monedas de 2\n",m2);
    printf("%d monedas de 1\n",m1);
    printf("%d monedas de 0.5\n",mc);
}

Pregunta 9

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){	
	int x = 2, z;
	
	if(3 != x ){
		if(1 == x){
			z = 1;
		}
		else{
			z = x;
		}
	}
	else{
		z = 0;
	}
	printf("%d",z);
}

Pregunta 10

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
    float g, t;
    int min = 200, pri = 10, seg = 20;
    printf("Calculo de factura mensual de agua\n");
    printf("Ingrese la cantidad de agua en litros ocupada durante el mes pasado: ");
    scanf("%f",&g);
    if(g > 0 && g <= 50){
        t = min;
    }
    else{
        if(g > 50 && g <= 200){
            t = g * pri;
        }
        else{
            t = g * seg;
        }  
    }
    printf("El valor de la factura del mes pasado del gasto de agua es: $%.3f\n",t);   
}

Prgunta 11

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
    int max, min, med = 0, n, i, e = 0;
    float v;
    printf("Valor maximo, minimo y media\n");
    printf("Ingrese 10 numeros enteros:\n");
    for(i = 1; i < 11; i++){
        printf("Ingrese num %d: ",i);
        scanf("%d", &n);
        med += n;
        if(e == 0){
        	max = n;
        	min = n;
        	e = 1;
		}
		else{
	        if(n >= max){
	            max = n;
	        }
	        if(n < min){
	            min = n;
	        }
		}
    }
    v = med / 10;   
    printf("El valor maximo es: %d", max);
    printf("El valor minimo es: %d", min);    
    printf("La media es: %0.2f", v); 
}

Pregunta 12

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
	int n, i, j;	
	printf("Introduzca un numero entero: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}

Pregunta 13

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void){
    int num, pri, i, m, d;
    printf("Numero primo\n");
    printf("Ingrese un numero entero para determinar si es un numero primo: ");
    scanf("%d", &num);
    for(i = (num - 1); i > 1; i--){
        m = num % i;
        d = num / i;
        if(d > 0 && m == 0){
            pri = 1;
        }
    }   
    if(pri == 1){
        printf("El numero %d no es primo", num);
    }
    else{
        printf("El numero %d es primo", num);
    }
}

Pregunta 14

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
    char l;
    printf("Vocal o consonante\n");
    printf("Introduzca una letra mayuscula o minuscula: ");
    l = getch();
    if(l=='a' || l=='A' || l=='e' || l=='E' || l=='i' || l=='I' || l=='o' || l=='O' || l=='u' || l=='U'){
        printf("La letra %c es vocal\n",l);
    }
    else{
        printf("La letra %c es consonante\n",l);
    }    
}

Pregunta 15

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
    int i, n;
    float sum, s;
    printf("Sumatoria\n");
    printf("Ingrese un numero hasta el que quiera sumar: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){   
        s = (pow(i,2) + 1)/i;
        sum += s;
    }    
    printf("El resultado de la sumatoria es: %.3f\n", sum); 
}

Pregunta 16

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){	
	int a = 9, i;
	for(i = 0; i < 100; i++){
		if((a == a%4) || (i%2) == 0){
			printf("%d %d\n", a, i);
		}
	}
}

Pregunta 17

#include<stdio.h>
int main(){
    int seg, min, hr, i, s;
    printf("Convertidor de segundos a horas, minutos y segundos\n");
    printf("Introduzca un valor en segundos: ");
    scanf("%i",&s);
    hr=s/3600;
    min=(s%3600)/60;
    seg=(s%3600)%60;    
    printf("%is es equivalente a %i hrs, %i min, %i seg\n\n",s,hr,min,seg);
}

Pregunta 18

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
    int x = 12, j = 5, k = 0;
    if( 0 == (x % 4)){
    	for(j = 0; j < 10; j += 4){
    		k += j;
		}
	}
	else{
		for(j = 0; j < 10; j += 2){
    		k += j;
		}
	}
	printf("%d", k);
}

Pregunta 19

*Es una instruccion repetitiva (Mientras)
*apartir de 1

Pregunta 20

*nos permiten ejecutar una o varias líneas de código de forma repetitiva sin necesidad de tener un valor inicial e incluso a veces sin siquiera conocer cuando se va a dar el valor final
*no es necesario agegarlo una y otra vez

Pregunta 21

*Apartir de 1 vez
*do while simpre va a repetir la funcion que haga y while solo 1 vez

Pregunta 22

es un ciclo que repite un conjunto de instrucciones mientras una condición es verdadera, pero, a diferencia de los ciclos if-else y while, normalmente en el ciclo for tiene aplicación cuando conocemos el número de veces que se repetirá el ciclo

Pregunta 23

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(void){
    int i = 2;
    while(i < 100){
        printf("%d ",i);
        i += 3;        
    }
}

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(void){
    int i = 2;
    do{
        printf("%d ",i);
        i += 3;
    }while(i < 100);    
}

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main(void){
    int i;   
    for(i = 2; i <100; i += 3){
        printf("%d ",i);
    } 
}

Pregunta 24

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
    int indicador;
    printf("Ingrese un valor entre el 1 y 4: ");
    scanf("%d", &indicador);
    switch (indicador){
        case 1:
            printf("Calor\n");
        break;
        case 2:
            printf("Templado\n");
        break;
        case 3:
            printf("Frio\n");
        break;       
        case 4:
            printf("Fuera de rango\n");
        break;        
        default:
            printf("Error\n");
    }  
}

Pregunta 25

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void){
    char color;
    printf("Ingrese una letra mayuscula o minuscula: ");
    scanf("%c", &color);
    switch (color){
        case 'v':
        case 'V':
            printf("Verde\n");
        break;  
        case 'a':
        case 'A':
            printf("Azul\n");
        break; 
        case 'r':
        case 'R':
            printf("Rojo\n");
        break; 
        default:
            printf("Negro\n");
    }  
}
