#pragma once


class Student
{
protected:
	
	int* mat = nullptr;
	int* rus = nullptr;
	int* lit = nullptr;
	int sizeM = 0;
	int sizeR = 0;
	int sizeL = 0;
	string name;
	
public:
	Student()
	{

	}
	Student(string name)
	{
		this->name = name;
	}

	Student(const Student& st)
	{
		this->name = st.name;
		this->sizeM = st.sizeM;
		this->sizeR = st.sizeR;
		this->sizeL = st.sizeL;
		delete[]mat;
		mat = new int[sizeM];
		for (int i = 0; i < sizeM; i++)
		{
			mat[i] = st.mat[i];
		}
		delete[]rus;
		rus = new int[sizeR];
		for (int i = 0; i < sizeR; i++)
		{
			rus[i] = st.rus[i];
		}
		delete[]lit;
		lit = new int[sizeL];
		for (int i = 0; i < sizeL; i++)
		{
			lit[i] = st.lit[i];
		}
	}

	Student operator =(const Student& st)
	{
		this->name = st.name;
		this->sizeM = st.sizeM;
		this->sizeR = st.sizeR;
		this->sizeL = st.sizeL;
		delete[]mat;
		mat = new int[sizeM];
		for (int i = 0; i < sizeM; i++)
		{
			mat[i] = st.mat[i];
		}
		delete[]rus;
		rus = new int[sizeR];
		for (int i = 0; i < sizeR; i++)
		{
			rus[i] = st.rus[i];
		}
		delete[]lit;
		lit = new int[sizeL];
		for (int i = 0; i < sizeL; i++)
		{
			lit[i] = st.lit[i];
		}
		return *this;
	}

	void addMarkMat(int n)
	{
		int* buf = new int[sizeM + 1];
		for (int i = 0; i < sizeM; i++)
		{
			buf[i] = mat[i];
		}
		buf[sizeM] = n;
		delete[]mat;
		mat = buf;
		sizeM++;
	}
	void addMarkRus(int n)
	{
		int* buf = new int[sizeR + 1];
		for (int i = 0; i < sizeR; i++)
		{
			buf[i] = rus[i];
		}
		buf[sizeR] = n;
		delete[]rus;
		rus = buf;
		sizeR++;
	}
	void addMarkLit(int n)
	{
		int* buf = new int[sizeL + 1];
		for (int i = 0; i < sizeL; i++)
		{
			buf[i] = lit[i];
		}
		buf[sizeL] = n;
		delete[]lit;
		lit = buf;
		sizeL++;
	}

	void addMark()
	{
		for (int i = 0; i < 3; i++)
		{
			addMarkMat(random(1, 5));
			addMarkRus(random(1, 5));
			addMarkLit(random(1, 5));

		}
	}

	void showSt()
	{
		cout << name << " :" << endl;
		cout << "MATEMATICA : ";
		for (int i = 0; i < sizeM; i++)
		{
			cout << mat[i] << " ";

		}
		cout << endl;
		cout << "RUSSKII : ";
		for (int i = 0; i < sizeR; i++)
		{
			cout << rus[i] << " ";

		}
		cout << endl;
		cout << "LITERATURA : ";
		for (int i = 0; i < sizeL; i++)
		{
			cout << lit[i] << " ";

		}
		cout << endl;
	}
	

	~Student()
	{
		delete[]mat;
		delete[]rus;
		delete[]lit;
	}
};

class ExcellentStudent : public Student {

	float stipuha = 1500;
	static int counterExcellentStudent;
	static float counterStipuha;
public:
	ExcellentStudent() {}
	ExcellentStudent(string name, float stipuha=1500):Student(name) {
		this->name = name;
		this->stipuha = stipuha;
		counterExcellentStudent++;
		counterStipuha += stipuha;
	}
	static float getStipuha() {
		return counterStipuha;
	}
	static int getExcellentStudent() {
		return counterExcellentStudent;
	}
	
	

};



class Class
{
	static int counter;
	Student* student = nullptr;
	ExcellentStudent* excellentStudent = nullptr;
	int sizeSt = 0;
	int sizeEx = 0;
	string name;
public:
	Class()
	{

	}
	Class(string name)
	{
		this->name = name;
	}
	Class (const Class& st)
	{
		this->sizeEx = st.sizeEx;
		this->sizeSt = st.sizeSt;
		this->name = st.name;
		delete[]student;
		student = new Student[sizeSt];
		for (int i = 0; i < sizeSt; i++)
		{
			student[i] = st.student[i];
		}
		delete[]excellentStudent;
		excellentStudent = new ExcellentStudent[sizeEx];
		for (int i = 0; i < sizeEx; i++)
		{
			excellentStudent[i] = st.excellentStudent[i];
		}
	}
	static int getCounter()
	{
		return counter;
	}

	void operator =(const Class& st)
	{
		this->sizeEx = st.sizeEx;
		this->sizeSt = st.sizeSt;
		this->name = st.name;
		delete[]student;
		student = new Student[sizeSt];
		for (int i = 0; i < st.sizeSt; i++)
		{
			student[i] = st.student[i];
		}
		delete[]excellentStudent;
		excellentStudent = new ExcellentStudent[sizeEx];
		for (int i = 0; i < st.sizeEx; i++)
		{
			excellentStudent[i] = st.excellentStudent[i];
		}
	}

	void addStudent(Student st)
	{
		Student* buf = new Student[sizeSt+1];
		for (int i = 0; i < sizeSt; i++)
		{
			buf[i] = student[i];
		}
		buf[sizeSt] = st;
		delete[]student;
		student = buf;
		sizeSt++;
		counter++;
	}
	void addExcellentStudent(ExcellentStudent st)
	{
		ExcellentStudent* buf = new ExcellentStudent[sizeEx + 1];
		for (int i = 0; i < sizeEx; i++)
		{
			buf[i] = excellentStudent[i];
		}
		buf[sizeEx] = st;
		delete[]excellentStudent;
		excellentStudent = buf;
		sizeEx++;
		counter++;
	}

	void showClass()
	{
		cout << name <<" : " << endl;
		for (int i = 0; i < sizeSt; i++)
		{
			student[i].showSt();
			cout << endl;
		}
		cout << endl;
	}


	~Class()
	{
		delete[]student;
		delete[]excellentStudent;
	}
};


class Scool {
	string name;
	Class* clas = nullptr;
	int sizeCl = 0;
public:
	Scool(string name) {
		this->name = name;
	}
	Scool (const Scool& st)
	{
		this->name = st.name;
		this->sizeCl = st.sizeCl;
		if(this->clas!=nullptr)delete[]clas;
		clas = new Class[sizeCl];
		for (int i = 0; i < st.sizeCl; i++)
		{
			clas[i] = st.clas[i];
		}
	}

	Scool operator =(const Scool& st)
	{
		this->name = st.name;
		this->sizeCl = st.sizeCl;
		if (this->clas != nullptr)delete[]clas;
		clas = new Class[sizeCl];
		for (int i = 0; i < st.sizeCl; i++)
		{
			clas[i] = st.clas[i];
		}
	}

	void addClass(Class st)
	{
		Class* buf = new Class[sizeCl+1];
		for (int i = 0; i < sizeCl; i++)
		{
			buf[i] = clas[i];
		}
		buf[sizeCl] = st;
		delete[]clas;
		clas = buf;
		sizeCl++;
	}

	void showScool()
	{
		cout<<" Scola " << name << " : " << endl;
		for (int i = 0; i < sizeCl; i++)
		{
			cout << "\t"; 
			clas[i].showClass();
		}
	}



	~Scool()
	{
		delete[]clas;
	}
};

