/*
© 2020 team tamalcoin all rights reserved

tttttttt
    t
   ttt
    t
   ttt
    t
    t
*/


/* 
  LABORATORIO DE ALGORITIMOS I
*/

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*  NOMBRE: Equipo Tamalcoin                                    FECHA: 9 sep           *
*  MATRICULA:2698666, 2973763, 2865886, 2974433, 2968553, 2925786, 2850341, 2776108   *
*  OBJETIVO: CALCULAR EL AREA DEL TRIANGULO                                           *
*                                                                                     *
*  ENTRADA: DATOS PROPORCIONADOS POR EL USUARIO                                       *
*  SALIDA: MOSTRAR EL AREA DEL TRIANGULO                                              *
*  COMPILACIÓN: sudo g++ -DAREATRINAGULO equipo-nombre-lab1.cpp -o bin/areatriangulo  *
* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

//1. Crear algoritimo para obtener y despliega el área de un triángulo cuando el usuario proporciona como datos de entrada la base y la altura.

#ifdef AREATRIANGULO

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float base, altura, area;
    system("clear");

    cout << "Ingresar datos de base y altura" << endl;
    cin >> base >> altura;

    area = (base*altura)/2.0;

    cout << "Tu resultado es:" << area << endl;

    return 0;
}

#endif

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*  NOMBRE: Equipo Tamalcoin                   FECHA: 9 de sep de 2020                       *
*  MATRICULA: 2698666, 2973763, 2865886, 2974433, 2968553, 2925786, 2850341, 2776108        *
*  OBJETIVO: CALCULAR SI EL NUMERO ES PRIMO, NEGATIVO, POSITIVO O CERO                      *
*                                                                                           *
*  ENTRADA: NUMEROS PROPORCIONADOS POR EL USUARIO                                           *
*  SALIDA: LOS NUMEROS CLASIFICADOS                                                         *
*  COMPILACIÓN: sudo g++ -DNUMEROSPRIMONEGPOSCERO labs1-2.cpp -o bin/numerospromonegposcero *
* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


// 2. Crear algoritimo para determinar si el número dado por el usuario es “primo”, "negativo < -10 ",“positivo > 100 ” o “cero”.

#ifdef NUMEROSPRIMONEGPOSCERO

    #include <iostream>

    using namespace std;

    bool es_primo (int numero) {
        if (numero%2 == 0)
            return true;
        else
            return false;
    }

    void es_negativo (int numero) {
        if (numero < 0 && numero <! -10)
            cout << "El numero es negativo pero no es menor a -10" << endl;
        else if (numero < -10)
            cout << "El numero es menor a -10" << endl;
    }

    void es_positivo (int numero) {
        if (numero > 0 && numero >! 100)
            cout << "El numero es positivo pero no es mayor a 100" << endl;
        else if (numero > 100)
            cout << "El numero es mayor a 100" << endl;
    }

    void es_cero (int numero) {
        if (numero == 0)
            cout << "El numero es cero" << endl;
    }

    int main () {
        int numero;
        system("clear");        

        cout << "Introduce un numero entero, porfavor: ";
        cin >> numero;
        cout << "\n";
        cout << "Tu numero es primo: " << es_primo(numero) << endl;
        es_negativo(numero);
        es_positivo(numero);
        es_cero(numero);

        return 0;
    }

#endif

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*\
*  NOMBRE: Equipo Tamalcoin                   FECHA: 9 de sep de 2020                     *
*  OBJETIVO: CALCULAR PROMEDIO DE NUMEROS PARES E IMPARES                                 *
*  MATRICULA: 2698666, 2973763, 2865886, 2974433, 2968553, 2925786, 2850341, 2776108      *
*                                                                                         *
*  ENTRADA: LISTA DE NUMEROS PROPORCIONADA POR EL USUARIO                                 *
*  SALIDA: PROMEDIOS DE LOS NUMEROS PARES E IMPARES                                       *
*  COMPILACIÓN: sudo g++ -DPROMEDIOPARESIMPARES labs1-2.cpp -o bin/promedioparesimpares   *
* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


// 3. Crear algoritimo para determinar el promedio de los números pares y el promedio de los números impares de una lista de valores enteros proporcionada por el usuario donde el último número es un cero.

