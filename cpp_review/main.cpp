#include <iostream>

using namespace std;
class classA
{
	private:
	int priv_n;
	
	protected:
	int prot_n;
	
	public:
	int pub_n;
	classA()
	{
		cout<<"classA constructor"<<endl;
		priv_n=100;
		prot_n=100;
		pub_n=100;
	}
	~classA()
	{
		cout<<"classA destructor"<<endl;
	}
	virtual void print_n()
	{
		cout<<"classA print_n: "<<endl;
		cout<<priv_n<<" "<<prot_n<<" "<<pub_n<<endl;
	}

	friend class classC;
};
class classB : public classA
{
	public:
	classB()
	{
		cout<<"classB constructor"<<endl;
	}
	~classB()
	{
		cout<<"classB destructor"<<endl;
	}
	void child_encap()
	{
		/*priv_n=200;*/
		prot_n=200;
		pub_n=200;
	} 
	void print_n()
	{
		cout<<"classB print_n"<<endl;
		cout<<prot_n<<" "<<pub_n<<endl;
	}
};
class classC
{
	public:
	classC()
	{
		cout<<"classC constructor"<<endl;
	}
	~classC()
	{
		cout<<"classC desturctor"<<endl;
	}
	void friend_encap(classA *p)
	{
		cout<<"Inside friend_encap"<<endl;
		p->print_n();
		p->priv_n=300;
		p->prot_n=300;
		p->pub_n=300;
		cout<<"Returning friend_encap"<<endl;
	}
};

int main(int argc, char *argv[])

{
	cout<<"Creating classA instance"<<endl;
	classA classA_instance;
	cout<<"=========================="<<endl;
	cout<<"Creating classB instance"<<endl;
	classB classB_instance;
	cout<<"=========================="<<endl;
	cout<<"Creating classC instance"<<endl;
	classC classC_instance;
	cout<<"=========================="<<endl;

	classA_instance.print_n();
	cout<<"=========================="<<endl;
	classB_instance.child_encap();
	classB_instance.print_n();
	cout<<"=========================="<<endl;
	classC_instance.friend_encap(&classA_instance);
	classA_instance.print_n();
	cout<<"=========================="<<endl;
	classC_instance.friend_encap(&classB_instance);
	classB_instance.print_n();
	return 0;
}
