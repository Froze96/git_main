#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <functional>
#include <locale>

#include "BigNumber.h"
//using namespace std;

int main(){
 ///fact
     setlocale( LC_ALL,"Russian" );
        cout <<"���������� ���������� ����������� ��������: "<<fact1(5)<< endl;
        cout <<"���������� ���������� ����������� ��������: "<<fact2(5)<< endl;
           int Lambda_fact = [] (int N) {
             if (N < 0)
                return 0;
             if (N == 0)
                return 1;
            int result = 1;
              for (int i  = 1; i<= N ; i++) {
                result *= i;}
            return result;}(5);// znachenie
       cout <<"���������� ���������� � ������� ������-������: "<< Lambda_fact << endl<<endl;

 ///fibon
       cout<< fibonach(5)<<"end-"<<endl;
       cout<<"5-� ����� ���������: "<<fibonacci(5)<<endl;
        int Lambda_fibon = [] (int n) {
            int fib = 1;
            int fib2= 1;
              while (fib<n) {
                fib = fib + fib2;
                fib2 = fib - fib2; }
              return(fib);}(5);// znachenie
        cout <<"��������� ���������� ����� ��������� ������-��������: "<< Lambda_fibon << endl;


    	return 0;
}
};
