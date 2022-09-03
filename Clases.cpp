#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

class Student{
	int age;
	int standard;
	string first_name;
	string last_name;
	public:
		Student(){
			age = 0;
			standard =0;
			first_name.clear();
			last_name.clear();
		}
		
		//setters
		void set_age(int newAge){
			age = newAge;
		}
		
		void set_standard(int newStandard){
			standard = newStandard;
		}
		
		void set_first_name(string nombre){
			first_name = nombre;
		}
		
		void set_last_name(string apellidos){
			last_name = apellidos;
		}
		
		//getters
		int get_age(){
			return age;
		}
		string get_first_name(){
			return first_name;
		}
		string get_last_name(){
			return last_name;
		}
		int get_standard(){
			return standard;
		}
		
		string to_string(){
			stringstream ss;
			char c=',';
			ss<< age << c << first_name << c << last_name << c << standard;
			return ss.str();
		}
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
