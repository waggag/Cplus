#include<iostream>
using namespace std;
class Tree{
	public :
		Tree(int _age=0);
		~Tree();
		void grow(int years=0);
		void age();
	private :
		int ages;
}; 
Tree::Tree(int _age){
	ages = _age;
};
Tree::~Tree(){
}
//增加Tree的ages 
void Tree::grow(int years)
{
	ages = ages + years;
}
//显示Tree的ages 
void Tree::age(){
	cout<<"The tree age is "<<ages<<endl;
}

int main(){
	Tree tree;
	cout<<"show the tree!"<<endl;
	tree.age();
	tree.grow(10);
	tree.age();
	return 0;
}










