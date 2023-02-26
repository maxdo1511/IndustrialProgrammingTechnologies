using namespace std;

namespace Figure {
	class Triangle
	{
	public:
		Triangle(double a, double b, double c);
		~Triangle();
		bool exst_tr();
		void set(double a1, double b1, double c1);
		void show();
		double perimetr();
		double square();

	private:
		double a, b, c;
	};
}