#ifdef PROMEDIOSPARESIMPARES

#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> tamales;
    int numero_tamales = 0, valor, sumatoria_pares = 0, sumatoria_impares = 0, numero_pares = 0, numero_impares = 0;
    system("clear");

    cout << "Buenos dias/tardes/noches. ¿Cuantos tamales(valores) gusta ingresar el dia de hoy? ";
    cin >> numero_tamales;

    cout << "Ingrese sus tamales(valores):" << endl;
    for (int i = 0; i < numero_tamales; i++) {
        cin >> valor;
        tamales.push_back(valor);
    }
    
    for (int i = 0; i < tamales.size(); i++) {
        if (tamales[i]%2 == 0 ) {
            sumatoria_pares += tamales[i];
            numero_pares++;
        }
        else{
            sumatoria_impares += tamales[i];
            numero_impares++;
        }
    }

    cout << "El proceso se ha finalizado, caballero/dama, muchas gracias por esperar, los resultados de esta compleja operacion son: \npromedio impares: " << sumatoria_impares / numero_impares << "\npromedio pares: " << sumatoria_pares / numero_pares << endl;

    return 0;
}

#endif

//LABORATORIO DE ALGORITIMOS II

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*  NOMBRE: Equipo Tamalcoin                   FECHA: 9 de sep de 2020                  *
*  MATRICULA: 2698666, 2973763, 2865886, 2974433, 2968553, 2925786, 2850341, 2776108   *
*  OBJETIVO: CALCULAR AREA Y VOLUMEN DE UN CILINDRO                                    *
*                                                                                      *
*  ENTRADA: ALTURA Y RADIO PROPORCIONADA POR EL USUARIO                                *
*  SALIDA: EL AREA Y VOLUMEND DEL CILINDRO                                             *
*  COMPILACIÓN: sudo g++ -DCILINDRO labs1-2.cpp -o bin/cilindro                        *
* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


//1. Crear algoritimo para determinar el área y volumen de un cilindro dado su radio (R) y altura (H).

#ifdef CILINDRO

#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

float sacar_volumen (float altura, float radio) {
    return ((M_PI * pow(radio, 2)) * altura);
}

float sacar_area (float altura, float radio) {
    float area_caras = (M_PI * pow(radio, 2)) * 2.0;
    float area_lateral = (2.0 * (radio * M_PI * altura));
    return area_caras + area_lateral;    //2 π rh
}

int main () {
    float altura, radio;
    system("clear");
    
    cout << "El area de un cilindro es diametro por altura, asi que dame tu radio y tu altura:" << endl;
    cin >> radio >> altura;

    cout << "El area total del cilindro es:" << sacar_area(altura, radio) << "m2" << endl;
    cout << "El volumen total del cilindro es:" << sacar_volumen(altura, radio) << "m3" << endl;
}

#endif

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*  NOMBRE: Equipo Tamalcoin                   FECHA: 9 de sep de 2020                  *
*  MATRICULA: 2698666, 2973763, 2865886, 2974433, 2968553, 2925786, 2850341, 2776108   *
*  OBJETIVO: CALCULAR EL PAGO TOTAL DE UN CLIENTE DEPENDIENDO DE LA CANTIDAD           *
*                                                                                      *
*  ENTRADA: CANTIDAD PROPORCIONADA POR EL USUARIO                                      *
*  SALIDA: EL TOTAL A PAGAR DESPUES DE LOS DESCUENTOS                                  *
*  COMPILACIÓN: sudo g++ -DTOTALAPAGAR labs1-2.cpp -o bin/totalapagar                  *
* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


/*2. Crear algoritimo para determinar el total a pagar por el cliente en una tienda que ofrece descuentos por temporada dependiendo del total comprado:
    * Si la compra es menor a 300 pesos, el descuento es del 5%.
    * Si la compra es de 301 a 1000 pesos, el descuento es del 10%.
    * Si la compra es superior a 1001 pesos el descuento es del 15%.*/

#ifdef TOTALAPAGAR   

#include <iostream>
#include <math.h>

int dinero;
int zinko_peso;
int die_peso;
int kince_peso;
int temporal;

