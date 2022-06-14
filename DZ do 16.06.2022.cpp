#include"Student.cpp"
int ExcellentStudent::counterExcellentStudent = 0;
float ExcellentStudent::counterStipuha = 0;
int Class::counter = 0;

int main()
{
	ExcellentStudent st1("Viktor",5500);
	for (int i = 0; i < 3; i++)
	{
		st1.addMarkRus(5);
		st1.addMarkLit(5);
		st1.addMarkMat(5);
	}
	ExcellentStudent st2("Marina");
	for (int i = 0; i < 3; i++)
	{
		st2.addMarkMat(5);
		st2.addMarkLit(5);
		st2.addMarkRus(5);
	}
	Student st3("Sergei");
	Student st4("Egor");
	Student st5("Karl");
	Student st6("Jhon");
	Student st7("Tor");
	Student st8("Ivan");
	Student st9("Vektor");
	Student st10("Georgii");
	Student st11("Masha");
	Student st12("Olga");
	Student st13("Lena");
	Student st14("Vova");
	Student st15("Petr");
	Student st16("Ckot");
	Student st17("Pasha");
	Student st18("Oksana");
	st3.addMark();
	st4.addMark();
	st5.addMark();
	st6.addMark();
	st7.addMark();
	st8.addMark();
	st9.addMark();
	st10.addMark();
	st11.addMark();
	st12.addMark();
	st13.addMark();
	st14.addMark();
	st15.addMark();
	st16.addMark();
	st17.addMark();
	st18.addMark();
	Class k8_1("8a");
	Class k8_2("8b");
	Class k9_1("9a");
	Class k9_2("9b");
	Class k9_3("9b");
	//st1.showSt();
	k8_1.addStudent(st1);
	k8_1.addStudent(st3);
	k8_1.addStudent(st4);
	k8_1.addStudent(st5);
	k8_2.addStudent(st6);
	k8_2.addStudent(st7);
	k8_2.addStudent(st8);
	k9_1.addStudent(st2);
	k9_1.addStudent(st9);
	k9_1.addStudent(st10);
	k9_1.addStudent(st11);
	k9_2.addStudent(st12);
	k9_2.addStudent(st13);
	k9_2.addStudent(st14);
	k9_3.addStudent(st15);
	k9_3.addStudent(st16);
	k9_3.addStudent(st17);
	k9_3.addStudent(st18);
	//k9_3.showClass();
	Scool scool("90");
	scool.addClass(k8_1);
	scool.addClass(k8_2);
	scool.addClass(k9_1);
	scool.addClass(k9_2);
	scool.addClass(k9_3);
	scool.showScool();
	cout << "\n\n" << "Number ExcellentStudent = \t";
	cout<< ExcellentStudent::getExcellentStudent() << endl;
	cout << "Summa Stependii = \t" << ExcellentStudent::getStipuha()<<endl;
	cout << "number of students = \t" << Class::getCounter();
}

