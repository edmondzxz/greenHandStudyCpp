class Base{
	virtual void p(){
		cout<<"Base p"<<endl;
	}
};
class Child:public Base
{
public:
	void p() override final {
		cout << "Child p" << endl;
	}
};
