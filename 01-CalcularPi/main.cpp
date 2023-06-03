#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long double i = 1;                              //inserto las variables       
    long double pi = 4;                             //a pi lo multiplico por 4 previamente ya que la serie de Leibniz da π/4
    long double diferencia = pi - 3.141592;
    long double requisito = 0.000001;               //indicamos el requisito pedido

    while (diferencia > requisito) {                //Calculamos la diferencia con el valor deseado

         pi += (-4 /(4*i - 1)) + (4 /(4*i + 1));    //uso la Serie de Leibniz adaptada para c++
        ++i;
    }

    cout << setprecision(7) << fixed << pi << endl;
    return 0;
}
