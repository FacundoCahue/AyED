//"Calcular π"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long double i = 1;                               //inserto las variables
    long double pi = 4;                              //pi lo multiplico por 4 porque la serie de Leibniz da π/4
    long double diferencia;
    long double requisito = 9e-7;
    
    while (true) {
         pi += (-4 /(4*i - 1)) + (4 /(4*i + 1));     //uso la Serie de Leibniz adaptada para c++       
         diferencia = pi - 3.141592;
         if(diferencia<requisito){                   //termino el siclo cuando el valor nro 6 decimal no varia
            break;
         }
         ++i;
    }
    cout << setprecision(7) << fixed << pi << endl;  //uso precision 7 ya que el siguiente numero de 2 es mayor a 5 y lo redondea para arriba
    return 0;
}
