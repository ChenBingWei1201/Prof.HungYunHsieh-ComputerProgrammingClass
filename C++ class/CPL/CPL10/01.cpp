//PREPEND BEGIN  
#include <iostream>
#include <iomanip>

using namespace std;
//PREPEND END

//TEMPLATE BEGIN
class Matrix{
	friend ostream & operator<<(ostream &output, const Matrix &m1)
    {
		for (int i = 0; i < dim; i++)
		{
			for (int j = 0; j < dim; j++)
				output << fixed << setprecision(2) << m1.p[i][j] << " ";
			output << endl;
		}
			
		
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
        double& operator()(const int &i, const int &j)
        {
        	return p[i][j];
		}
		
		Matrix operator*(const Matrix &m1)
		{
			Matrix m2;
			for (int i = 0; i < dim; i++)
				for (int j = 0; j < dim; j++)
					for (int k = 0; k < dim; k++)
						m2.p[i][j] += m1.p[i][k] * m1.p[k][j];	
			return m2;
		 
		} 
		Matrix& operator+=(const Matrix&m1)
		{
			for (int i = 0; i < dim; i++)
				for (int j = 0; j < dim; j++)
					this -> p[i][j] += m1.p[i][j];
			return *this;
		}
		Matrix& operator*=(const Matrix&m1)
		{
			*this = *this * m1;
			return *this;	
		}
		Matrix (const Matrix &m1)
		{
			for (int i = 0; i < dim; i++)
				for (int j = 0; j < dim; j++)
					this -> p[i][j] = m1.p[i][j];
		}
		Matrix& operator=(const Matrix &m1)
		{
			for (int i = 0; i < dim; i++)
				for (int j = 0; j < dim; j++)
					this -> p[i][j] = m1.p[i][j];
			return *this;
		}
		friend Matrix transpose(const Matrix &m1)
		{
			Matrix m2;
			for (int i = 0; i < dim; i++)
				for (int j = 0; j < dim; j++)
					m2.p[i][j] = m1.p[j][i];
			return m2;
		}
		~Matrix(){}
};

//TEMPLATE END

//APPEND BEGIN
const int Matrix::dim = 3;

int main()
{// old
    Matrix a(0); // Zero matrix
    Matrix b(1); // Identity matrix
    Matrix c; // Null constructor
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    Matrix d(1);
    cout << d * 2.0 << endl;
    
    Matrix e(1);
    cout << 3.0 * e << endl;

    Matrix f(1);
    Matrix g(1);

    cout << f + g << endl;
    cout << f << endl;
  
    Matrix h(1);
    h(1, 0) = 2;

    cout << "h:" << endl << h << endl;
	
    Matrix i(1);
    i(0, 1) = 2;
    i(0, 2) = 3;
	
    cout << "i * i:" << endl << i * i << endl; 
    cout << "i:" << endl << i << endl; 
	
    Matrix j(1);
    j(0, 1) = 2;
    j(0, 2) = 3;
	
    j += j;
    cout << "j+=j:" << endl << j << endl;

    j *= j;
    cout << "j*=j:" << endl << j << endl; // wrong

    Matrix x(1);
    Matrix y(x * 2.0);  // Copy constructor
    Matrix z = (x + x); // Copy constructor
    Matrix w;

    y += y; // Matrix a will not be modified, thanks to deep copy
    w = z;  // Copier
    z += z; // Matrix d will not be modified, thanks to deep copy

    cout << "x:" << endl << x << endl;
    cout << "y:" << endl << y << endl; 
    cout << "z:" << endl << z << endl; 
    cout << "w:" << endl << w << endl; 

    Matrix v(1);
    v(0, 1) = 2;
    v(0, 2) = 3;

    cout << v << endl;
    cout << transpose(v) << endl;
  
    return 0;
}
//APPEND END