using namespace std;
int main(){
    system("clear");

    cout << "Costo total de los tamales de usted dama/caballero:" << endl;
    cin >> dinero;

    //si el dinero es menor a 300 se hace un descuento de 5%
    if (dinero < 300){
        cout<< "Tu descuento es de 5%"<< endl;
        temporal = dinero * 0.05;
        zinko_peso = dinero - temporal;
        cout<< "Total a pagar:"<< zinko_peso << endl;
    }
    //si el dinero es mayor de 301 y menor 1000 se hace un descuento de 10%
    else if(dinero < 301 && dinero > 1000){
        cout << "Tu descuento es de 10%"<< endl;
        temporal = dinero * .1;
        die_peso = dinero - temporal;
        cout<< "Total a pagar:"<<die_peso<< endl;
    }
    //si el dinero es mayor de 1000 se hace un decuento de 15%
    else{
        cout << "Tu descuento es de 15%"<< endl;
        temporal = dinero * .15;
        kince_peso = dinero - temporal;
        cout << "Total a pagar:"<<kince_peso<<endl;
    }
    
    return 0;
}

#endif

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*  NOMBRE: Equipo Tamalcoin                   FECHA: 9 de sep de 2020                   *
*  MATRICULA: 2698666, 2973763, 2865886, 2974433, 2968553, 2925786, 2850341, 2776108    *
*  OBJETIVO: CALCULAR PROMEDIOS METEOROLÓGICOS                                          *
*                                                                                       *
*  ENTRADA: ARCHIVO clima.celsius                                                       *
*  SALIDA: PROMEDIOS METEOROLÓGICOS                                                     *
*  COMPILACIÓN: sudo g++ -DMETEOROLOGIA labs1-2.cpp -o bin/meteorologia                 *
* ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/


/*3. Para un estudio meteorológico se registra el promedio de 
temperatura diaria. 
Con base en los registros de 15 dias, se debe obtener la siguiente 
información:
    * La mayor temperatura de la quincena y el día en el que ocurrió. /
    * La menor temperatura de la quincena y el día en el que ocurrió. /
    * La temperatura promedio de la quincena.
    * La temperatura promedio de la primera semana del mes.
    * La temperatura promedio de la segunda semana del mes. */

#ifdef METEOROLOGIA

#include <iostream>
#include "celsius/Celsius.hpp"

#define DIAS_DE_LA_SEMANA 7.0
#define DIAS_DE_LA_QUINCENA 15.0

using namespace std;

int main () {
    system("clear");

    tuple<string, int> clima_maximo, clima_minimo;
    int conteo_semana_uno = 0, conteo_semana_dos = 0, conteo_quincenal = 0;

    const char *ruta_archivo = "./clima.celsius";
    Celsius clima(ruta_archivo);
    
    clima_maximo = clima.get_maximum();
    clima_minimo = clima.get_minimum();
    
    for (int i = 0; i < DIAS_DE_LA_QUINCENA; i++) {
        conteo_quincenal += clima.get_day_temperature(i);

        if (i < DIAS_DE_LA_SEMANA)
            conteo_semana_uno += clima.get_day_temperature(i);
        else
            conteo_semana_dos += clima.get_day_temperature(i);
    }

    cout << "Buenos días/tardes/noches, le informamos de parte del equipo tamalcoin, que los datos climáticos son adquiridos de la siguiente ruta: " << ruta_archivo << endl;
    //resultados
    cout << "El promedio quincenal es: " << conteo_quincenal/DIAS_DE_LA_QUINCENA << endl;
    cout << "El promedio de la semana uno es: " << conteo_semana_uno/DIAS_DE_LA_SEMANA << endl;
    cout << "El promedio de la semana dos es: " << conteo_semana_dos/DIAS_DE_LA_SEMANA << endl;
    cout << "El clima máximo presentado en los valores ingresados es: " << get<1>(clima_maximo) << " y se presento el día " << get<0>(clima_maximo) << endl;
    cout << "El clima mínimo presentado en los valores ingresados es: " << get<1>(clima_minimo) << " y se presento el día " << get<0>(clima_minimo) << endl;

    return 0;
}
    
#endif