#include <iostream>

using namespace std;

//Constantes
double G ;
double M ;

//Funciones
double func1(double x, double v );
double func2(double x, double v);


//Clase Planeta
class Planeta{
   public:
    double m;
    double x;
    double Vx;
};

int main () {

    G = 10.0;
    M = 1000.0;

   //inicializa objetos de clase Planeta
   //M esta estatico en el origen
    Planeta P1;
    P1.m = M;
    P1.x = 0.0;
    P1.Vx = 0.0;

    double mm = 10.0;
    double xm = 20.0;
    double vm = 0.0;
    double h = 0.001;

    //Planeta que se mueve
    Planeta P2;
    P2.m = mm;
    P2.x = xm;
    P2.Vx = vm;

    double max_x = P2.x;
     
    double min_x = 0.01*xm;
    //cout << min_x <<endl;
    int N = 100;

	
    //double t[N];
    //double x[N];
    //double v[N];

    //Condiciones iniciales
    double t = 0.0;
    double x = P2.x;
    double v = P2.Vx;


     while(x>min_x) {
    //primeras derivadas
    double xx = func1(x, v);
    double vv = func2(x, v);
   

    t += h;
    x += h * func1(x, v);
    v += h * func2(x, v);
    cout << x << " " << v<< " " << t << endl;
    }

   return 0;
}

//Primera derivada del tiempo --> velocidad
double func1(double x, double v ){
   double sol = v;
   return sol;
}

//Segunda derivada del tiempo --> aceleracion (a partir de 2 ley Newton)
double func2(double x, double v){
   double sol = (-G*M)/(x*x);
   return sol;
}
