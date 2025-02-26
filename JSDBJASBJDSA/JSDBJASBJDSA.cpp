

#include <iostream>
#include <string>

using namespace std;

class vehiculo {
protected:
string  marca;
string modelo;
double precio;
public:
	vehiculo(string m, string mo, double p) {
		marca = m;
		modelo = mo;
		precio = p;
	}
	virtual void mostrarinfo() {
		cout << "-----Vehiculo-----" << endl;
		cout << "Marca: " << marca << "\nel precio es:Q"<<precio<<"\nmodelo: "<<modelo<<endl;
	}
	string getmarca() { return marca; }
	string getmodelo() { return modelo; }
	double getprecio() { return precio; }

	void setmarca(string m) { marca = m; }
	void setmodelo(string mo) { modelo = mo; }
	void setprecio(double p) { precio = p; }
};

class motocicleta : public vehiculo {
protected:
	int cilindraje;
public:
	motocicleta(string m, string mo, double p, int c) : vehiculo(m, mo, p), cilindraje(c) {}
	void mostrarinfo() {
		cout << "-----Motocicleta-----" << endl;
		cout << "Marca: " << marca << "\nmodelo: " << modelo << "\nel precio es:Q" << precio << "\ncilindraje: " << cilindraje << endl;
	}
};

int main()
{
	vehiculo auto1("Toyota", "Corolla", 20000);
	motocicleta auto2("honda", "CBR", 15000, 250);
	auto1.mostrarinfo();
	auto2.mostrarinfo();
	return 0;
}

