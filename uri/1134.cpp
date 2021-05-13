#include<bits/stdc++.h>
using namespace std;

int main()
{

       int x = 0, fuel = 0,
            customerAlcohol = 0,
            customerGasolin = 0,
            customerDisel = 0;

        while (x != 4) {
            cin>>x;
            if (x == 1) {
                customerAlcohol+=1;
            }else if (x == 2) {
                customerGasolin += 1;
            }else if (x == 3) {
                customerDisel += 1;
            }

        }

        cout<<"MUITO OBRIGADO"<<endl;
        cout<<"Alcool: "<<customerAlcohol<<endl;
        cout<<"Gasolina: "<<customerGasolin<<endl;
        cout<<"Diesel: "<<customerDisel<<endl;

        return 0;

}
