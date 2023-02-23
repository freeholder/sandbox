#include <iostream>

using namespace std;

int main()
{
    class Information
    {
        public:
            string name, surname, age, height;
            
            void get_inf(string n, string s, string a, string h)
            {
                name = n;
                surname = s;
                age = a;
                height = h;
            }
            
            void give_inf()
            {
                cout << "Имя: " << name << endl;
                cout << "Фамилия: " << surname << endl;
                cout << "Возраст: " << age << endl;
                cout << "Рост: " <<height << endl;
            }
    };
    
    Information first;
    Information second;
    
    string n, s, a, h;
    n = "Пётр";
    s = "Романов";
    a = "17 лет";
    h = "2.03 м.";
    first.get_inf(n, s, a, h);
    cout << "Первый Объект" << endl;
    first.give_inf();
    
    cout << endl;
    
    n = "Ярослав";
    s = "Рюрикович";
    a = "18 лет";
    h = "1.75 м.";
    second.get_inf(n, s, a, h);
    cout << "Второй Объект" << endl;
    second.give_inf();
}
