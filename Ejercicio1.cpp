#include<iostream>

using std::cout;
using std::endl;
using std::cin;

class punto
{
	public:
		float x,y;	//Las componentes del punto
	
		void ped_punt()
		{
			cout << "Introduzca la componente en x: ";
			cin >> x;
			cout << endl << "Introduzca la componente en y: ";
			cin >> y;
		}
		void most_punt()
		{
			cout << "El punto es: ( " << x << " , " << y << " )" << endl;
		}
};

int main()
{
	punto p1, p2;
	float m;
	
	//Pedimos los dos puntos
	cout << "Empezamos con el primer punto" <<endl;
	p1.ped_punt();
	cout << "Ahora con el segundo punto" <<endl;
	p2.ped_punt();
	
	//hacemos el swap
	float var;
	
	var=p1.x;
	p1.x=p2.x;
	p2.x=var;
	
	var=p1.y;
	p1.y=p2.y;
	p2.y=var;
	
	//Mostramos los puntos
	cout <<"Despues de hacer el cambio los puntos son: "<< endl;
	cout << "Primer punto: "<< endl;
	p1.most_punt();
	cout << "Primer punto: "<< endl;
	p2.most_punt();
	
	//Calculo de la pendiente
	float n,d;
	n=(p2.y-p1.y);
	d=(p2.x-p1.x);
	m=(n/d);
	
	//Muestra la pendiente
	cout<< endl<< "La pendiente de la recta es: " << m <<endl;
	
	return 0;
}


