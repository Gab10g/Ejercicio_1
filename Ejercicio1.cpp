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
			cout << "   ( " << x << " , " << y << " )" << endl;
		}
};

template <class TEST>
inline void swapo(TEST& d, TEST& e)
{
	TEST temp = d;
	d = e;
	e = temp;
}

float calc_pend(punto, punto);


int main()
{
	punto p1, p2;
	float m;
	
	//Pedimos los dos puntos
	cout << endl << "Empezamos con el primer punto" <<endl;
	p1.ped_punt();
	cout << endl << "Ahora con el segundo punto" <<endl;
	p2.ped_punt();
	
	//hacemos el swap
	swapo(p1.x, p2.x);
	swapo(p1.y, p2.y);
	
	//Mostramos los puntos
	cout << endl <<"Despues de hacer el cambio los puntos son: "<< endl;
	cout << endl << "El primer punto es:";
	p1.most_punt();
	cout << endl<< "El segundo punto es:";
	p2.most_punt();
	
	//Calculo de la pendiente
	m=calc_pend(p1,p2);
	
	//Muestra la pendiente
	cout<< endl << "La pendiente de la recta es: " << m << endl;

	return 0;
}

float calc_pend(punto p1, punto p2)
{
	float n,d,m=0;
	n=((p2.y)-(p1.y));
	d=((p2.x)-(p1.x));
	m=(n/d);
	return m;
}
