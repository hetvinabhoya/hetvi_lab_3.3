#include<iostream>
using namespace std;

class Company{
	private:
		int c_id;
		string c_name;
		int c_staff_quantity;
		double c_revenue;
		int c_import;
		int c_export;
		string c_ceo;
	
	public:
		Company()
		{
			cout << "Enter Id : ";
			cin >> this-> c_id;
			cout << "Enter Name : ";
			cin >> this-> c_name;
			cout << "Enter Staff quantity : ";
			cin >> this-> c_staff_quantity;
			cout << "Enter Revenue : ";
			cin >> this-> c_revenue;
			cout << "Enter Import raw diamonds : ";
			cin >> this-> c_import;
			cout << "Enter Export raw diamonds : ";
			cin >> this-> c_export;
			cout << "Enter CEO : ";
			cin >> this-> c_ceo;
			
			cout << "--------------------------------------" << endl;
		}
		
		getData()
		{
			cout << "Id : " << c_id <<endl;
			cout << "Name : " << c_name <<endl;
			cout << "Staff quantity : " << c_staff_quantity <<endl;
			cout << "Revenue : " << c_revenue <<endl;
			cout << "Import raw diamonds : " << c_import <<endl;
			cout << "Export raw diamonds : " << c_export <<endl;
			cout << "CEO : " << c_ceo <<endl;

            cout << "--------------------------------------" << endl;
		}
};

int main()
{
	int n,i;
	
	cout << "How many diamond companies : ";
	cin >> n;
	
	Company a[n];
	
	for(i=0;i<n;i++)
	{
		a[i].getData();
	}
	
	return 0;
}
