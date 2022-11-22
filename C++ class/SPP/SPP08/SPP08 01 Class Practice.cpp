//PREPEND BEGIN
#include <iostream>
using namespace std;
class price{
	private:
		int x,y;
	public:
//PREPEND END
//TEMPLATE BEGIN
	//TODO
		price(int c, int d)
		{
			x = c;
			y = d;
		} 
		void set(int c, int d)
		{
			x = c;
			y = d;
		}
		int earn(int a,int b)
		{
			return (a*x+b*y);
		}
//TEMPLATE END
//APPEND BEGIN
};
int main(){
	int a,b,c,d;
	cin >> c >> d;
	price *p = new price(c,d);	
	while(1){
		cin >> a;
		if(a==-1) {
			cin >> c;
			if(c==-1) break;
			else{
				cin >>d;
				p->set(c, d);
			}
		}
		else {
			cin >> b ;
			cout << p->earn(a, b) <<endl;
		}
	}
	delete p;
}
//APPEND END
