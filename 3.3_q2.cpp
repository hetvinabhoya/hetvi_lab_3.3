#include<iostream>
using namespace std;

class Cafe{
	private:
		int c_id;
		string c_name;
		string c_type;
		int c_rating;
		string c_location;
		int c_year;
		int c_staff_quantity;
		
	public:
		Cafe()
		{
			cout << "Enter Id : ";
			cin >> c_id;
			cout << "Enter Name : ";
			cin >> c_name;
			cout << "Enter Type : ";
			cin >> c_type;
			cout << "Enter Rating : ";
			cin >> c_rating;
			cout << "Enter Location : ";
			cin >> c_location;
			cout << "Enter Establish Year : ";
			cin >> c_year;
			cout << "Enter Staff quantity : ";
			cin >> c_staff_quantity;
			
			cout << "-------------------------------" << endl;
		}
		
		getData()
		{
			cout << "Id : " << c_id << endl;
			cout << "Name : " << c_name << endl;
			cout << "Type : " << c_type << endl;
			cout << "Rating : " << c_rating << "-Star" << endl;
			cout << "Location : " << c_location << endl;
			cout << "Establish Year : " << c_year << endl;
			cout << "Staff quantity : " << c_staff_quantity << endl;

			cout << "-------------------------------" << endl;
		}
	
};

int main()
{
	int n,i;
	
	cout << "Number of Fast food cafe : ";
	cin >> n;
	
	Cafe a[n];
	
	for(i=0;i<n;i++)
	{
	 	a[i].getData();
		
	}
	
	return 0;
}
