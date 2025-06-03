#include<bits/stdc++.h>
using namespace std;
vector<double> convertTemperature(double celsius) {
       
       double kelvin=celsius+273.15;
       double fahrenheit=(celsius*1.80)+32.00;
      return{kelvin,fahrenheit};
    }
int main(){
     double celsius= 37.89;
     for(double a:convertTemperature(celsius)){
        cout<<a<<" ";
     }

}