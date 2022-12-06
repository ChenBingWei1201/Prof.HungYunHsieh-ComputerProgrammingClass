//PREPEND BEGIN
#include <iostream>
#include <iomanip>

using namespace std;
//PREPEND END

//TEMPLATE BEGIN
class Matrix{
    //	has a private static constant member dim
    friend ostream & operator<<(ostream &output, const Matrix &m1)
    {
		for (int i = 0; i < dim; i++)
			for (int j = 0; j < dim; j++)
				output << fixed << setprecision(2) << m1.p[i][j] << (j == 2 ? "\n" : " ");
		return output;
	}
	private:
    	static const int dim;
    	double p[3][3];
    public:
		Matrix(double num = 0)
		{
			if (num == 0)
			{
				for (int i = 0; i < dim; i++)
					for (int j = 0; j < dim; j++)
						p[i][j] = num;
			}
			else
			{
				for (int i = 0; i < dim; i++)
					for (int j = 0; j < dim; j++)
						p[i][j] = (i == j ? num : 0);
			}
		}
		Matrix operator+(const Matrix &m1)
		{
			Matrix m2;
			for (int i = 0; i < dim; i++)
					for (int j = 0; j < dim; j++)
						m2.p[i][j] = m1.p[i][j] + p[i][j];
			return m2;
		}
		Matrix operator*(double x)
		{
			Matrix m2;
			for (int i = 0; i < dim; i++)
					for (int j = 0; j < dim; j++)
						m2.p[i][j] = p[i][j] * x;
			return m2;
		}
		friend Matrix operator*(double x, const Matrix &m1) 
		{
            Matrix m2;
            for(int i = 0; i < dim; i++)
                for(int j = 0; j < dim; j++)
                    	m2.p[i][j] = m1.p[i][j] * x;
            return m2;
        }
}; 

//TEMPLATE END

//APPEND BEGIN
const int Matrix::dim = 3;

int main()
{
    Matrix a(0); // Zero matrix
    Matrix b(1); // Identity matrix
    Matrix c; // Null constructor
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    Matrix d(1);
    cout << d * 2.0 << endl;
    
    Matrix e(1);
    cout << 2.0 * e << endl;

    Matrix f(1);
    Matrix g(1);

    cout << f + g << endl;
    cout << f << endl;
    
    return 0;
}
//APPEND END
