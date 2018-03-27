#include <iostream>

using namespace std;

int main()
{


    int qty;
    float unit_cost,selling_price,profit1,incom_material,cost_material,profit2,profit3,total_profit;
    cout<<"enter the data from user 1:"<<endl;
    cout<<".............."<<endl;
    cout<<"please enter the qty"<<endl;
    cin>>qty;
    cout<<"please enter the unit_cost"<<endl;
    cin>>unit_cost;
    cout<<"please enter the selling_price"<<endl;
    cin>>selling_price;
    cost_material=qty*unit_cost;
    incom_material=qty*selling_price;
    profit1=incom_material-cost_material;
    cout<<"enter the data from second user "<<endl;
    cout<<"..........."<<endl;
     cout<<"please enter the qty"<<endl;
    cin>>qty;
    cout<<"please enter the unit_cost"<<endl;
    cin>>unit_cost;
    cout<<"please enter the selling_price"<<endl;
    cin>>selling_price;
    cost_material=qty*unit_cost;
    incom_material=qty*selling_price;
    profit2=incom_material-cost_material;
    cout<<"enter the data from third user"<<endl;
    cout<<".............."<<endl;
     cout<<"please enter the qty"<<endl;
    cin>>qty;
    cout<<"please enter the unit_cost"<<endl;
    cin>>unit_cost;
    cout<<"please enter the selling_price"<<endl;
    cin>>selling_price;
    cost_material=qty*unit_cost;
    incom_material=qty*selling_price;
    profit3=incom_material-cost_material;
    cout<< " the one profit is = "<<profit1<<endl;
    cout<< " the second profit is = "<<profit2<<endl;
    cout<< " the third profit is = "<<profit3<<endl;
    total_profit=profit1+profit2+profit3;
    cout<<"the total profit is = "<<total_profit<<endl;




   return 0;
}
