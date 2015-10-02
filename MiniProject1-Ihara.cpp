// Submitted by: Maybelline Ihara
// Submitted to: Edper Castro
// Mini Project 1
#include <iostream>
using namespace std;
  
  int main()
{
    int mnthcount = 1;
    double actual_demand;
    double total_demand;
    double total_demand_2;
    double prev_act_demand;
    double pred_demand_1;
    double pred_demand_2;
    double prev_forecast;
    double parameter_1 = 0.1;
    double parameter_2 = 0.2;
   
    
    while (mnthcount <= 12)
    {
       cout << "Enter actual demand for month " << mnthcount++ << ": ";
       cin >> actual_demand;
       cout << endl;
            
             if (mnthcount == 1)
                {
                    cout << "This is your prediction: " << pred_demand_1 << endl;
                        pred_demand_1 = parameter_1 * actual_demand + ( 1 - parameter_1 ) * actual_demand;
                    cout << "This is your prediction: " << pred_demand_2 << endl;
                        pred_demand_2 = parameter_2 * actual_demand + ( 1 - parameter_2 ) * actual_demand;
                    cout << endl;
                }
             else 
                {
                    cout << "This is your prediction with 0.1: " << total_demand << endl;
                   prev_act_demand = actual_demand;
                   prev_forecast = pred_demand_1;
                    total_demand = parameter_1 * prev_act_demand + ( 1 - parameter_1 ) * prev_forecast; 
                        cout.setf(ios::fixed);
		                cout.setf(ios::showpoint);
		                cout.precision(2); 
		                
		            cout << "This your prediction with 0.2: " << total_demand_2 << endl;      
                    prev_act_demand = actual_demand;
                    prev_forecast = pred_demand_2;
                    total_demand_2 = parameter_2 * prev_act_demand + ( 1 - parameter_2 ) * prev_forecast; 
                        cout.setf(ios::fixed);
		                cout.setf(ios::showpoint);
		                cout.precision(2);
            
		             cout << endl;     
		            
                 }
      
    }
   
    cout << endl;
    cout << "That is all I can Predict! " << endl;
    return 0;
}


