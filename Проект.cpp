#include <iostream>

using namespace std;

class hero;

class monster {
	
	friend class hero;
	private:
		string static name;
		int health;
	public:	
	
		monster () {
			name = "Vasya";
			health = 100;
		}
		
		~monster () {
			cout << endl;
			cout << "Mission Complete." << endl;
		} 
		
};

class hero {
	private:
		int uron;
	public:
		void set(int uron){
			this -> uron = uron;
		}
		
		void damage (monster &d) {
			bool hit;
			int k=0;
			for (d.health = 100; d.health >0; d.health -=0) {
			
			cout << "Health of the monster " << d.name << " = " << d.health << endl;
			cout << "Enter 1 for hit or 0 for pass :";
			cin >> hit;
			if (hit == 1) {
			d.health-=uron;
			k++;	
			cout << endl;
			}
	
			else {
			
			cout << endl;
			cout << "You did not inflict damage." << endl; 	
		}
		}
		if (k > 0) {
			cout << "------------------------------------------------------------------------" << endl;
			cout << "Moster "<< d.name <<" id dead." << endl;
		}
	}
};


string monster::name;


int main() {
	
	cout << "Mission: kill the monster!" << endl;
	cout << endl;
	
	
	monster vasya;
	hero volodya;
	volodya.set(20);
	volodya.damage(vasya);
	
	
	
return 0;
}
