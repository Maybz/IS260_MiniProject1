// Submitted by: Maybelline Ihara
// Submitted to: Edper Castro
// Mini Project 1
#include <iostream>
using namespace std;
  
  int main()
{
    int mnthcount = 1;
    double actual_demand;
    double prev_act_demand;
    double forecast;
    double forecast_2;
    double prev_forecast;
    double parameter_1 = 0.1;
    double parameter_2 = 0.2;
    
    while (mnthcount <= 12)
    {
       cout << "Enter actual demand for month " << mnthcount++ << ": ";
       cin >> actual_demand;
       cout << endl;
       
        cout << "This is your prediction with 0.1: " << forecast << endl;
            forecast = parameter_1 * actual_demand + ( 1 - parameter_1 ) *  actual_demand;
            		cout.setf(ios::fixed);
		        cout.setf(ios::showpoint);
		        cout.precision(2);
        cout << "This your prediction with 0.2: " << forecast << endl;
            prev_forecast = forecast;
            forecast_2 = parameter_2 * actual_demand + ( 1 - parameter_2 ) * prev_forecast;
            		cout.setf(ios::fixed);
		        cout.setf(ios::showpoint);
		        cout.precision(2);
		      cout << endl;
    }
    if (mnthcount == 1)
    {
      forecast = actual_demand; 
      21forecast_2 = actual_demand;
    }
    else 
    {
      prev_act_demand = actual_demand;
      prev_forecast = forecast;
      forecast = parameter_1 * prev_act_demand + ( 1 - parameter_1 ) * prev_forecast;
      
      prev_act_demand = actual_demand;
      prev_forecast = forecast_2;
      forecast_2 = parameter_2 * prev_act_demand + ( 1 - parameter_2 ) * prev_forecast;
    }
    cout << endl;
    cout << "That is all I can Predict! " << endl;
    return 0;
}


