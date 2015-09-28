// Submitted by: Maybelline Ihara
// Submitted to: Edper Castro
// Mini Project 1
#include <iostream>
using namespace std;
  
  int main()
{
    int month;
    double demand;
    double forecast;
    double forecast_2;
    double prev_forecast;
    double parameter_1 = 0.1;
    double parameter_2 = 0.2;
    
    cout << "Enter actual demand for month 1: ";
    cin >> demand;
    cout << endl;
    
    while ( month < 12)
    {
        cout << "This is your prediction with 0.1: " << forecast << endl;
            forecast = parameter_1 * demand + ( 1 - parameter_1 ) *  demand;
            
        cout << "This your prediction with 0.2: " << forecast << endl;
            prev_forecast = forecast;
            forecast_2 = parameter_2 * demand + ( 1 - parameter_2 ) * prev_forecast;
    }
    
    
    cout << endl;
    cout << "That is all I can Predict! " << endl;
    return 0;
}


