#include <iostream>
using namespace std;

int main()	{
			float bas_sal=0;
			float hra=0,da=0;
			cout << "mr. employee plz enter your salary";
			cin >> bas_sal;

			if(bas_sal > 20000)
			{
				hra = bas_sal*(0.3);
				da = bas_sal*(0.95);
				cout << "gross salary is : "<< (hra+da);
			}

			else if(bas_sal <= 20000 && bas_sal >= 10001 )
			{
				hra = bas_sal*(0.25);
				da = bas_sal*(0.9);
				cout << "gross salary is : "<< (hra+da);
			}

			else
						{
							hra = bas_sal*(0.2);
							da = bas_sal*(0.8);
							cout << "gross salary is : "<< (hra+da);
						}

return 0;
}
