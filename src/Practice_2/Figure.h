using namespace std;

namespace Figure {
	class Figure
	{
	public:
		Figure(
			float x1, float x2, float x3, float x4,
			float y1, float y2, float y3, float y4
		);
		~Figure();

		void show();
		bool is_prug();
		bool is_square();
		bool is_romb();
		bool is_in_circle();
		bool is_out_circle();

	private:
		float x1, x2, x3, x4;
		float y1, y2, y3, y4;
		float S;
		float P;
		float getP();
		float getS();
		float angle(float x11, float x12, float x21, float x22, float y11, float y12, float y21, float y22);
		float len(float x1l, float x2l, float y1l, float y2l);
	};
}