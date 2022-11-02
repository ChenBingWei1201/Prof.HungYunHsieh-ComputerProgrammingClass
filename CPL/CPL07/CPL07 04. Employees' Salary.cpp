#include <iostream>
using namespace std;
struct Employee
{
	int year, month, date, salary;	
};
int main()
{
	int num = 0;
	cin >> num;
	Employee *e = new Employee[num];
	for (int i = 0; i < num; i++)
		cin >> e[i].year >> e[i].month >> e[i].date >> e[i].salary;
	for(int i = 0; i < num; i++)
        for(int j = i + 1; j < num; j++)
            if(e[i].year > e[j].year)
            {
                e[i].year = e[i].year^e[j].year;
                e[j].year = e[i].year^e[j].year;
                e[i].year = e[i].year^e[j].year;
				
				e[i].month = e[i].month^e[j].month;
                e[j].month = e[i].month^e[j].month;
                e[i].month = e[i].month^e[j].month;

				e[i].date = e[i].date^e[j].date;
                e[j].date = e[i].date^e[j].date;
                e[i].date = e[i].date^e[j].date;
                
                e[i].salary = e[i].salary^e[j].salary;
                e[j].salary = e[i].salary^e[j].salary;
                e[i].salary = e[i].salary^e[j].salary;
            }
            else if (e[i].year == e[j].year)
            {
            	if (e[i].month > e[j].month)
            	{
            		e[i].year = e[i].year^e[j].year;
                	e[j].year = e[i].year^e[j].year;
                	e[i].year = e[i].year^e[j].year;
					
					e[i].month = e[i].month^e[j].month;
                	e[j].month = e[i].month^e[j].month;
                	e[i].month = e[i].month^e[j].month;
	
					e[i].date = e[i].date^e[j].date;
    	            e[j].date = e[i].date^e[j].date;
    	            e[i].date = e[i].date^e[j].date;
    	            
    	            e[i].salary = e[i].salary^e[j].salary;
    	            e[j].salary = e[i].salary^e[j].salary;
    	            e[i].salary = e[i].salary^e[j].salary;
				}
				else if (e[i].month == e[j].month)
				{
					if (e[i].date > e[j].date)
            		{
            			e[i].year = e[i].year^e[j].year;
                		e[j].year = e[i].year^e[j].year;
                		e[i].year = e[i].year^e[j].year;
						
						e[i].month = e[i].month^e[j].month;
                		e[j].month = e[i].month^e[j].month;
                		e[i].month = e[i].month^e[j].month;
		
						e[i].date = e[i].date^e[j].date;
    		            e[j].date = e[i].date^e[j].date;
    		            e[i].date = e[i].date^e[j].date;
    		            
    		            e[i].salary = e[i].salary^e[j].salary;
    		            e[j].salary = e[i].salary^e[j].salary;
    		            e[i].salary = e[i].salary^e[j].salary;
					}
					else if (e[i].date == e[j].date)
					{
						if (e[i].salary < e[j].salary)
            			{
            				e[i].year = e[i].year^e[j].year;
                			e[j].year = e[i].year^e[j].year;
                			e[i].year = e[i].year^e[j].year;
							
							e[i].month = e[i].month^e[j].month;
                			e[j].month = e[i].month^e[j].month;
                			e[i].month = e[i].month^e[j].month;
			
							e[i].date = e[i].date^e[j].date;
    		    	        e[j].date = e[i].date^e[j].date;
    		        	    e[i].date = e[i].date^e[j].date;
    		            
    		            	e[i].salary = e[i].salary^e[j].salary;
    		            	e[j].salary = e[i].salary^e[j].salary;
    		            	e[i].salary = e[i].salary^e[j].salary;
						}
					}
				}
			}       
	cout << "Birthday:\tSalary\n";
	for (int i = 0; i < num; i++)
		cout << e[i].year << "/" << e[i].month << "/" << e[i].date << "\t" << e[i].salary << "\n";
	return 0;
}
