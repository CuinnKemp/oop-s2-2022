extern void dangerous_temps(double[],double, int);

int main(){

    double vals[] =  {-10.0, -70.5, -75.5, -20.0, -30.2, -40.6, -91.8};
    dangerous_temps(vals,-72.0,7);


    double vals2[] =  {-20.0, -30.2, -40.6, -91.8};
    dangerous_temps(vals2,-25,4);

}