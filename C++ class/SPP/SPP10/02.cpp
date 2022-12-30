//PREPEND BEGIN
#include <iostream>
using namespace std;

class MyVector {
protected:
    int _dim;
    int *_vec;
public:
    MyVector(): _dim(0), _vec(NULL) {}
    MyVector(int dim, int *v) {
        _dim = dim;
        _vec = new int[_dim];
        for (int i = 0; i < _dim; i++) {
            _vec[i] = v[i];
        }
    }
    ~MyVector() {
        if (_vec != NULL)
            delete[] _vec;
        _vec = NULL;
    }

    friend ostream& operator<< (ostream& os, const MyVector& v) {
        for (int i = 0; i < v._dim - 1; i++) {
            os << v._vec[i] << " ";
        }
        os << v._vec[v._dim - 1];
        return os;
    }
};
//PREPEND END
//TEMPLATE BEGIN
class MyVector2D: public MyVector {
public:
    MyVector2D(int *v): MyVector(2, v) {}

    // todo: friend ostream& operator<< (ostream& os, const MyVector2D& v) ...
    
    friend ostream& operator<< (ostream& os, const MyVector2D& v)
    {
    	os << "2D: " << static_cast<const MyVector&>(v);
    	return os;
	}
};
class MyVectorNN: public MyVector {
    // todo: 定義新 member _nnDim
    int _nnDim;
public:
    MyVectorNN(int dim, int nnDim, int *v) {
        _dim = dim;
        _vec = new int[_dim];
        // todo: 初始化 _nnDim
		_nnDim = nnDim;
        for(int i = 0; i < _dim; ++i) 
		{
            // todo: 前 _nnDim 維實現非負即可
            if (i + 1 <= _nnDim )
            	_vec[i] = (v[i] < 0 ? 0 : v[i]);
            else
            	_vec[i] = v[i];
        }
    }

    // todo: friend ostream& operator<< (ostream& os, const MyVectorNN& v) ...
    friend ostream& operator<< (ostream& os, const MyVectorNN& v)
    {
    	os << "NN: " << static_cast<const MyVector&>(v);
    	return os;
	}
};
//TEMPLATE END
//APPEND BEGIN
int main() {
    int *v1 = new int[2];
    cin >> v1[0] >> v1[1];

    int d, nnd;
    cin >> d >> nnd;

    int *v2 = new int[d];
    for (int i = 0; i < d; ++i)
        cin >> v2[i];

    MyVector2D a(v1);
    MyVectorNN b(d, nnd, v2);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    delete[] v1;
    delete[] v2;

    return 0;
}
//APPEND END
